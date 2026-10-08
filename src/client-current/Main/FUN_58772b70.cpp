// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 48 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772b70.

// Ghidra body range 0x58772B70..0x58772BA0; 48 mapped bytes.
extern "C" __declspec(naked) void FUN_58772b70_segment_00() {
    __asm {
        // 0x58772B70: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58772B74: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58772B76: jbe 0x58772b9f
        __asm _emit 0x76
        __asm _emit 0x27
        // 0x58772B78: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58772B7C: push ebx
        __asm _emit 0x53
        // 0x58772B7D: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772B81: push esi
        __asm _emit 0x56
        // 0x58772B82: push edi
        __asm _emit 0x57
        // 0x58772B83: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58772B85: je 0x58772b92
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58772B87: mov ecx, 0x42
        __asm _emit 0xB9
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772B8C: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x58772B8E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58772B90: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58772B92: dec edx
        __asm _emit 0x4A
        // 0x58772B93: add eax, 0x108
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772B98: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58772B9A: ja 0x58772b83
        __asm _emit 0x77
        __asm _emit 0xE7
        // 0x58772B9C: pop edi
        __asm _emit 0x5F
        // 0x58772B9D: pop esi
        __asm _emit 0x5E
        // 0x58772B9E: pop ebx
        __asm _emit 0x5B
        // 0x58772B9F: ret
        __asm _emit 0xC3
    }
}
