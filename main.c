#include <stdio.h>

#include <assert.h>

#include "_ceu_app.h"

#include "_ceu_app.c"

int main (int argc, char *argv[])
{
    char CEU_DATA[sizeof(CEU_Main)];
    tceu_app app;
        app.data = (tceu_org*) &CEU_DATA;
        app.init = &ceu_app_init;

    app.init(&app);
    while (1) {
    	ceu_sys_go(&app, CEU_IN_TICK, (tceu_evtp)NULL);
    }
    return 0;
}

