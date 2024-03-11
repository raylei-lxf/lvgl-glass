#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "app_config_interface.h"

#include "config.h"

int param_config_init()
{
    va_save_param_init();
}

int change_language(E_LANGUAGE value)
{
   return write_int_type_param("setting",  "language",  value);
}

E_LANGUAGE query_language(void)
{
  int value;
  
  read_int_type_param("setting", "language",  &value);
  return value;
}

int restore_factory(void)
{
    system("rm /mnt/UDISK/records.dat");
}

