#ifndef NAV_CONSTANTS
#define NAV_CONSTANTS

// switch
#define DUMP_DATA
// #define LOGGING
#define RUN_NOTICE
#define CALCU_TIME

#define LOAD_DATA_FROM_DISK
#define GENERATE_DATA

// N constants
#define N_VARS  9
#define N_PRINT 1
#define N_REPEAT 20
#define N_TIMES_TO_GEN_DATA 10
#define MAX_ITERS 512

// limitation of iteration
#define LIMIT 1e-8f

#define DATA_LIMIT 1e-2f

// length base
#define _M 1.0f
#define _CM 1e-2f
#define _MM 1e-3f
#define _UM 1e-6f

// math
#define PI 3.141592653f

// noise base
#define NOISE_DATA_XYZ (1.0 * _CM)
#define NOISE_VARS_XYZ (1 * _M)
#define NOISE_VARS_ROTATE (5 * PI / 180.0)
#define NOISE_VARS_F (3 * _MM)
#define NOISE_VARS_X0Y0 (3 * _UM)


// filesystem
#define FID "../records/id.txt"
#define PVARS "../records/vars/"
#define PDATA "../records/data/"
#define PERROR "../records/errors/"
#define PVARS_HISTORY "../records/vars_history/"

#endif