// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58753660 .. +0x2E bytes.
// Source symbol alias: FUN_58753660.
extern "C" __declspec(naked) void FUN_58753660() {
    __asm {
        // 0x58753660: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58753664: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58753666: jbe 0x5875368d
        __asm _emit 0x76
        __asm _emit 0x25
        // 0x58753668: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5875366C: push ebx
        __asm _emit 0x53
        // 0x5875366D: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58753671: push esi
        __asm _emit 0x56
        // 0x58753672: push edi
        __asm _emit 0x57
        // 0x58753673: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58753675: je 0x58753682
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58753677: mov ecx, 0x12
        __asm _emit 0xB9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875367C: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x5875367E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58753680: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58753682: dec edx
        __asm _emit 0x4A
        // 0x58753683: add eax, 0x48
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x48
        // 0x58753686: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58753688: ja 0x58753673
        __asm _emit 0x77
        __asm _emit 0xE9
        // 0x5875368A: pop edi
        __asm _emit 0x5F
        // 0x5875368B: pop esi
        __asm _emit 0x5E
        // 0x5875368C: pop ebx
        __asm _emit 0x5B
        // 0x5875368D: ret
        __asm _emit 0xC3
    }
}
