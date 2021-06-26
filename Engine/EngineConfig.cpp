#include "Engine/EngineConfig.h"

using Engine_::EngineConfig;


void Engine_::EngineConfig::MuteSound()
{
    sound_level = 0;
    voice_level = 0;
    music_level = 0;
}

void EngineConfig::SetSaturateFaces(bool saturate) {
    if (saturate)
        flags2 |= GAME_FLAGS_2_SATURATE_LIGHTMAPS;
    else
        flags2 &= ~GAME_FLAGS_2_SATURATE_LIGHTMAPS;
}

void EngineConfig::SetForceRedraw(bool redraw) {
    if (redraw)
        flags2 |= GAME_FLAGS_2_FORCE_REDRAW;
    else
        flags2 &= ~GAME_FLAGS_2_FORCE_REDRAW;
}
