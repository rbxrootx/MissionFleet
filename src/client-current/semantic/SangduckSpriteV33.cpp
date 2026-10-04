#include "SangduckSpriteV33.h"

#include <cstring>
#include <utility>

namespace {
std::uint32_t dword(const std::uint8_t* data) {
    return static_cast<std::uint32_t>(data[0]) |
           (static_cast<std::uint32_t>(data[1]) << 8) |
           (static_cast<std::uint32_t>(data[2]) << 16) |
           (static_cast<std::uint32_t>(data[3]) << 24);
}

std::uint32_t signedByteSum(const std::uint8_t* data, std::size_t size) {
    std::uint32_t sum = 0;
    for (std::size_t index = 0; index < size; ++index) {
        const int signedByte = data[index] < 128
            ? static_cast<int>(data[index]) : static_cast<int>(data[index]) - 256;
        sum += static_cast<std::uint32_t>(signedByte);
    }
    return sum;
}

bool fail(std::string& error, const char* message) {
    error = message;
    return false;
}
}

bool missionFleetIndexSangduckV33(const std::uint8_t* data, std::size_t size,
                                  MissionFleetSangduckIndexV33& output,
                                  std::string& error) {
    output = {};
    error.clear();
    if (data == nullptr || size < 136) return fail(error, "truncated sprite header");
    constexpr char signature[] = "Sangduck Sprite File";
    if (std::memcmp(data, signature, sizeof(signature) - 1) != 0)
        return fail(error, "unrecognized sprite signature");
    for (std::size_t index = sizeof(signature) - 1; index < 40; ++index) {
        if (data[index] != ' ') return fail(error, "unrecognized sprite signature padding");
    }
    if (data[84] != 3 || data[85] != 3)
        return fail(error, "unsupported sprite version");
    if (dword(data + 132) != signedByteSum(data, 132))
        return fail(error, "sprite header checksum mismatch");
    const auto imageCount = dword(data + 92);
    if (dword(data + 104) != 0) return fail(error, "embedded sound records unsupported");
    if (imageCount > 100000 || imageCount > (size - 136) / 116)
        return fail(error, "image count exceeds file size");

    MissionFleetSangduckIndexV33 parsed;
    parsed.images.reserve(imageCount);
    std::size_t position = 136;
    for (std::uint32_t ordinal = 0; ordinal < imageCount; ++ordinal) {
        if (size - position < 116) return fail(error, "truncated image record");
        const auto* record = data + position;
        const auto checksum = dword(record + 112);
        if (checksum != signedByteSum(record, 112))
            return fail(error, "image record checksum mismatch");
        MissionFleetSangduckImageV33 image;
        image.ordinal = ordinal;
        image.recordOffset = position;
        image.payloadOffset = position + 116;
        image.payloadSize = dword(record + 48);
        image.width = dword(record + 52);
        image.height = dword(record + 56);
        for (int index = 0; index < 4; ++index) image.format[index] = record[44 + index];
        image.checksum = checksum;
        std::size_t nameLength = 0;
        while (nameLength < 40 && record[4 + nameLength] != 0) ++nameLength;
        image.sourceNameBytes.assign(reinterpret_cast<const char*>(record + 4), nameLength);
        if (image.width > 32768 || image.height > 32768)
            return fail(error, "image dimensions exceed supported range");
        if (image.payloadSize > size - image.payloadOffset)
            return fail(error, "image payload exceeds file size");
        parsed.images.push_back(std::move(image));
        position = parsed.images.back().payloadOffset + parsed.images.back().payloadSize;
    }
    parsed.tailOffset = position;
    parsed.tailBytes = size - position;
    output = std::move(parsed);
    return true;
}
