#include "../../src/client-current/semantic/CoreRgb16SpriteSlot1.h"

#include <algorithm>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

int main(int argc, char** argv) {
    // payload, output, sprite width/height, surface width/height, x/y,
    // clip left/top/right/bottom, initial byte value, optional color/effect.
    if (argc != 14 && argc != 16) return 2;
    try {
        const int width = std::stoi(argv[3]);
        const int height = std::stoi(argv[4]);
        const int targetWidth = std::stoi(argv[5]);
        const int targetHeight = std::stoi(argv[6]);
        const int x = std::stoi(argv[7]);
        const int y = std::stoi(argv[8]);
        const MissionFleetRgb16Clip clip{
            std::stoi(argv[9]), std::stoi(argv[10]),
            std::stoi(argv[11]), std::stoi(argv[12]),
        };
        const int seed = std::stoi(argv[13]);
        const std::uint32_t color = argc == 16
            ? static_cast<std::uint32_t>(std::stoul(argv[14], nullptr, 0))
            : 0x100;
        const std::uint32_t effect = argc == 16
            ? static_cast<std::uint32_t>(std::stoul(argv[15], nullptr, 0))
            : 0;
        if (targetWidth <= 0 || targetHeight <= 0 || targetWidth > 16384 ||
            targetHeight > 16384 || seed < 0 || seed > 255) return 2;
        std::ifstream input(argv[1], std::ios::binary);
        if (!input) return 2;
        std::vector<std::uint8_t> payload(
            std::istreambuf_iterator<char>{input}, std::istreambuf_iterator<char>{});
        std::vector<std::uint8_t> framebuffer(
            static_cast<std::size_t>(targetWidth) * targetHeight * 2,
            static_cast<std::uint8_t>(seed));
        const MissionFleetCoreRgb16SpriteView sprite{
            MissionFleetCoreRgb16MaskFamily::firstFormat2Family,
            payload.data(), payload.size(), width, height};
        const MissionFleetCoreRgb16TargetBinding target{
            framebuffer.size(), targetWidth * 2, targetHeight,
            {MissionFleetRgb16BlitError::invalidGeometry, 0}};
        const MissionFleetCoreRenderRect slotClip{{
            static_cast<std::uint32_t>(clip.left),
            static_cast<std::uint32_t>(clip.top),
            static_cast<std::uint32_t>(clip.right),
            static_cast<std::uint32_t>(clip.bottom),
        }};
        const auto result = missionFleetBlitCoreRgb16SpriteSlot1(
            &sprite, framebuffer.data(), x, y, slotClip, color, effect, target);
        if (result.error != MissionFleetRgb16BlitError::none) {
            std::cerr << "invalid RGB16 span input\n";
            return 3;
        }
        std::ofstream output(argv[2], std::ios::binary);
        if (!output) return 2;
        output.write(reinterpret_cast<const char*>(framebuffer.data()),
                     static_cast<std::streamsize>(framebuffer.size()));
        if (!output) return 2;
        std::cout << result.copiedPixels << '\n';
        return 0;
    } catch (const std::exception&) {
        return 2;
    }
}
