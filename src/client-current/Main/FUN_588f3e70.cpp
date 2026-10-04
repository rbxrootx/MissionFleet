// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F3E70 .. +0xA3 bytes.
// Source symbol alias: FUN_588f3e70.
extern "C" __declspec(naked) void FUN_588f3e70() {
    __asm {
        // 0x588F3E70: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F3E72: push 0x589899eb
        __asm _emit 0x68
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F3E77: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3E7D: push eax
        __asm _emit 0x50
        // 0x588F3E7E: push ecx
        __asm _emit 0x51
        // 0x588F3E7F: push esi
        __asm _emit 0x56
        // 0x588F3E80: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F3E85: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F3E87: push eax
        __asm _emit 0x50
        // 0x588F3E88: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F3E8C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3E92: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F3E94: push 0xf0c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3E99: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x8D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F3E9E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F3EA1: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588F3EA5: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3EAD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F3EAF: je 0x588f3ec4
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588F3EB1: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F3EB5: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F3EB9: push ecx
        __asm _emit 0x51
        // 0x588F3EBA: push edx
        __asm _emit 0x52
        // 0x588F3EBB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F3EBD: call 0x588e9f60
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F3EC2: jmp 0x588f3ec6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F3EC4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F3EC6: cmp dword ptr [esi + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F3ECA: jne 0x588f3ede
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588F3ECC: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588F3ECF: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588F3ED2: mov dword ptr [eax + 0xce0], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3EDC: jmp 0x588f3ef3
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588F3EDE: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F3EE1: mov dword ptr [ecx + 0xce4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3EE7: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588F3EEA: mov dword ptr [eax + 0xce0], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3EF0: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588F3EF3: mov dword ptr [eax + 0xce4], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3EFD: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588F3F00: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F3F04: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3F0B: pop ecx
        __asm _emit 0x59
        // 0x588F3F0C: pop esi
        __asm _emit 0x5E
        // 0x588F3F0D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F3F10: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
