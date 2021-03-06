#include "cfparray3f.h"
#include "zfparray3.h"

#include "template/template.h"

#define CFP_ARRAY_TYPE cfp_array3f
#define CFP_REF_TYPE cfp_ref3f
#define CFP_PTR_TYPE cfp_ptr3f
#define CFP_ITER_TYPE cfp_iter3f
#define ZFP_ARRAY_TYPE zfp::array3f
#define ZFP_SCALAR_TYPE float

#include "cfparray_source.cpp"
#include "cfparray3_source.cpp"

#undef CFP_ARRAY_TYPE
#undef CFP_REF_TYPE
#undef CFP_PTR_TYPE
#undef CFP_ITER_TYPE
#undef ZFP_ARRAY_TYPE
#undef ZFP_SCALAR_TYPE
