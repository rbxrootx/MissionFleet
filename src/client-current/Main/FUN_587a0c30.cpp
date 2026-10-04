// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A0C30 .. +0x81 bytes.
// Source symbol alias: FUN_587a0c30.
extern "C" __declspec(naked) void FUN_587a0c30() {
    __asm {
        // 0x587A0C30: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A0C32: push 0x5898a548
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xA5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A0C37: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0C3D: push eax
        __asm _emit 0x50
        // 0x587A0C3E: push ecx
        __asm _emit 0x51
        // 0x587A0C3F: push esi
        __asm _emit 0x56
        // 0x587A0C40: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A0C45: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587A0C47: push eax
        __asm _emit 0x50
        // 0x587A0C48: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A0C4C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0C52: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A0C54: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A0C58: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587A0C5A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xBF
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A0C5F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A0C62: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A0C64: je 0x587a0c6a
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A0C66: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x587A0C68: jmp 0x587a0c6c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A0C6A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A0C6C: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587A0C6E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A0C70: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0C78: call 0x58743a10
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x2D
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587A0C7D: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A0C80: mov byte ptr [eax + 0x15], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x15
        __asm _emit 0x01
        // 0x587A0C84: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A0C87: mov dword ptr [eax + 4], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A0C8A: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A0C8D: mov dword ptr [eax], eax
        __asm _emit 0x89
        __asm _emit 0x00
        // 0x587A0C8F: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A0C92: mov dword ptr [eax + 8], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587A0C95: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0C9C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587A0C9E: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A0CA2: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A0CA9: pop ecx
        __asm _emit 0x59
        // 0x587A0CAA: pop esi
        __asm _emit 0x5E
        // 0x587A0CAB: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A0CAE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
