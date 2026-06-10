#pragma once

#ifdef __cplusplus
extern "C" {
#endif
    typedef enum {
        CustomTitleBarHit_None = 0,
        CustomTitleBarHit_Minimize = 1,
        CustomTitleBarHit_Maximize = 2,
        CustomTitleBarHit_Titlebar = 3,
        CustomTitleBarHit_Top = 4,
    } CustomTitleBarHit;

#ifdef __cplusplus
}
#endif