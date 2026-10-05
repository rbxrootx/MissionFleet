// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B0630 .. +0x46 bytes.
// Source symbol alias: FUN_587b0630.
extern "C" __declspec(naked) void FUN_587b0630() {
    __asm {
        // 0x587B0630: push esi
        __asm _emit 0x56
        // 0x587B0631: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B0635: add esi, 0x32
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x32
        // 0x587B0638: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x587B063D: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587B063F: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x587B0641: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587B0644: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B0646: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B0649: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B064B: imul eax, eax, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0651: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x587B0653: jns 0x587b065b
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x587B0655: add esi, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B065B: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587B0660: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x587B0662: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587B0665: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B0667: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B066A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B066C: mov dword ptr [ecx + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0672: pop esi
        __asm _emit 0x5E
        // 0x587B0673: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
