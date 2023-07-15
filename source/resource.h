#define PLUG_MFR "Andrew Minnich"
#define PLUG_NAME "Cocoa Delay"

#define PLUG_CLASS_NAME CocoaDelay

#define BUNDLE_MFR "Andrew Minnich"
#define BUNDLE_NAME "Cocoa Delay"

#define PLUG_ENTRY CocoaDelay_Entry
#define PLUG_FACTORY CocoaDelay_Factory
#define PLUG_VIEW_ENTRY CocoaDelay_ViewEntry

#define PLUG_ENTRY_STR "CocoaDelay_Entry"
#define PLUG_VIEW_ENTRY_STR "CocoaDelay_ViewEntry"

#define VIEW_CLASS CocoaDelay_View
#define VIEW_CLASS_STR "CocoaDelay_View"

// Format        0xMAJR.MN.BG - in HEX! so version 10.1.5 would be 0x000A0105
#define PLUG_VER 0x00010001
#define VST3_VER_STR "1.0.1"

#define PLUG_COPYRIGHT  "Copyright 2018 Andrew Minnich"

// http://service.steinberg.de/databases/plugin.nsf/plugIn?openForm
// 4 chars, single quotes. At least one capital letter
#define PLUG_UNIQUE_ID 'TesD'
// make sure this is not the same as BUNDLE_MFR
#define PLUG_MFR_ID 'Tesa'

// ProTools stuff

#if (defined(AAX_API) || defined(RTAS_API)) && !defined(_PIDS_)
  #define _PIDS_
  const int PLUG_TYPE_IDS[2] = {'EFN1', 'EFN2'};
  const int PLUG_TYPE_IDS_AS[2] = {'EFA1', 'EFA2'}; // AudioSuite
#endif

#define PLUG_MFR_PT "AndrewMinnich\nAndrewMinnich\nAcme"
#define PLUG_NAME_PT "CocoaDelay\nIPEF"
#define PLUG_TYPE_PT "Effect"
#define PLUG_DOES_AUDIOSUITE 1

/* PLUG_TYPE_PT can be "None", "EQ", "Dynamics", "PitchShift", "Reverb", "Delay", "Modulation", 
"Harmonic" "NoiseReduction" "Dither" "SoundField" "Effect" 
instrument determined by PLUG _IS _INST
*/

#define PLUG_CHANNEL_IO "2-2"

#define PLUG_LATENCY 0
#define PLUG_IS_INST 0

// if this is 0 RTAS can't get tempo info
#define PLUG_DOES_MIDI 0

#define PLUG_DOES_STATE_CHUNKS 0

// Unique IDs for each image resource.
#define BG_ID 101
#define KNOBLEFT_ID 102
#define KNOBMIDDLE_ID 103
#define KNOBRIGHT_ID 104
#define TEMPOSYNCTIMESMENU_ID 105
#define PANMODESMENU_ID 106
#define FILTERMODESMENU_ID 107

// Image resource locations for this plug.
#define BG_FN "resources/img/bg.png"
#define KNOBLEFT_FN "resources/img/knob left.png"
#define KNOBMIDDLE_FN "resources/img/knob middle.png"
#define KNOBRIGHT_FN "resources/img/knob right.png"
#define TEMPOSYNCTIMESMENU_FN "resources/img/tempo sync times.png"
#define PANMODESMENU_FN "resources/img/pan modes.png"
#define FILTERMODESMENU_FN "resources/img/filter modes.png"

// GUI default dimensions
#define GUI_WIDTH 184*4
#define GUI_HEIGHT 128*4

// on MSVC, you must define SA_API in the resource editor preprocessor macros as well as the c++ ones
#if defined(SA_API)
#include "app_wrapper/app_resource.h"
#endif

// vst3 stuff
#define MFR_URL "tesselode.github.io"
#define MFR_EMAIL "aminnich3@gmail.com"
#define EFFECT_TYPE_VST3 "Fx|Delay"

/* "Fx|Analyzer"", "Fx|Delay", "Fx|Distortion", "Fx|Dynamics", "Fx|EQ", "Fx|Filter",
"Fx", "Fx|Instrument", "Fx|InstrumentExternal", "Fx|Spatial", "Fx|Generator",
"Fx|Mastering", "Fx|Modulation", "Fx|PitchShift", "Fx|Restoration", "Fx|Reverb",
"Fx|Surround", "Fx|Tools", "Instrument", "Instrument|Drum", "Instrument|Sampler",
"Instrument|Synth", "Instrument|Synth|Sampler", "Instrument|External", "Spatial",
"Spatial|Fx", "OnlyRT", "OnlyOfflineProcess", "Mono", "Stereo",
"Surround"
*/
