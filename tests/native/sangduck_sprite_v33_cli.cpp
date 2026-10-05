#include "../../src/client-current/semantic/SangduckSpriteV33.h"
#include "../../src/client-current/semantic/CoreRgb16SpriteSlot1.h"

#include <cstdint>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

namespace {
std::string hex(const std::uint8_t* data, std::size_t size) {
    static constexpr char digits[] = "0123456789abcdef";
    std::string result;
    result.reserve(size * 2);
    for (std::size_t index = 0; index < size; ++index) {
        result += digits[data[index] >> 4];
        result += digits[data[index] & 15];
    }
    return result;
}
}

int main(int argc, char** argv) {
    // Input sprite; optionally an image ordinal, raw RGB16 output path, and
    // rendering mode (`opaque` or the observed `ship-effect` branch).
    if (argc != 2 && argc != 4 && argc != 5) return 2;
    std::ifstream stream(argv[1], std::ios::binary);
    if (!stream) return 2;
    std::vector<std::uint8_t> bytes(
        std::istreambuf_iterator<char>{stream}, std::istreambuf_iterator<char>{});
    MissionFleetSangduckIndexV33 index;
    std::string error;
    if (!missionFleetIndexSangduckV33(bytes.data(), bytes.size(), index, error)) {
        std::cerr << error << '\n';
        return 3;
    }
    std::cout << "H\t3\t3\t" << index.images.size() << '\t'
              << index.tailOffset << '\t' << index.tailBytes << '\n';
    for (const auto& image : index.images) {
        std::cout << "F\t" << image.ordinal << '\t'
                  << hex(reinterpret_cast<const std::uint8_t*>(image.sourceNameBytes.data()),
                         image.sourceNameBytes.size()) << '\t'
                  << hex(image.format, 4) << '\t'
                  << image.width << '\t' << image.height << '\t'
                  << image.recordOffset << '\t' << image.payloadOffset << '\t'
                  << image.payloadSize << '\t' << image.checksum << '\n';
    }
    if (argc >= 4) {
        try {
            const auto ordinal = std::stoul(argv[2]);
            if (ordinal >= index.images.size()) return 2;
            const auto& image = index.images[ordinal];
            if (image.format[0] != 2 || image.format[1] != 2 ||
                image.width == 0 || image.height == 0 ||
                static_cast<std::uint64_t>(image.width) * image.height > 16000000)
                return 2;
            const auto width = static_cast<int>(image.width);
            const auto height = static_cast<int>(image.height);
            std::uint32_t color = 0x100;
            std::uint32_t effect = 0;
            if (argc == 5) {
                if (std::string(argv[4]) == "ship-effect") {
                    color = 0x80;
                    effect = 0x101;
                } else if (std::string(argv[4]) != "opaque") {
                    return 2;
                }
            }
            std::vector<std::uint8_t> framebuffer(
                static_cast<std::size_t>(width) * height * 2);
            MissionFleetCoreRgb16SpriteView sprite{
                MissionFleetCoreRgb16MaskFamily::firstFormat2Family,
                bytes.data() + image.payloadOffset, image.payloadSize,
                width, height};
            MissionFleetCoreRgb16TargetBinding target{
                framebuffer.size(), width * 2, height,
                {MissionFleetRgb16BlitError::invalidGeometry, 0}};
            const MissionFleetCoreRenderRect clip{{
                0, 0, static_cast<std::uint32_t>(width),
                static_cast<std::uint32_t>(height),
            }};
            missionFleetCoreRgb16SpriteSlot1Dispatch(
                &sprite,
                framebuffer.data(), 0, 0, clip, color, effect, &target);
            if (target.lastResult.error != MissionFleetRgb16BlitError::none)
                return 3;
            std::ofstream output(argv[3], std::ios::binary);
            if (!output) return 2;
            output.write(reinterpret_cast<const char*>(framebuffer.data()),
                         static_cast<std::streamsize>(framebuffer.size()));
            if (!output) return 2;
            std::cout << "R\t" << ordinal << '\t'
                      << target.lastResult.copiedPixels << '\n';
        } catch (const std::exception&) {
            return 2;
        }
    }
    return 0;
}
