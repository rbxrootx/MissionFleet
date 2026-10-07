// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 84 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b0680.

// Ghidra body range 0x587B0680..0x587B06D4; 84 mapped bytes.
extern "C" __declspec(naked) void FUN_587b0680_segment_00() {
    __asm {
        // 0x587B0680: push edi
        __asm _emit 0x57
        // 0x587B0681: mov edi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B0685: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587B0687: je 0x587b06c6
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x587B0689: mov eax, dword ptr [ecx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B068F: cdq
        __asm _emit 0x99
        // 0x587B0690: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587B0693: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B0695: push esi
        __asm _emit 0x56
        // 0x587B0696: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587B0698: sar esi, 3
        __asm _emit 0xC1
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x587B069B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B069D: je 0x587b06c1
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587B069F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B06A1: cdq
        __asm _emit 0x99
        // 0x587B06A2: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B06A4: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B06A6: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587B06A8: cdq
        __asm _emit 0x99
        // 0x587B06A9: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x587B06AB: mov dword ptr [ecx + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B06B1: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587B06B4: jne 0x587b06bb
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587B06B6: mov eax, 7
        __asm _emit 0xB8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B06BB: mov dword ptr [ecx + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B06C1: pop esi
        __asm _emit 0x5E
        // 0x587B06C2: pop edi
        __asm _emit 0x5F
        // 0x587B06C3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B06C6: mov dword ptr [ecx + 0xa4], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B06D0: pop edi
        __asm _emit 0x5F
        // 0x587B06D1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
