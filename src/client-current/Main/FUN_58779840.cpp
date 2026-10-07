// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 68 bytes in 1 exact ranges.
// Source symbol alias: FUN_58779840.

// Ghidra body range 0x58779840..0x58779884; 68 mapped bytes.
extern "C" __declspec(naked) void FUN_58779840_segment_00() {
    __asm {
        // 0x58779840: mov edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779846: mov ecx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877984C: push esi
        __asm _emit 0x56
        // 0x5877984D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877984F: push edi
        __asm _emit 0x57
        // 0x58779850: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58779852: jle 0x58779870
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58779854: mov di, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58779859: lea esi, [ecx + 2]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x02
        // 0x5877985C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58779860: cmp di, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x3E
        // 0x58779863: je 0x58779877
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58779865: inc eax
        __asm _emit 0x40
        // 0x58779866: add esi, 0x574
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877986C: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5877986E: jl 0x58779860
        __asm _emit 0x7C
        __asm _emit 0xF0
        // 0x58779870: pop edi
        __asm _emit 0x5F
        // 0x58779871: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58779873: pop esi
        __asm _emit 0x5E
        // 0x58779874: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58779877: imul eax, eax, 0x574
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877987D: pop edi
        __asm _emit 0x5F
        // 0x5877987E: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58779880: pop esi
        __asm _emit 0x5E
        // 0x58779881: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
