#include "TwoKeyRecordUpdate.h"

#include <cstring>

namespace {

std::uint32_t load32(const unsigned char* bytes, unsigned int offset) noexcept {
    std::uint32_t result;
    std::memcpy(&result, bytes + offset, sizeof(result));
    return result;
}

void store32(unsigned char* bytes, unsigned int offset,
             std::uint32_t value) noexcept {
    std::memcpy(bytes + offset, &value, sizeof(value));
}

}  // namespace

extern "C" void MissionFleet_UpdateOrInsertTwoKeyRecord(
    MissionFleetTwoKeyRecordStore* store,
    std::uint32_t key1, std::uint32_t key2, std::uint32_t value,
    const unsigned char* fieldC, const unsigned char* field24,
    const unsigned char* field2D, MissionFleetCopyRecordField copyField,
    void* context) noexcept {
    for (auto& record : store->records) {
        if (load32(record.data(), 0) != key1 ||
            load32(record.data(), 4) != key2) continue;

        store32(record.data(), 8, value);
        // The hit branch updates +0x2D before +0x0C and +0x24.
        copyField(record.data() + 0x2D, field2D, context);
        copyField(record.data() + 0x0C, fieldC, context);
        copyField(record.data() + 0x24, field24, context);
        return;
    }

    // The original miss branch prepares one local 0x48-byte record before
    // passing it to the matched append helper. Unobserved bytes stay zero
    // here; their original stack contents have not been established.
    std::array<unsigned char, 0x48> record{};
    store32(record.data(), 0, key1);
    store32(record.data(), 4, key2);
    store32(record.data(), 8, value);
    copyField(record.data() + 0x0C, fieldC, context);
    copyField(record.data() + 0x24, field24, context);
    copyField(record.data() + 0x2D, field2D, context);
    store->records.push_back(record);
}
