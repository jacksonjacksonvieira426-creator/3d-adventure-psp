// 3d-adventure - Port automatico J2ME -> PSP
// Gerado por portador.py
// MIDlet: MIDlet1  Canvas: a

#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"
#include <stdint.h>

// ============================================
// TIPOS J2ME -> ponteiros opacos em C
// ============================================
typedef void* Image;
typedef void* Graphics;
typedef void* Font;
typedef void* String;
typedef void* Command;
typedef void* Display;
typedef void* Displayable;
typedef void* MIDlet;
typedef void* Canvas;

PSP_MODULE_INFO("3d-adventure", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// ============================================
// FORWARD DECLARATIONS das classes do projeto
// ============================================
typedef struct MIDlet1_s MIDlet1;
typedef struct a_s a;

// ============================================
// ESTRUTURAS DE DADOS (traduzidas do J2ME)
// ============================================

// === Classe: MIDlet1 (extends MIDlet) ===
// Padroes detectados: MIDLET, TEM_STARTAPP
struct MIDlet1_s {
    MIDlet1*        a;  // a (Ladventure/MIDlet1;)
    Display*        if;  // if (Ljavax/microedition/lcdui/Display;)
    a*              do;  // do (Ladventure/a;)
};

// === Classe: a (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, TEM_INPUT, TEM_RUN, USA_IMAGE
struct a_s {
    DirectGraphics* s;  // s (Lcom/nokia/mid/ui/DirectGraphics;)
    Graphics*       Q;  // Q (Ljavax/microedition/lcdui/Graphics;)
    Image*          a1;  // a1 (Ljavax/microedition/lcdui/Image;)
    Image*          o;  // o (Ljavax/microedition/lcdui/Image;)
    Image*          aD;  // aD (Ljavax/microedition/lcdui/Image;)
    Image*          F;  // F (Ljavax/microedition/lcdui/Image;)
    Image*          for;  // for (Ljavax/microedition/lcdui/Image;)
    signed char*    aV;  // aV ([B)
    Sound*          f;  // f (Lcom/nokia/mid/sound/Sound;)
    signed char*    aU;  // aU ([B)
    Sound*          d;  // d (Lcom/nokia/mid/sound/Sound;)
    signed char*    aT;  // aT ([B)
    Sound*          b;  // b (Lcom/nokia/mid/sound/Sound;)
    StringItem*     byte;  // byte (Ljavax/microedition/lcdui/StringItem;)
    Form*           n;  // n (Ljavax/microedition/lcdui/Form;)
    StringItem*     try;  // try (Ljavax/microedition/lcdui/StringItem;)
    Form*           U;  // U (Ljavax/microedition/lcdui/Form;)
    Font*           aO;  // aO (Ljavax/microedition/lcdui/Font;)
    List*           t;  // t (Ljavax/microedition/lcdui/List;)
    int             g;  // g (I)
    int             e;  // e (I)
    int             ab;  // ab (I)
    int             Z;  // Z (I)
    int             ax;  // ax (I)
    int             l;  // l (I)
    int             j;  // j (I)
    int             J;  // J (I)
    int             H;  // H (I)
    int64_t         c;  // c (J)
    int64_t         void;  // void (J)
    int64_t         a;  // a (J)
    int64_t         bh;  // bh (J)
    int64_t         else;  // else (J)
    int64_t         a8;  // a8 (J)
    int             case;  // case (I)
    int             ai;  // ai (Z)
    int             X;  // X (Z)
    int             aR;  // aR (Z)
    int             K;  // K (Z)
    int             al;  // al (Z)
    int             bg;  // bg (Z)
    int             do;  // do (Z)
    int             a7;  // a7 (I)
    int             a6;  // a6 (I)
    signed char*    aS;  // aS ([B)
    signed char     w;  // w (B)
    signed char     bb;  // bb (B)
    signed char     m;  // m (B)
    signed char*    R;  // R ([B)
    short           a4;  // a4 (S)
    short           aH;  // aH (S)
    short           ac;  // ac (S)
    int             aa;  // aa (I)
    int             Y;  // Y (I)
    int             be;  // be (I)
    int             bc;  // bc (I)
    int             V;  // V (I)
    int             new;  // new (I)
    int             aK;  // aK (I)
    int             ar;  // ar (I)
    int             aM;  // aM (I)
    int             aL;  // aL (I)
    int             null;  // null (I)
    int             D;  // D (I)
    int             goto;  // goto (I)
    int             aN;  // aN (I)
    int             af;  // af (I)
    int             aZ;  // aZ (I)
    int             aY;  // aY (I)
    int             aX;  // aX (I)
    int             aI;  // aI (I)
    signed char     ba;  // ba (B)
    signed char     G;  // G (B)
    signed char     i;  // i (B)
    signed char     aP;  // aP (B)
    signed char     aW;  // aW (B)
    signed char     B;  // B (B)
    signed char     char;  // char (B)
    signed char     ae;  // ae (B)
    signed char     C;  // C (B)
    signed char     P;  // P (B)
    int             if;  // if (Z)
    int             k;  // k (Z)
    int             h;  // h (Z)
    int             a9;  // a9 (Z)
    short*          ay;  // ay ([S)
    short*          aw;  // aw ([S)
    short*          au;  // au ([S)
    short*          at;  // at ([S)
    short*          as;  // as ([S)
    short*          aq;  // aq ([S)
    short*          ao;  // ao ([S)
    short*          an;  // an ([S)
    short*          ak;  // ak ([S)
    short*          r;  // r ([S)
    short*          p;  // p ([S)
    short*          a3;  // a3 ([S)
    short*          aF;  // aF ([S)
    short*          q;  // q ([S)
    short*          bf;  // bf ([S)
    short*          N;  // N ([S)
    short*          M;  // M ([S)
    short**         bd;  // bd ([[S)
    short*          aE;  // aE ([S)
    short*          ah;  // ah ([S)
    short**         a2;  // a2 ([[S)
    short*          aG;  // aG ([S)
    int**           a0;  // a0 ([[I)
    short*          I;  // I ([S)
    short*          int;  // int ([S)
    int             aj;  // aj (Z)
    int             ad;  // ad (Z)
    int             T;  // T (Z)
    int             u;  // u (Z)
    int             L;  // L (Z)
    int             O;  // O (Z)
    int             E;  // E (Z)
    int             A;  // A (Z)
    int             z;  // z (Z)
    int             y;  // y (Z)
    int             a5;  // a5 (Z)
    int             long;  // long (Z)
    int             aJ;  // aJ (Z)
    int             S;  // S (Z)
    int             v;  // v (Z)
    int             aA;  // aA (I)
    int             am;  // am (I)
    int*            x;  // x ([I)
    int*            aQ;  // aQ ([I)
    int**           aB;  // aB ([[I)
    int**           az;  // az ([[I)
    short*          av;  // av ([S)
    short*          ag;  // ag ([S)
    signed char**   aC;  // aC ([[B)
    int64_t**       ap;  // ap ([[J)
    signed char**   W;  // W ([[B)
};

// ============================================
// METODOS (traduzidos do bytecode)
// ============================================

// === MIDlet1.MIDlet1_constructor (()V) ===
// Instrucoes: 10
// APIs usadas:
//   1x javax/microedition/midlet/MIDlet.<init> -> ??? javax/microedition/midlet/MIDlet.<init>
void MIDlet1_constructor() {
    // TODO: traduzir logica do bytecode
}

// === MIDlet1.MIDlet1_startApp (()V) ===
// Instrucoes: 8
// APIs usadas:
//   1x javax/microedition/lcdui/Display.getDisplay -> j2me_display_get
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void MIDlet1_startApp() {
    // TODO: traduzir logica do bytecode
}

// === MIDlet1.MIDlet1_pauseApp (()V) ===
// Instrucoes: 1
void MIDlet1_pauseApp() {
    // TODO: traduzir logica do bytecode
}

// === MIDlet1.MIDlet1_destroyApp ((Z)V) ===
// Instrucoes: 1
void MIDlet1_destroyApp() {
    // TODO: traduzir logica do bytecode
}

// === MIDlet1.MIDlet1_a (()V) ===
// Instrucoes: 8
// APIs usadas:
//   1x javax/microedition/midlet/MIDlet.notifyDestroyed -> ??? javax/microedition/midlet/MIDlet.notifyDestroyed
void MIDlet1_a() {
    // TODO: traduzir logica do bytecode
}

// === a.a_constructor (()V) ===
// Instrucoes: 1957
// APIs usadas:
//   3x com/nokia/mid/sound/Sound.<init> -> ??? com/nokia/mid/sound/Sound.<init>
//   2x javax/microedition/lcdui/StringItem.<init> -> ??? javax/microedition/lcdui/StringItem.<init>
//   2x javax/microedition/lcdui/Form.<init> -> ??? javax/microedition/lcdui/Form.<init>
//   1x com/nokia/mid/ui/FullCanvas.<init> -> ??? com/nokia/mid/ui/FullCanvas.<init>
//   1x javax/microedition/lcdui/List.<init> -> ??? javax/microedition/lcdui/List.<init>
//   1x java/lang/Throwable.printStackTrace -> ??? java/lang/Throwable.printStackTrace
void a_constructor() {
    // TODO: traduzir logica do bytecode
}

// === a.a_if (()V) ===
// Instrucoes: 136
// APIs usadas:
//   5x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   5x javax/microedition/lcdui/List.append -> ??? javax/microedition/lcdui/List.append
//   3x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
//   2x javax/microedition/lcdui/Form.append -> ??? javax/microedition/lcdui/Form.append
//   2x javax/microedition/lcdui/Command.<init> -> ??? javax/microedition/lcdui/Command.<init>
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
void a_if() {
    // TODO: traduzir logica do bytecode
}

// === a.a_try (()V) ===
// Instrucoes: 11
// APIs usadas:
//   2x java/lang/Thread.currentThread -> ??? java/lang/Thread.currentThread
//   2x java/lang/Thread.start -> j2me_thread_start
//   1x java/lang/Thread.<init> -> ??? java/lang/Thread.<init>
void a_try() {
    // TODO: traduzir logica do bytecode
}

// === a.a_keyPressed ((I)V) ===
// Instrucoes: 185
// APIs usadas:
//   2x javax/microedition/lcdui/List.size -> ??? javax/microedition/lcdui/List.size
//   2x com/nokia/mid/sound/Sound.play -> ??? com/nokia/mid/sound/Sound.play
//   1x javax/microedition/lcdui/List.append -> ??? javax/microedition/lcdui/List.append
//   1x javax/microedition/lcdui/List.delete -> ??? javax/microedition/lcdui/List.delete
//   1x javax/microedition/lcdui/List.setSelectedIndex -> ??? javax/microedition/lcdui/List.setSelectedIndex
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void a_keyPressed() {
    // TODO: traduzir logica do bytecode
}

// === a.a_keyReleased ((I)V) ===
// Instrucoes: 26
void a_keyReleased() {
    // TODO: traduzir logica do bytecode
}

// === a.a_run (()V) ===
// Instrucoes: 1769
// APIs usadas:
//   4x com/nokia/mid/sound/Sound.play -> ??? com/nokia/mid/sound/Sound.play
//   3x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   2x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
//   1x java/lang/Thread.yield -> ??? java/lang/Thread.yield
//   1x java/lang/Thread.sleep -> j2me_sleep
void a_run() {
    // TODO: traduzir logica do bytecode
}

// === a.a_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 641
// APIs usadas:
//   16x com/nokia/mid/ui/DirectGraphics.drawPixels -> ??? com/nokia/mid/ui/DirectGraphics.drawPixels
//   8x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   5x javax/microedition/lcdui/Graphics.drawString -> j2me_font_draw
//   3x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   3x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   2x javax/microedition/lcdui/Graphics.drawLine -> ??? javax/microedition/lcdui/Graphics.drawLine
//   2x java/lang/String.valueOf -> ??? java/lang/String.valueOf
//   1x com/nokia/mid/ui/DirectUtils.getDirectGraphics -> ??? com/nokia/mid/ui/DirectUtils.getDirectGraphics
void a_paint() {
    // TODO: traduzir logica do bytecode
}

// === a.a_a ((JJ)V) ===
// Instrucoes: 63
void a_a() {
    // TODO: traduzir logica do bytecode
}

// === a.a_new (()V) ===
// Instrucoes: 1308
void a_new() {
    // TODO: traduzir logica do bytecode
}

// === a.a_if_2 ((BBB)V) ===
// Instrucoes: 326
void a_if_2() {
    // TODO: traduzir logica do bytecode
}

// === a.a_a_2 ((BBB)V) ===
// Instrucoes: 326
void a_a_2() {
    // TODO: traduzir logica do bytecode
}

// === a.a_byte (()V) ===
// Instrucoes: 143
void a_byte() {
    // TODO: traduzir logica do bytecode
}

// === a.a_for (()Z) ===
// Instrucoes: 233
int a_for() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === a.a_int (()B) ===
// Instrucoes: 20
signed char a_int() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === a.a_if_3 ((I)V) ===
// Instrucoes: 13862
void a_if_3() {
    // TODO: traduzir logica do bytecode
}

// === a.a_do (()V) ===
// Instrucoes: 442
// APIs usadas:
//   28x com/nokia/mid/ui/DirectGraphics.getPixels -> ??? com/nokia/mid/ui/DirectGraphics.getPixels
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   1x com/nokia/mid/ui/DirectUtils.getDirectGraphics -> ??? com/nokia/mid/ui/DirectUtils.getDirectGraphics
void a_do() {
    // TODO: traduzir logica do bytecode
}

// === a.a_commandAction ((Ljavax/microedition/lcdui/Command;Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 107
// APIs usadas:
//   3x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
//   3x javax/microedition/lcdui/List.set -> ??? javax/microedition/lcdui/List.set
//   2x java/lang/String.valueOf -> ??? java/lang/String.valueOf
//   1x javax/microedition/lcdui/List.getSelectedIndex -> ??? javax/microedition/lcdui/List.getSelectedIndex
//   1x javax/microedition/lcdui/Command.getLabel -> ??? javax/microedition/lcdui/Command.getLabel
//   1x java/lang/String.equals -> ??? java/lang/String.equals
//   1x java/lang/String.concat -> ??? java/lang/String.concat
void a_commandAction() {
    // TODO: traduzir logica do bytecode
}

// === a.a_a_3 ((I)V) ===
// Instrucoes: 39
// APIs usadas:
//   3x javax/microedition/rms/RecordStore.closeRecordStore -> ??? javax/microedition/rms/RecordStore.closeRecordStore
//   1x javax/microedition/rms/RecordStore.openRecordStore -> ??? javax/microedition/rms/RecordStore.openRecordStore
//   1x javax/microedition/rms/RecordStore.addRecord -> ??? javax/microedition/rms/RecordStore.addRecord
void a_a_3() {
    // TODO: traduzir logica do bytecode
}

// === a.a_a_4 (()B) ===
// Instrucoes: 40
// APIs usadas:
//   3x javax/microedition/rms/RecordStore.closeRecordStore -> ??? javax/microedition/rms/RecordStore.closeRecordStore
//   1x javax/microedition/rms/RecordStore.openRecordStore -> ??? javax/microedition/rms/RecordStore.openRecordStore
//   1x javax/microedition/rms/RecordStore.getNumRecords -> ??? javax/microedition/rms/RecordStore.getNumRecords
//   1x javax/microedition/rms/RecordStore.getRecord -> ??? javax/microedition/rms/RecordStore.getRecord
signed char a_a_4() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// ============================================
// GAME LOOP PRINCIPAL
// ============================================

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;

        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);

        // TODO: chamar metodos do jogo aqui
        // MIDlet1_startApp();
        // a_paint();

        j2me_gfx_flip();
    }

    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}
