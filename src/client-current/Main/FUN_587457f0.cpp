// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 76 bytes in 1 exact ranges.
// Source symbol alias: FUN_587457f0.

// Ghidra body range 0x587457F0..0x5874583C; 76 mapped bytes.
extern "C" __declspec(naked) void FUN_587457f0_segment_00() {
    __asm {
        // 0x587457F0: push ebx
        __asm _emit 0x53
        // 0x587457F1: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587457F5: push ebp
        __asm _emit 0x55
        // 0x587457F6: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587457FA: push esi
        __asm _emit 0x56
        // 0x587457FB: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587457FF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58745801: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58745803: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58745808: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5874580A: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5874580D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5874580F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58745812: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58745814: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58745817: lea eax, [ebp + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0xC5
        __asm _emit 0x00
        // 0x5874581B: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5874581D: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5874581F: je 0x58745838
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58745821: sub ebp, esi
        __asm _emit 0x2B
        __asm _emit 0xEE
        // 0x58745823: push edi
        __asm _emit 0x57
        // 0x58745824: lea edi, [edx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x2A
        // 0x58745827: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58745829: add edx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x28
        // 0x5874582C: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745831: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58745833: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x58745835: jne 0x58745824
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x58745837: pop edi
        __asm _emit 0x5F
        // 0x58745838: pop esi
        __asm _emit 0x5E
        // 0x58745839: pop ebp
        __asm _emit 0x5D
        // 0x5874583A: pop ebx
        __asm _emit 0x5B
        // 0x5874583B: ret
        __asm _emit 0xC3
    }
}
