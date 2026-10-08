// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 80 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772530.

// Ghidra body range 0x58772530..0x58772580; 80 mapped bytes.
extern "C" __declspec(naked) void FUN_58772530_segment_00() {
    __asm {
        // 0x58772530: push ebx
        __asm _emit 0x53
        // 0x58772531: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58772535: push ebp
        __asm _emit 0x55
        // 0x58772536: push esi
        __asm _emit 0x56
        // 0x58772537: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877253B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5877253D: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772541: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58772543: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x58772548: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5877254A: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5877254D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5877254F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58772552: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58772554: imul eax, eax, 0x108
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877255A: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5877255C: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5877255E: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58772560: je 0x5877257c
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58772562: sub ebp, esi
        __asm _emit 0x2B
        __asm _emit 0xEE
        // 0x58772564: push edi
        __asm _emit 0x57
        // 0x58772565: lea edi, [edx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x2A
        // 0x58772568: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5877256A: add edx, 0x108
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772570: mov ecx, 0x42
        __asm _emit 0xB9
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772575: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58772577: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x58772579: jne 0x58772565
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5877257B: pop edi
        __asm _emit 0x5F
        // 0x5877257C: pop esi
        __asm _emit 0x5E
        // 0x5877257D: pop ebp
        __asm _emit 0x5D
        // 0x5877257E: pop ebx
        __asm _emit 0x5B
        // 0x5877257F: ret
        __asm _emit 0xC3
    }
}
