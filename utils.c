#include "./utils.h"

bool haveError;
char errorMessage[MAX_ERROR];

void MallocMemoryForVector(struct Vector *);

void init()
{
    nrVars = nrVectors = 0;
    nextVarId = 0;
    haveError = false;
    errorMessage[0] = 0;
    bzero(varDeclared, sizeof(varDeclared));
}

void ExtractVectorName(char *where, char *fromWhere)
{
    char *aux, copy;
    aux = strchr(fromWhere, '[');
    do
    {
        --aux;
    } while (*aux == ' ' || *aux == '\t');

    ++aux;
    copy = *aux;
    *aux = 0;
    strcpy(where, fromWhere);
    *aux = copy;
}

void DeclareVector(int vectorType, char *vName, int vSize)
{
    int i;
    for (i = 0; i < nrVectors; ++i)
    {
        if (strcmp(vectors[i].vectorName, vName) == 0)
        {
            haveError = true;
            strcpy(errorMessage, "you idiot, you ALREADY HAVE THIS VECTOR");
            return;
        }
    }

    for (i = 0; i < nrVars; ++i)
    {
        if (strcmp(vars[i].varName, vName) == 0)
        {
            haveError = true;
            strcpy(errorMessage, "Ugh... YOU ALREADY USED THAT NAME");
        }
    }

    strcpy(vectors[nrVectors].vectorName, vName);
    vectors[nrVectors].dataType = vectorType;
    vectors[nrVectors].size = vSize;
    vectors[nrVectors].idVector = nextVarId++;

    MallocMemoryForVector(&vectors[nrVectors]);
    ++nrVectors;
}

void MallocMemoryForVector(struct Vector *vector)
{
    vector->values = (struct data *)malloc(vector->size * sizeof(struct data));
}

void CopyNumberToString(char *s, int nr)
{
    int nrc, aux, i;

    s[0] = 0;
    if (nr == 0)
    {
        s[0] = '0';
        s[1] = 0;
        return;
    }
    aux = nr;
    while (nr)
    {
        ++nrc;
        nr /= 10;
    }
    for (i = nrc - 1; i >= 0; --i)
    {
        s[i] = aux % 10 + '0';
        aux /= 10;
    }
    s[nrc] = 0;
}

void FunctionCallNoParameters(char *fId)
{
}

struct FunctionResult FunctionCallWithParameters(char *fId, char *params)
{
    struct FunctionResult rez;

    return rez;
}

int SetDataType(const char *text)
{
    if (strcmp(text, "int") == 0)
        return INT_t;
    if (strcmp(text, "char") == 0)
        return CHAR_t;
    if (strcmp(text, "string") == 0)
        return STRING_t;
    if (strcmp(text, "void") == 0)
        return VOID_t;

    return INVALID_t;
}

struct variable OperatorFunction(char *a, const char *operator, char *b)
{
    struct variable rez, var1, var2;

    var1 = GetVariable(a);
    var2 = GetVariable(b);

    if (haveError)
    {
        return rez;
    }

    if (HaveDifferentTypes(var1, var2))
    {
        haveError = true;
        strcpy(errorMessage, "variables have different data types, you blittering idiot!");
        return rez;
    }

    if (strcmp(operator, "+") == 0)
        rez = SumFunction(var1, var2);
    if (strcmp(operator, "-") == 0)
        rez = MinusFunction(var1, var2);
    if (strcmp(operator, "*") == 0)
        rez = TimesFunction(var1, var2);
    if (strcmp(operator, "/") == 0)
        rez = SumFunction(var1, var2);
    return rez;
}

bool HaveDifferentTypes(struct variable a, struct variable b)
{
    return false;
    if (a.dataType != b.dataType)
        return true;
    return false;
}

struct variable SumFunction(struct variable a, struct variable b)
{
    struct variable res;
    if (a.dataType == INT_t && b.dataType == INT_t)
        res.value.intVal = a.value.intVal + b.value.intVal;

    if (a.dataType == DOUBLE_t && b.dataType == DOUBLE_t)
        res.value.doubleVal = a.value.doubleVal + b.value.doubleVal;

    if (a.dataType == DOUBLE_t && b.dataType == INT_t)
        res.value.doubleVal = a.value.doubleVal + b.value.intVal;

    if (a.dataType == INT_t && b.dataType == DOUBLE_t)
        res = SumFunction(b, a);

    if (a.dataType == CHAR_t && b.dataType == CHAR_t)
    {
        res.value.stringVal = (char *)malloc(3);
        res.value.stringVal[0] = a.value.charVal;
        res.value.stringVal[1] = b.value.charVal;
        res.value.stringVal[2] = 0;
    }

    if (a.dataType == STRING_t && b.dataType == STRING_t)
    {
        res.value.stringVal = (char *)malloc(strlen(a.value.stringVal) + 2);
        strcpy(res.value.stringVal, a.value.stringVal);
        res.value.stringVal[strlen(res.value.stringVal)] = b.value.charVal;
        res.value.stringVal[sizeof(res.value.stringVal) - 1] = 0;
    }

    if (a.dataType == CHAR_t && b.dataType == STRING_t)
        res = SumFunction(b, a);

    if (a.dataType == STRING_t && b.dataType == STRING_t)
    {
        res.value.stringVal = (char *)malloc(strlen(a.value.stringVal) + strlen(b.value.stringVal) + 1);
        strcpy(res.value.stringVal, a.value.stringVal);
        strcat(res.value.stringVal, b.value.stringVal);
    }
    return res;
}

struct variable MinusFunction(struct variable a, struct variable b)
{
    struct variable res;
    if (a.dataType == INT_t && b.dataType == INT_t)
        res.value.intVal = a.value.intVal - b.value.intVal;

    if (a.dataType == DOUBLE_t && b.dataType == DOUBLE_t)
        res.value.doubleVal = a.value.doubleVal - b.value.doubleVal;

    if (a.dataType == DOUBLE_t && b.dataType == INT_t)
        res.value.doubleVal = a.value.doubleVal - b.value.intVal;

    if (a.dataType == INT_t && b.dataType == DOUBLE_t)
        res = MinusFunction(b, a);
    return res;
}

struct variable TimesFunction(struct variable a, struct variable b)
{
    struct variable res;
    if (a.dataType == INT_t && b.dataType == INT_t)
        res.value.intVal = a.value.intVal * b.value.intVal;

    if (a.dataType == DOUBLE_t && b.dataType == DOUBLE_t)
        res.value.doubleVal = a.value.doubleVal * b.value.doubleVal;

    if (a.dataType == DOUBLE_t && b.dataType == INT_t)
        res.value.doubleVal = a.value.doubleVal * b.value.intVal;

    if (a.dataType == INT_t && b.dataType == DOUBLE_t)
        res = TimesFunction(b, a);
    return res;
}

struct variable FractionFunction(struct variable a, struct variable b)
{
    struct variable res;
    if (a.dataType == INT_t && b.dataType == INT_t)
        res.value.intVal = a.value.intVal / b.value.intVal;

    if (a.dataType == DOUBLE_t && b.dataType == DOUBLE_t)
        res.value.doubleVal = a.value.doubleVal / b.value.doubleVal;

    if (a.dataType == DOUBLE_t && b.dataType == INT_t)
        res.value.doubleVal = a.value.doubleVal / b.value.intVal;

    if (a.dataType == INT_t && b.dataType == DOUBLE_t)
        res = FractionFunction(b, a);
    return res;
}

void AddNewVariable(int type, char *varName)
{
    //daca am deja a, eroare
    int i;
    for (i = 0; i < nrVars; ++i)
    {
        if (strcmp(vars[i].varName, varName) == 0)
        {
            haveError = true;
            strcpy(errorMessage, "DIDN'T YOUR FISH MEMORY KNOW THAT YOU ALREADY DECLARED THIS VARIABLE?!");
            return;
        }
    }
    for (i = 0; i < nrVectors; ++i)
    {
        if (strcmp(vectors[i].vectorName, varName) == 0)
        {
            haveError = true;
            strcpy(errorMessage, "Ugh... YOU ALREADY USED THAT NAME!");
            return;
        }
    }

    vars[nrVars].dataType = type;
    strcpy(vars[nrVars].varName, varName);
    vars[nrVars].idVar = nextVarId++;
    ++nrVars;
}

struct variable GetVariable(char *varName)
{
    for (int i = 0; i < nrVars; ++i)
        if (strcmp(vars[i].varName, varName) == 0)
            return vars[i];

    //eroare
    haveError = true;
    strcpy(errorMessage, "DOES IT LOOK LIKE THIS VARIABLE EXISTS?!");
    return vars[0];
}

void CheckAssign(char varName[], int val)
{
}

void AssignValue(char *varName, int val)
{
    int i;
    for (i = 0; i < nrVars; ++i)
        if (strcmp(varName, vars[i].varName) == 0)
        {
            vars[i].value.intVal = val;
            return;
        }

    //eroare
    return;
}

void AssignVarValue(char *varName1, struct variable var2)
{
    int i = -1;
    for (i = 0; i < nrVars; ++i)
        if (strcmp(varName1, vars[i].varName) == 0)
            break;

    if (i == -1)
    {
        //eroare
        return;
    }

    vars[i].value = var2.value;
}

void Yell(char *varName)
{
    struct variable var;
    var = GetVariable(varName);

    switch (var.dataType)
    {
    case INT_t:
        printf("%d", var.value.intVal);
        break;
    case CHAR_t:
        printf("%c", var.value.charVal);
        break;
    case STRING_t:
        printf("%s", var.value.stringVal);
        break;
    case DOUBLE_t:
        printf("%lf", var.value.doubleVal);
        break;
    case BOOL_t:
        printf("%s", var.value.boolVal ? "true" : "false");
        break;
    }
}

void YellString(char *text)
{
    if (strcmp(text, "\\n") == 0)
    {
        printf("\n");
    }
    else
        printf("%s", text);
}