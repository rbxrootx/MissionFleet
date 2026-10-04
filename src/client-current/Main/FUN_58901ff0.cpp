// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901FF0 .. +0x3E bytes.
// Source symbol alias: FUN_58901ff0.
extern "C" __declspec(naked) void FUN_58901ff0() {
    __asm {
        // 0x58901FF0: push esi
        __asm _emit 0x56
        // 0x58901FF1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58901FF3: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58901FF6: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58901FF9: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x58901FFE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58902000: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58902002: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58902005: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58902007: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5890200A: push edi
        __asm _emit 0x57
        // 0x5890200B: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890200F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58902011: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58902013: jb 0x5890201a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58902015: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xAC
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890201A: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5890201D: lea ecx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58902024: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58902026: pop edi
        __asm _emit 0x5F
        // 0x58902027: lea eax, [edx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x8A
        // 0x5890202A: pop esi
        __asm _emit 0x5E
        // 0x5890202B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
