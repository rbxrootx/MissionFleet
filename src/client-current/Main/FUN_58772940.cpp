// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 53 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772940.

// Ghidra body range 0x58772940..0x58772975; 53 mapped bytes.
extern "C" __declspec(naked) void FUN_58772940_segment_00() {
    __asm {
        // 0x58772940: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58772944: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58772948: push ebx
        __asm _emit 0x53
        // 0x58772949: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877294D: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5877294F: je 0x58772973
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58772951: push esi
        __asm _emit 0x56
        // 0x58772952: push edi
        __asm _emit 0x57
        // 0x58772953: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58772955: je 0x58772962
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58772957: mov ecx, 0x46
        __asm _emit 0xB9
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877295C: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5877295E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58772960: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58772962: add edx, 0x118
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772968: add eax, 0x118
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877296D: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5877296F: jne 0x58772953
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x58772971: pop edi
        __asm _emit 0x5F
        // 0x58772972: pop esi
        __asm _emit 0x5E
        // 0x58772973: pop ebx
        __asm _emit 0x5B
        // 0x58772974: ret
        __asm _emit 0xC3
    }
}
