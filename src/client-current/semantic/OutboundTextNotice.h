#pragma once

#include <cstdint>

using MissionFleetTextLength = std::uint32_t (*)(const char*, void*) noexcept;
using MissionFleetSendNotice = int (*)(void* receiver, std::uint32_t message,
                                      std::uint32_t first, std::uint32_t second,
                                      const char* payload, std::uint32_t length,
                                      std::uint32_t flags, void* context) noexcept;

// Portable normal-path model of Main.dll FUN_587b9440. The callback and sender
// are injected so tests can observe the exact forwarded values.
int missionFleetSendTextNotice(void* receiver, const char* text,
                               std::uint32_t first, std::uint32_t second,
                               const char* fallback, MissionFleetTextLength length,
                               MissionFleetSendNotice send, void* context) noexcept;
