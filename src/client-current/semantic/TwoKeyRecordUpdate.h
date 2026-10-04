#pragma once

#include <array>
#include <cstdint>
#include <vector>

// Portable normal-path model for FUN_58754C00. Record payload bytes outside
// observed fields are model-defined; the x86 source remains authoritative.
struct MissionFleetTwoKeyRecordStore {
    std::vector<std::array<unsigned char, 0x48>> records;
};

using MissionFleetCopyRecordField = void (*)(
    unsigned char* destination, const unsigned char* source,
    void* context) noexcept;

extern "C" void MissionFleet_UpdateOrInsertTwoKeyRecord(
    MissionFleetTwoKeyRecordStore* store,
    std::uint32_t key1, std::uint32_t key2, std::uint32_t value,
    const unsigned char* fieldC, const unsigned char* field24,
    const unsigned char* field2D, MissionFleetCopyRecordField copyField,
    void* context) noexcept;
