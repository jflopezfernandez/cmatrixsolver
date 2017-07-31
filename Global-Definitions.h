#ifndef CMATRIXSOLVER_GLOBAL_DEFINITIONS_H
#define CMATRIXSOLVER_GLOBAL_DEFINITIONS_H

typedef int32_t INT;


#ifndef PROGRAM_SPECIFIC_MACROS
#define PROGRAM_SPECIFIC_MACROS

    #define ON      1
    #define OFF     0

    #define TRUE    1
    #define FALSE   0

    #define DEBUG   ON

#if DEBUG

#endif /* _DEBUG FLAGS */

    #ifndef CMATRIX_VARIABLES
    #define CMATRIX_VARIABLES

        #define UNINITIALIZED_INTEGER (-1)

    #endif /* VARIABLES */

    #ifndef CMATRIX_RETURN_VALUES
    #define CMATRIX_RETURN_VALUES

        #define FUNCTION_ERROR (-1);
        #define FUNCTION_NOT_YET_IMPLEMENTED (-2);

    #endif /* _RETURN_VALUES */

#else
    #error "'PROGRAM_SPECIFIC_MACROS' ALREADY DEFINED - CANNOT DECLARE PROGRAM-SPECIFIC MACROS"
#endif


#endif //CMATRIXSOLVER_GLOBAL_DEFINITIONS_H
