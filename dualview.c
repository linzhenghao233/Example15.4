/* dualview.c -- 位字段和按位运算符 */
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
/* 位字段符号常量 */
/* 边框线样式 */
#define SOLID		0
#define DOTTED	1
#define DASHED	2
/* 三原色 */
#define BLUE		4
#define GREEN		2
#define RED			1
/* 混合颜色 */
#define BLACK		0
#define YELLOW	(RED | GREEN)
#define MAGENTA	(RED | BLUE)
#define CYAN		(GREEN | BLUE)
#define WHITE		(RED | GREEN | BLUE)

/* 按位方法中用到的符号常量 */
#define OPAQUE				0x1
#define FILL_BLUE			0x8
#define FILL_GREEN			0x4
#define FILL_RED				0x2
#define FILL_MASK			0xE
#define BORDER				0x100
#define BORDER_BLUE		0x800
#define BORDER_GREEN	0x400
#define BORDER_RED		0x200
#define BORDER_MAKS		0xE00
#define B_SOLID				0
#define B_DOTTED			0x1000
#define B_DASHED			0x2000
#define STYLE_MASK		0x3000

const char* colors[8] = { "black", "red", "green", "yellow", "blue", "magenta", "cyan", "white" };

struct box_props {
	bool opaque : 1;
	unsigned int fill_color : 3;
	unsigned int : 4;
	bool show_border : 1;
	unsigned int border_color : 3;
	unsigned int border_style : 2;
	unsigned int : 2;
};