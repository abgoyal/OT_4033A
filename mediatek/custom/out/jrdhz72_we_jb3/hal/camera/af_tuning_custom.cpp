

#include "camera_custom_types.h"
#include "af_param.h"
#include "af_tuning_custom.h"

AF_PARAM_T const&
getAFParam()
{
    static AF_PARAM_T g_AFparam = 
    {
        1,   //i4AFS_STEP_MIN_ENABLE
        4,   // i4AFS_STEP_MIN_NORMAL
        4,   // i4AFS_STEP_MIN_MACRO
        1,   // i4AFS_MODE  0 : singleAF, 1:smoothAF
        1,   // i4AFC_MODE  0 : singleAF, 1:smoothAF
        1,   // i4VAFC_MODE  0 : singleAF, 1:smoothAF        
        1,   // i4ReadOTP 0 : disable, 1:enable 
        5,   // i4FD_DETECT_CNT
        5,   // i4FD_NONE_CNT
        
        20,  // i4FV_SHOCK_THRES
        10000,  // i4FV_SHOCK_OFFSET        
        2,   // i4FV_VALID_CNT
        100, // i4FV_SHOCK_FRM_CNT
        2    // i4FV_SHOCK_CNT
        
    };

    return g_AFparam;
}

AF_CONFIG_T const&
getAFConfig()
{
    static AF_CONFIG_T g_AFconfig;

    g_AFconfig.i4SGG_GAIN = 64;
    g_AFconfig.i4SGG_GMR1 = 31;
    g_AFconfig.i4SGG_GMR2 = 63;
    g_AFconfig.i4SGG_GMR3 = 127;    
    g_AFconfig.AF_DECI_1  = 0;
    g_AFconfig.AF_ZIGZAG  = 0;
    g_AFconfig.AF_ODD     = 0;
    g_AFconfig.AF_IIR_KEEP = 1;
    g_AFconfig.AF_FILT_F0  = 4;
    g_AFconfig.AF_FILT1[0] = 15;
    g_AFconfig.AF_FILT1[1] = 36;
    g_AFconfig.AF_FILT1[2] = 43;
    g_AFconfig.AF_FILT1[3] = 36;
    g_AFconfig.AF_FILT1[4] = 22;
    g_AFconfig.AF_FILT1[5] = 10;
    g_AFconfig.AF_FILT1[6] = 3;
    g_AFconfig.AF_FILT1[7] = 0;
    g_AFconfig.AF_FILT1[8] = 0;
    g_AFconfig.AF_FILT1[9] = 0;    
    g_AFconfig.AF_FILT1[10] = 0;
    g_AFconfig.AF_FILT1[11] = 0;

    g_AFconfig.AF_TH[0] = 5;
    g_AFconfig.AF_TH[1] = 5;
    g_AFconfig.AF_TH[2] = 5;

    g_AFconfig.AF_THEX[0] = 5;
    g_AFconfig.AF_THEX[1] = 5;

    return g_AFconfig;
}

