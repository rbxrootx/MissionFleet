// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58793E20 .. +0x64 bytes.
// Source symbol alias: FUN_58793e20.
extern "C" __declspec(naked) void FUN_58793e20() {
    __asm {
        // 0x58793E20: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58793E22: push 0x589899eb
        __asm _emit 0x68
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58793E27: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793E2D: push eax
        __asm _emit 0x50
        // 0x58793E2E: push ecx
        __asm _emit 0x51
        // 0x58793E2F: push esi
        __asm _emit 0x56
        // 0x58793E30: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58793E35: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58793E37: push eax
        __asm _emit 0x50
        // 0x58793E38: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58793E3C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793E42: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58793E44: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58793E46: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x8E
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58793E4B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58793E4E: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58793E52: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793E5A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58793E5C: je 0x58793e6c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58793E5E: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58793E62: push ecx
        __asm _emit 0x51
        // 0x58793E63: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58793E65: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58793E6A: jmp 0x58793e6e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58793E6C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58793E6E: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58793E71: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58793E75: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793E7C: pop ecx
        __asm _emit 0x59
        // 0x58793E7D: pop esi
        __asm _emit 0x5E
        // 0x58793E7E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58793E81: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
