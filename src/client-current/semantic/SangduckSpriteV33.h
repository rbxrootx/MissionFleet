#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

struct MissionFleetSangduckImageV33 {
    std::size_t ordinal = 0;
    std::size_t recordOffset = 0;
    std::size_t payloadOffset = 0;
    std::uint32_t payloadSize = 0;
    std::uint32_t width = 0;
    std::uint32_t height = 0;
    std::uint8_t format[4]{};
    std::uint32_t checksum = 0;
    std::string sourceNameBytes;
};

struct MissionFleetSangduckIndexV33 {
    std::vector<MissionFleetSangduckImageV33> images;
    std::size_t tailOffset = 0;
    std::size_t tailBytes = 0;
};

// File-layout subset of the installed sprite loader. `data` remains owned by
// the caller; image payloads are represented by checked offsets and sizes.
bool missionFleetIndexSangduckV33(const std::uint8_t* data, std::size_t size,
                                  MissionFleetSangduckIndexV33& output,
                                  std::string& error);
