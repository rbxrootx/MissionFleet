// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587522F0 .. +0x45 bytes.
// Source symbol alias: FUN_587522f0.
extern "C" __declspec(naked) void FUN_587522f0() {
    __asm {
        // 0x587522F0: push esi
        __asm _emit 0x56
        // 0x587522F1: mov esi, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587522F7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587522F9: jne 0x58752301
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587522FB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587522FD: pop esi
        __asm _emit 0x5E
        // 0x587522FE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58752301: push ebx
        __asm _emit 0x53
        // 0x58752302: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58752308: push edi
        __asm _emit 0x57
        // 0x58752309: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875230D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58752310: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58752313: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58752316: push eax
        __asm _emit 0x50
        // 0x58752317: push edi
        __asm _emit 0x57
        // 0x58752318: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5875231A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875231C: je 0x5875232d
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5875231E: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x58752321: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58752323: jne 0x58752310
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58752325: pop edi
        __asm _emit 0x5F
        // 0x58752326: pop ebx
        __asm _emit 0x5B
        // 0x58752327: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58752329: pop esi
        __asm _emit 0x5E
        // 0x5875232A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5875232D: pop edi
        __asm _emit 0x5F
        // 0x5875232E: pop ebx
        __asm _emit 0x5B
        // 0x5875232F: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58752331: pop esi
        __asm _emit 0x5E
        // 0x58752332: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
