static const unsigned int bgalpha = 0x77;
static const unsigned int fgalpha = OPAQUE;

static const char *colors[SchemeLast][2] = {

	// Scheme                 fg          bg       
	[SchemeNorm] = { "#eeeeee", "#000000" },
	[SchemeSel] = { "#1e1e1e", "#ffffff" },
	[SchemeOut] = { "#123456", "#ffffff" },
	[SchemeSelHighlight] = { "#709af6", "#ffffff" },
	[SchemeNormHighlight] = { "#999adb", "#ffffff" },


};

static const unsigned int alphas[SchemeLast][2] = {

	// Scheme		     fgalpha	bgalphga
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel]  = { fgalpha, bgalpha },
	[SchemeOut]  = { fgalpha, bgalpha },

};
