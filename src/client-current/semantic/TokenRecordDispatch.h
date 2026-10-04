#pragma once

#include "LinkedNameLookup.h"

#include <cstdint>

using MissionFleetApplyTokenRecord =
    void (*)(MissionFleetNameNode*, const unsigned char*, void*) noexcept;

// Portable normal-path model of Main.dll FUN_58843000. The gate is only
// checked for null in the original body; its actual type remains unknown.
void MissionFleet_ApplyTokenRecords(const MissionFleetTokenNameLists* receiver,
                                    const void* gate,
                                    const unsigned char* records,
                                    std::uint32_t count,
                                    MissionFleetNameCompare compare,
                                    MissionFleetApplyTokenRecord apply,
                                    void* context) noexcept;

// Normal-path sibling FUN_58848a00: tag zero searches +0x6C and tag one
// searches +0x64 on a different receiver family.
void MissionFleet_ApplyDualTokenRecords(const MissionFleetDualNameLists* receiver,
                                        const void* gate,
                                        const unsigned char* records,
                                        std::uint32_t count,
                                        MissionFleetNameCompare compare,
                                        MissionFleetApplyTokenRecord apply,
                                        void* context) noexcept;
