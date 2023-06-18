#pragma once

// #define DEBUG
#include <memory>

#define DI_GLOBALS  namespace DI{\
    extern WinData* eg_winData;\
    extern DebugData* eg_debugData;\
    extern EventData* eg_eventData;\
}
