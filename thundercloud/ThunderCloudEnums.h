// Mode enumeration - if you want to add additional party or colour modes, add them here; you'll need to map some IR codes to them later; and add the modes into the main switch loop
enum Mode {OFF,ON,THUNDER,ACID,FADE,TEMPEST,WHITE,RED,GREEN,BLUE,RED1,GREEN1,BLUE1,RED2,GREEN2,BLUE2,RED3,GREEN3,BLUE3,RED4,GREEN4,BLUE4};

enum ColorMode {HUE,SATURATION,VALUE};

enum TempestMode {STARTING,GROWING,TEMPEST_1_S1,TEMPEST_1_S2,CALM_S1,CALM_S2,TEMPEST_2_S1,TEMPEST_2_S2,REDUCING,ENDING,WAITING};

enum TempestType {INCREASING,DECREASING};

enum EasingType {LINEAR,INSINE,OUTSINE,INCUBIC,OUTCUBIC,INCIRC,INQUINT};
