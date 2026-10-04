#pragma once

// Portable behavior model for Main.dll FUN_5873A300. The exact x86 match is
// kept separately in src/client-current/Main/FUN_5873a300.cpp.
extern "C" void MissionFleet_AdjustBoundedScalar(void* receiver) noexcept;
