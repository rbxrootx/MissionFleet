// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58793E90 .. +0x64 bytes.
// Source symbol alias: FUN_58793e90.
extern "C" __declspec(naked) void FUN_58793e90() {
    __asm {
        // 0x58793E90: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58793E92: push 0x589899eb
        __asm _emit 0x68
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58793E97: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793E9D: push eax
        __asm _emit 0x50
        // 0x58793E9E: push ecx
        __asm _emit 0x51
        // 0x58793E9F: push esi
        __asm _emit 0x56
        // 0x58793EA0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58793EA5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58793EA7: push eax
        __asm _emit 0x50
        // 0x58793EA8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58793EAC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793EB2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58793EB4: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58793EB6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x8D
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58793EBB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58793EBE: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58793EC2: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793ECA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58793ECC: je 0x58793edc
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58793ECE: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58793ED2: push ecx
        __asm _emit 0x51
        // 0x58793ED3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58793ED5: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58793EDA: jmp 0x58793ede
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58793EDC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58793EDE: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58793EE1: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58793EE5: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793EEC: pop ecx
        __asm _emit 0x59
        // 0x58793EED: pop esi
        __asm _emit 0x5E
        // 0x58793EEE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58793EF1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
