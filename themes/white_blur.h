static const unsigned int bgalpha = 0x77;
static const unsigned int fgalpha = OPAQUE;

static const char *colors[SchemeLast][2] = {

	// Scheme                 fg          bg       
	[SchemeNorm] = { "#000000", "#ffffff" },
	[SchemeSel] = { "#FFEFC4", "#111111" },
	[SchemeOut] = { "#BD9150", "#111111" },
	[SchemeSelHighlight] = { "#F7497E", "#ffffff" },
	[SchemeNormHighlight] = { "#BB292C", "#eeeeee" },


};

static const unsigned int alphas[SchemeLast][2] = {

	// Scheme		     fgalpha	bgalphga
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel]  = { fgalpha, bgalpha },
	[SchemeOut]  = { fgalpha, bgalpha },

};
