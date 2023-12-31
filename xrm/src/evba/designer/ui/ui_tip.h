#ifndef __UI_TIP_H__
#define __UI_TIP_H__

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
*    includes
******************************************************************************/
#include "public.h"


/******************************************************************************
*    datas
******************************************************************************/
typedef struct
{
	lv_obj_t *parent;
	lv_obj_t *cont_main;
} tip_ui_t;


/******************************************************************************
*    functions
******************************************************************************/
void tip_ui_create(tip_ui_t *ui);
void tip_ui_destory(tip_ui_t *ui);

#ifdef __cplusplus
}
#endif

#endif
