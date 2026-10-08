// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 48 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772ba0.

// Ghidra body range 0x58772BA0..0x58772BD0; 48 mapped bytes.
extern "C" __declspec(naked) void FUN_58772ba0_segment_00() {
    __asm {
        // 0x58772BA0: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58772BA4: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58772BA6: jbe 0x58772bcf
        __asm _emit 0x76
        __asm _emit 0x27
        // 0x58772BA8: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58772BAC: push ebx
        __asm _emit 0x53
        // 0x58772BAD: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772BB1: push esi
        __asm _emit 0x56
        // 0x58772BB2: push edi
        __asm _emit 0x57
        // 0x58772BB3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58772BB5: je 0x58772bc2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58772BB7: mov ecx, 0x46
        __asm _emit 0xB9
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772BBC: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x58772BBE: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58772BC0: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58772BC2: dec edx
        __asm _emit 0x4A
        // 0x58772BC3: add eax, 0x118
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772BC8: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58772BCA: ja 0x58772bb3
        __asm _emit 0x77
        __asm _emit 0xE7
        // 0x58772BCC: pop edi
        __asm _emit 0x5F
        // 0x58772BCD: pop esi
        __asm _emit 0x5E
        // 0x58772BCE: pop ebx
        __asm _emit 0x5B
        // 0x58772BCF: ret
        __asm _emit 0xC3
    }
}
