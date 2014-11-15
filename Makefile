wiring: main.c _ceu_app.c _ceu_app.h
	gcc main.c -o wiring -lm

_ceu_app.c _ceu_app.h: wiring.ceu
	ceu wiring.ceu
