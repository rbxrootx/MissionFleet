#pragma once

#include <cstdint>

// Portable callback adapter for FUN_58754CD0 and FUN_58754D10. The exact
// x86 sources remain in src/client-current/Main/.
using MissionFleetRecordUpdate = void (*)(
    void* receiver, std::uint32_t key1, std::uint32_t key2,
    std::uint32_t value, const unsigned char* fieldC,
    const unsigned char* field24, const unsigned char* field2D,
    void* context) noexcept;

extern "C" void MissionFleet_IngestRecords54(
    void* receiver, std::uint32_t count, const unsigned char* records,
    MissionFleetRecordUpdate update, void* context) noexcept;
extern "C" void MissionFleet_IngestRecords84(
    void* receiver, std::uint32_t count, const unsigned char* records,
    MissionFleetRecordUpdate update, void* context) noexcept;
