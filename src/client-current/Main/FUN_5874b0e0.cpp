// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 62 bytes in 1 exact ranges.
// Source symbol alias: FUN_5874b0e0.

// Ghidra body range 0x5874B0E0..0x5874B11E; 62 mapped bytes.
extern "C" __declspec(naked) void FUN_5874b0e0_segment_00() {
    __asm {
        // 0x5874B0E0: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5874B0E5: push esi
        __asm _emit 0x56
        // 0x5874B0E6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874B0E8: je 0x5874b0f4
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5874B0EA: mov dword ptr [esi + 0x94], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5874B0F4: call 0x5874ae20
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874B0F9: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5874B0FB: jne 0x5874b11a
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5874B0FD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5874B0FF: mov edx, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x28
        // 0x5874B102: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874B104: mov dword ptr [esi + 0x98], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B10E: mov dword ptr [esi + 0x94], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874B118: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5874B11A: pop esi
        __asm _emit 0x5E
        // 0x5874B11B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
