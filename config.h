/****************************************************************************************************************************
* See LICENSE file for copyright and license details.
* Default settings; can be overriden by command line.
******************************************************************************************************************************/


static int topbar         = 1;                        // -b option; if 0, dmenu appears at bottom
static unsigned int lines = 14;                       // -l option; if nonzero, dmenu uses vertical list with given number of lines 
static const unsigned int border_width = 3;           // Size of the window border
static const unsigned int max_width = 1100;           // Max width of window
static const unsigned int min_width_multiplier = 6;   // This will multiply to fit a good size with prompt


/**************************************************************************************************************************
* Fonts
******************************************************************************************************************************/


// -fn option overrides fonts[0]; default X11 font or font set
static const char *fonts[] = {

  "Fira Code:style=Regular:size=9.5:antialias=true",
  "JoyPixels:size=10",

};


/************************************************************************************************************************
* Fonts
************************************************************************************************************************/

static const char *prompt         = NULL;    // -p  option; prompt to the left of input field


/**********************************************************************************************************************
* Colours
******************************************************************************************************************************/


#include "colours.h"


/**********************************************************************************************************************
* Delimiters
*   Characters not considered part of a word while deleting words
*  for example: " /?\"&[]"
******************************************************************************************************************************/

static const char worddelimiters[] = " ";
