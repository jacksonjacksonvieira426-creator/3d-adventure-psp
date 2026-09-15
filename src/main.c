// 3d-adventure - main.c gerado por V15
#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"

PSP_MODULE_INFO("3d-adventure", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// Tipos J2ME (sem colidir com classes do projeto)
typedef void* Alert;
typedef void* AlertType;
typedef void* Boolean;
typedef void* Byte;
typedef void* ByteArrayInputStream;
typedef void* ByteArrayOutputStream;
typedef void* Calendar;
typedef void* Canvas;
typedef void* Character;
typedef void* ChoiceGroup;
typedef void* Class_x;
typedef void* Command;
typedef void* CommandListener;
typedef void* Control;
typedef void* DataInputStream;
typedef void* DataOutputStream;
typedef void* Date;
typedef void* DateField;
typedef void* DeviceControl;
typedef void* DirectGraphics;
typedef void* DirectUtils;
typedef void* Display;
typedef void* Displayable;
typedef void* Double_x;
typedef void* Enumeration;
typedef void* Exception;
typedef void* Float_x;
typedef void* Font;
typedef void* Form;
typedef void* FullCanvas;
typedef void* GameCanvas;
typedef void* Gauge;
typedef void* Graphics;
typedef void* Hashtable;
typedef void* Image;
typedef void* ImageItem;
typedef void* InputStream;
typedef void* Integer;
typedef void* InterruptedException;
typedef void* Item;
typedef void* Iterator;
typedef void* List;
typedef void* ListItem;
typedef void* Locale;
typedef void* Long_x;
typedef void* MIDlet;
typedef void* Manager;
typedef void* Math;
typedef void* Object;
typedef void* OutputStream;
typedef void* Player;
typedef void* Process;
typedef void* Queue;
typedef void* Random;
typedef void* RecordStore;
typedef void* Runnable;
typedef void* Runtime;
typedef void* Screen;
typedef void* Short_x;
typedef void* Sound;
typedef void* Spacer;
typedef void* Stack;
typedef void* String;
typedef void* StringBuffer;
typedef void* StringItem;
typedef void* StringTokenizer;
typedef void* System;
typedef void* TextBox;
typedef void* TextField;
typedef void* Thread;
typedef void* Throwable;
typedef void* Ticker;
typedef void* TimeZone;
typedef void* Timer;
typedef void* TimerTask;
typedef void* Vector;

// Stubs de biblioteca
void j2me_canvas_repaint(void) { }
void j2me_canvas_serviceRepaints(void) { }
void j2me_gc(void) { }
void* j2me_image_get_graphics(void* img) { return img; }

// Forward typedefs das classes do projeto
typedef struct MIDlet1_s MIDlet1;
typedef struct MIDlet1_s MIDlet1_s;
typedef struct a_s a;
typedef struct a_s a_s;

// Globais
void* _self = 0;
void* _p1_self = 0;
void* _p2_self = 0;
void* _role_self = 0;
a* msf_mc = 0;
int Game_count = 0;
int MapCanvas_OFFY = 96;
int MapCanvas_OFFX = 180;
int MapCanvas_CanvasWidth = 480;
int MapCanvas_CanvasHeight = 272;
int MapCanvas_still = 0;
int MapCanvas_lightflag = 0;

// Structs
struct MIDlet1_s {
    void*        a;
    void*        if_x;
    void*        do_x;
};

struct a_s {
    void*        s;
    void*        Q;
    void*        a1;
    void*        o;
    void*        aD;
    void*        F;
    void*        for_x;
    void*        aV;
    void*        f;
    void*        aU;
    void*        d;
    void*        aT;
    void*        b;
    void*        byte;
    void*        n;
    void*        try_x;
    void*        U;
    void*        aO;
    void*        t;
    int          g;
    int          e;
    int          ab;
    int          Z;
    int          ax;
    int          l;
    int          j;
    int          J;
    int          H;
    int64_t      c;
    int64_t      void_x;
    int64_t      a;
    int64_t      bh;
    int64_t      else_x;
    int64_t      a8;
    int          case_x;
    int          ai;
    int          X;
    int          aR;
    int          K;
    int          al;
    int          bg;
    int          do_x;
    int          a7;
    int          a6;
    void*        aS;
    void*        w;
    void*        bb;
    void*        m;
    void*        R;
    short        a4;
    short        aH;
    short        ac;
    int          aa;
    int          Y;
    int          be;
    int          bc;
    int          V;
    int          new_x;
    int          aK;
    int          ar;
    int          aM;
    int          aL;
    int          null_x;
    int          D;
    int          goto_x;
    int          aN;
    int          af;
    int          aZ;
    int          aY;
    int          aX;
    int          aI;
    void*        ba;
    void*        G;
    void*        i;
    void*        aP;
    void*        aW;
    void*        B;
    void*        char_x;
    void*        ae;
    void*        C;
    void*        P;
    int          if_x;
    int          k;
    int          h;
    int          a9;
    short*       ay;
    short*       aw;
    short*       au;
    short*       at;
    short*       as;
    short*       aq;
    short*       ao;
    short*       an;
    short*       ak;
    short*       r;
    short*       p;
    short*       a3;
    short*       aF;
    short*       q;
    short*       bf;
    short*       N;
    short*       M;
    short**      bd;
    short*       aE;
    short*       ah;
    short**      a2;
    short*       aG;
    int**        a0;
    short*       I;
    short*       int_x;
    int          aj;
    int          ad;
    int          T;
    int          u;
    int          L;
    int          O;
    int          E;
    int          A;
    int          z;
    int          y;
    int          a5;
    int          long_x;
    int          aJ;
    int          S;
    int          v;
    int          aA;
    int          am;
    int*         x;
    int*         aQ;
    int**        aB;
    int**        az;
    short*       av;
    short*       ag;
    void*        aC;
    int64_t**    ap;
    void*        W;
};

// Prototipos
void MIDlet1_constructor(void* self);
void MIDlet1_startApp(void* self);
void MIDlet1_pauseApp(void* self);
void MIDlet1_destroyApp(void* self, int arg0);
void MIDlet1_a(void* self);
void a_constructor(void* self);
void a_if_x(void* self);
void a_try_x(void* self);
void a_keyPressed(void* self, int arg0);
void a_keyReleased(void* self, int arg0);
void a_run(void* self);
void a_paint(void* self, void* arg0);
void a_a_fn(void* self, int64_t arg0, int64_t arg1);
void a_new_x(void* self);
void a_if_x_2(void* self, int arg0, int arg1, int arg2);
void a_a_fn_2(void* self, int arg0, int arg1, int arg2);
void a_byte(void* self);
int a_for_x(void* self);
void* a_int_x(void* self);
void a_if_x_3(void* self, int arg0);
void a_do_x(void* self);
void a_commandAction(void* self, void* arg0, void* arg1);
void a_a_fn_3(void* self, int arg0);
void* a_a_fn_4(void* self);

// Implementacoes
void MIDlet1_constructor(void* self) {
    MIDlet1* s = (MIDlet1*)self;
    if (!s) return;
    (void)s;
}

void MIDlet1_startApp(void* self) {
    MIDlet1* s = (MIDlet1*)self;
    if (!s) return;
    (void)s;
}

void MIDlet1_pauseApp(void* self) {
    MIDlet1* s = (MIDlet1*)self;
    if (!s) return;
    (void)s;
}

void MIDlet1_destroyApp(void* self, int arg0) {
    MIDlet1* s = (MIDlet1*)self;
    if (!s) return;
    (void)s;
}

void MIDlet1_a(void* self) {
    MIDlet1* s = (MIDlet1*)self;
    if (!s) return;
    (void)s;
}

void a_constructor(void* self) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_if_x(void* self) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_try_x(void* self) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_keyPressed(void* self, int arg0) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_keyReleased(void* self, int arg0) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_run(void* self) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_paint(void* self, void* arg0) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_a_fn(void* self, int64_t arg0, int64_t arg1) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_new_x(void* self) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_if_x_2(void* self, int arg0, int arg1, int arg2) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_a_fn_2(void* self, int arg0, int arg1, int arg2) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_byte(void* self) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

int a_for_x(void* self) {
    a* s = (a*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* a_int_x(void* self) {
    a* s = (a*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void a_if_x_3(void* self, int arg0) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_do_x(void* self) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_commandAction(void* self, void* arg0, void* arg1) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_a_fn_3(void* self, int arg0) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void* a_a_fn_4(void* self) {
    a* s = (a*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    a* mc = (a*)calloc(1, sizeof(a));
    _self = mc;
    msf_mc = mc;

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;
        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);
        j2me_gfx_flip();
    }
    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}