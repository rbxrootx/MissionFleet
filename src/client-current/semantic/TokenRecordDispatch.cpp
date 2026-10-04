#include "TokenRecordDispatch.h"

#include <cstddef>

void MissionFleet_ApplyTokenRecords(const MissionFleetTokenNameLists* receiver,
                                    const void* gate,
                                    const unsigned char* records,
                                    std::uint32_t count,
                                    MissionFleetNameCompare compare,
                                    MissionFleetApplyTokenRecord apply,
                                    void* context) noexcept {
    if (gate == nullptr || count == 0) return;
    for (std::uint32_t index = 0; index < count; ++index) {
        const auto* record = records + static_cast<std::size_t>(index) * 0x60;
        MissionFleetNameNode* node = nullptr;
        if (record[0] == 0) {
            node = MissionFleet_FindNameAt138(receiver,
                reinterpret_cast<const char*>(record + 1), compare, context);
        } else if (record[0] == 1) {
            node = MissionFleet_FindNameAt130(receiver,
                reinterpret_cast<const char*>(record + 1), compare, context);
        }
        if (node != nullptr) apply(node, record, context);
    }
}
