#include "SixFieldRecordIngestion.h"

#include <cstddef>
#include <cstring>

namespace {

std::uint32_t load32(const unsigned char* record, unsigned int offset) noexcept {
    std::uint32_t result;
    std::memcpy(&result, record + offset, sizeof(result));
    return result;
}

void ingest(void* receiver, std::uint32_t count,
            const unsigned char* records, unsigned int stride,
            MissionFleetRecordUpdate update, void* context) noexcept {
    for (std::uint32_t index = 0; index != count; ++index) {
        const unsigned char* record = records + static_cast<std::size_t>(index) * stride;
        update(receiver, load32(record, 0), load32(record, 4),
               load32(record, 8), record + 0x0C, record + 0x24,
               record + 0x2D, context);
    }
}

}  // namespace

extern "C" void MissionFleet_IngestRecords54(
    void* receiver, std::uint32_t count, const unsigned char* records,
    MissionFleetRecordUpdate update, void* context) noexcept {
    ingest(receiver, count, records, 0x54, update, context);
}

extern "C" void MissionFleet_IngestRecords84(
    void* receiver, std::uint32_t count, const unsigned char* records,
    MissionFleetRecordUpdate update, void* context) noexcept {
    ingest(receiver, count, records, 0x84, update, context);
}
