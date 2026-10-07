// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 59 bytes in 1 exact ranges.
// Source symbol alias: FUN_5878d0a0.

// Ghidra body range 0x5878D0A0..0x5878D0DB; 59 mapped bytes.
extern "C" __declspec(naked) void FUN_5878d0a0_segment_00() {
    __asm {
        // 0x5878D0A0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878D0A2: mov dword ptr [ecx + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D0A8: mov dword ptr [ecx + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D0AE: mov eax, dword ptr [ecx + 0x121a8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878D0B4: mov dword ptr [ecx + 0xa0], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5878D0BE: mov dword ptr [ecx + 0x6c], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D0C5: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D0CA: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5878D0CE: mov ecx, dword ptr [ecx + 0x121ac]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878D0D4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5878D0D6: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5878D0DA: ret
        __asm _emit 0xC3
    }
}
