/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* colors */
static const char col_fg[]      = "#00ad9c";
static const char col_bg[]      = "#fdf6e3";
static const char col_black[]   = "#222222";

static const char *colors[SchemeLast][2] = {
/*                      fg         bg       */
	[SchemeNorm] = {    col_fg,    col_bg },
	[SchemeSel]  = {    col_bg,    col_fg },
	[SchemeOut]  = {    col_black, col_fg },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/* history */
static unsigned int maxhist    = 15;
static int histnodup           = 1;	/* if 0, record repeated histories */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
