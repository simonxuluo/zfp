#include "cfparray4d.h"
#include "zfparray4.h"

#include "template/template.h"

#define CFP_ARRAY_TYPE cfp_array4d
#define CFP_REF_TYPE cfp_ref4d
#define CFP_PTR_TYPE cfp_ptr4d
#define CFP_ITER_TYPE cfp_iter4d
#define ZFP_ARRAY_TYPE zfp::array4d
#define ZFP_SCALAR_TYPE double

#include "cfparray_source.cpp"
#include "cfparray4_source.cpp"

#undef CFP_ARRAY_TYPE
#undef CFP_REF_TYPE
#undef CFP_PTR_TYPE
#undef CFP_ITER_TYPE
#undef ZFP_ARRAY_TYPE
#undef ZFP_SCALAR_TYPE
