#include "../../src/client-current/semantic/SixFieldRecordIngestion.h"
#include "../../src/client-current/semantic/TwoKeyRecordUpdate.h"

#include <array>
#include <cassert>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

namespace {

struct Context {
    std::vector<std::string> copyOrder;
};

void copyField(unsigned char* destination, const unsigned char* source,
               void* context) noexcept {
    auto& state = *static_cast<Context*>(context);
    const char* text = reinterpret_cast<const char*>(source);
    state.copyOrder.emplace_back(text);
    std::strcpy(reinterpret_cast<char*>(destination), text);
}

void update(void* receiver, std::uint32_t key1, std::uint32_t key2,
            std::uint32_t value, const unsigned char* fieldC,
            const unsigned char* field24, const unsigned char* field2D,
            void* context) noexcept {
    MissionFleet_UpdateOrInsertTwoKeyRecord(
        static_cast<MissionFleetTwoKeyRecordStore*>(receiver),
        key1, key2, value, fieldC, field24, field2D, copyField, context);
}

void write32(unsigned char* record, unsigned int offset,
             std::uint32_t value) {
    std::memcpy(record + offset, &value, sizeof(value));
}

std::uint32_t load32(const unsigned char* record, unsigned int offset) {
    std::uint32_t value;
    std::memcpy(&value, record + offset, sizeof(value));
    return value;
}

void fill(unsigned char* record, std::uint32_t key1, std::uint32_t key2,
          std::uint32_t value, const char* c, const char* p,
          const char* d) {
    write32(record, 0, key1);
    write32(record, 4, key2);
    write32(record, 8, value);
    std::strcpy(reinterpret_cast<char*>(record + 0x0C), c);
    std::strcpy(reinterpret_cast<char*>(record + 0x24), p);
    std::strcpy(reinterpret_cast<char*>(record + 0x2D), d);
}

void checkEndToEnd() {
    std::array<unsigned char, 0x54 * 2> firstBatch{};
    fill(firstBatch.data(), 10, 20, 30, "C1", "P1", "D1");
    fill(firstBatch.data() + 0x54, 10, 20, 31, "C2", "P2", "D2");
    MissionFleetTwoKeyRecordStore store;
    Context context;
    MissionFleet_IngestRecords54(&store, 2, firstBatch.data(), update, &context);

    assert(store.records.size() == 1);
    assert((context.copyOrder == std::vector<std::string>{
        "C1", "P1", "D1", "D2", "C2", "P2"}));
    const auto& hit = store.records[0];
    assert(load32(hit.data(), 0) == 10 && load32(hit.data(), 4) == 20);
    assert(load32(hit.data(), 8) == 31);
    assert(std::strcmp(reinterpret_cast<const char*>(hit.data() + 0x0C), "C2") == 0);
    assert(std::strcmp(reinterpret_cast<const char*>(hit.data() + 0x24), "P2") == 0);
    assert(std::strcmp(reinterpret_cast<const char*>(hit.data() + 0x2D), "D2") == 0);

    std::array<unsigned char, 0x84> secondBatch{};
    fill(secondBatch.data(), 10, 21, 40, "C3", "P3", "D3");
    MissionFleet_IngestRecords84(&store, 1, secondBatch.data(), update, &context);
    assert(store.records.size() == 2);  // Second key distinguishes record.
    assert(load32(store.records[1].data(), 4) == 21);
    assert(load32(store.records[1].data(), 8) == 40);
    assert((context.copyOrder == std::vector<std::string>{
        "C1", "P1", "D1", "D2", "C2", "P2", "C3", "P3", "D3"}));
}

}  // namespace

int main() {
    checkEndToEnd();
    std::cout << "two-key record update: passed\n";
}
