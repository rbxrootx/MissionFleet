#include "../../src/client-current/semantic/SixFieldRecordIngestion.h"

#include <array>
#include <cassert>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <vector>

namespace {

struct Seen {
    std::uint32_t key1, key2, value;
    const unsigned char* fieldC;
    const unsigned char* field24;
    const unsigned char* field2D;
};

struct Recorder {
    void* expectedReceiver;
    std::vector<Seen> seen;
};

void update(void* receiver, std::uint32_t key1, std::uint32_t key2,
            std::uint32_t value, const unsigned char* fieldC,
            const unsigned char* field24, const unsigned char* field2D,
            void* context) noexcept {
    auto& recorder = *static_cast<Recorder*>(context);
    assert(receiver == recorder.expectedReceiver);
    recorder.seen.push_back({key1, key2, value, fieldC, field24, field2D});
}

void write32(unsigned char* record, unsigned int offset,
             std::uint32_t value) {
    std::memcpy(record + offset, &value, sizeof(value));
}

template<std::size_t Stride>
void runCase(void (*ingest)(void*, std::uint32_t, const unsigned char*,
                           MissionFleetRecordUpdate, void*) noexcept) {
    std::array<unsigned char, Stride * 2> records{};
    for (int index = 0; index != 2; ++index) {
        unsigned char* record = records.data() + index * Stride;
        write32(record, 0, 100 + index);
        write32(record, 4, 200 + index);
        write32(record, 8, 300 + index);
        std::memcpy(record + 0x0C, "first", 6);
        std::memcpy(record + 0x24, "two", 4);
        std::memcpy(record + 0x2D, "last", 5);
    }
    int receiver = 0;
    Recorder recorder{&receiver, {}};
    ingest(&receiver, 0, nullptr, update, &recorder);
    assert(recorder.seen.empty());
    ingest(&receiver, 2, records.data(), update, &recorder);
    assert(recorder.seen.size() == 2);
    for (int index = 0; index != 2; ++index) {
        const Seen& seen = recorder.seen[index];
        const unsigned char* record = records.data() + index * Stride;
        assert(seen.key1 == static_cast<std::uint32_t>(100 + index));
        assert(seen.key2 == static_cast<std::uint32_t>(200 + index));
        assert(seen.value == static_cast<std::uint32_t>(300 + index));
        assert(seen.fieldC == record + 0x0C);
        assert(seen.field24 == record + 0x24);
        assert(seen.field2D == record + 0x2D);
        assert(std::strcmp(reinterpret_cast<const char*>(seen.field24), "two") == 0);
    }
}

}  // namespace

int main() {
    runCase<0x54>(MissionFleet_IngestRecords54);
    runCase<0x84>(MissionFleet_IngestRecords84);
    std::cout << "six-field record ingestion: passed\n";
}
