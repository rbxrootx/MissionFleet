// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58842F60 .. +0x45 bytes.
// Source symbol alias: FUN_58842f60.
extern "C" __declspec(naked) void FUN_58842f60() {
    __asm {
        // 0x58842F60: push esi
        __asm _emit 0x56
        // 0x58842F61: mov esi, dword ptr [ecx + 0x138]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842F67: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58842F69: jne 0x58842f71
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58842F6B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58842F6D: pop esi
        __asm _emit 0x5E
        // 0x58842F6E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58842F71: push ebx
        __asm _emit 0x53
        // 0x58842F72: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58842F78: push edi
        __asm _emit 0x57
        // 0x58842F79: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58842F7D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58842F80: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58842F83: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58842F86: push eax
        __asm _emit 0x50
        // 0x58842F87: push edi
        __asm _emit 0x57
        // 0x58842F88: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58842F8A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58842F8C: je 0x58842f9d
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58842F8E: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x58842F91: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58842F93: jne 0x58842f80
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58842F95: pop edi
        __asm _emit 0x5F
        // 0x58842F96: pop ebx
        __asm _emit 0x5B
        // 0x58842F97: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58842F99: pop esi
        __asm _emit 0x5E
        // 0x58842F9A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58842F9D: pop edi
        __asm _emit 0x5F
        // 0x58842F9E: pop ebx
        __asm _emit 0x5B
        // 0x58842F9F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58842FA1: pop esi
        __asm _emit 0x5E
        // 0x58842FA2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
