// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 51 bytes in 2 exact ranges.
// Source symbol alias: FUN_58772120.

// Ghidra body range 0x58772120..0x58772135; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58772120_segment_00() {
    __asm {
        // 0x58772120: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58772124: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58772128: push ebx
        __asm _emit 0x53
        // 0x58772129: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877212D: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x5877212F: je 0x5877215c
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58772131: push esi
        __asm _emit 0x56
        // 0x58772132: push edi
        __asm _emit 0x57
        // 0x58772133: jmp 0x58772140
        __asm _emit 0xEB
        __asm _emit 0x0B
    }
}

// Ghidra body range 0x58772140..0x5877215E; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_58772120_segment_01() {
    __asm {
        // 0x58772140: sub edx, 0x118
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772146: sub eax, 0x118
        __asm _emit 0x2D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877214B: mov ecx, 0x46
        __asm _emit 0xB9
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772150: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x58772152: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58772154: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58772156: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x58772158: jne 0x58772140
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5877215A: pop edi
        __asm _emit 0x5F
        // 0x5877215B: pop esi
        __asm _emit 0x5E
        // 0x5877215C: pop ebx
        __asm _emit 0x5B
        // 0x5877215D: ret
        __asm _emit 0xC3
    }
}
