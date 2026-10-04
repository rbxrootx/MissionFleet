// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58786C00 .. +0xCA bytes.
// Source symbol alias: FUN_58786c00.
extern "C" __declspec(naked) void FUN_58786c00() {
    __asm {
        // 0x58786C00: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58786C02: push 0x589894ab
        __asm _emit 0x68
        __asm _emit 0xAB
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58786C07: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786C0D: push eax
        __asm _emit 0x50
        // 0x58786C0E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58786C11: push ebx
        __asm _emit 0x53
        // 0x58786C12: push esi
        __asm _emit 0x56
        // 0x58786C13: push edi
        __asm _emit 0x57
        // 0x58786C14: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58786C19: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58786C1B: push eax
        __asm _emit 0x50
        // 0x58786C1C: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58786C20: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786C26: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58786C28: push 0x3c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786C2D: mov dword ptr [esi], 0x58996ac8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC8
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58786C33: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x60
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58786C38: push 0x3c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786C3D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58786C3F: push edi
        __asm _emit 0x57
        // 0x58786C40: push eax
        __asm _emit 0x50
        // 0x58786C41: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58786C44: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x5F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58786C49: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58786C4B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x5F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58786C50: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58786C52: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58786C55: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58786C59: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58786C5D: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x58786C5F: je 0x58786c74
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58786C61: lea eax, [esp + 0x13]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x13
        // 0x58786C65: push eax
        __asm _emit 0x50
        // 0x58786C66: lea ecx, [esp + 0x17]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x58786C6A: push ecx
        __asm _emit 0x51
        // 0x58786C6B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58786C6D: call 0x587a0c30
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58786C72: jmp 0x58786c76
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58786C74: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58786C76: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58786C78: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58786C7A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58786C7C: mov word ptr [esi + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x36
        // 0x58786C80: mov word ptr [esi + 0x3c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58786C84: mov dword ptr [esi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x58786C87: mov dword ptr [esi + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58786C8A: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58786C8D: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58786C90: mov dword ptr [esi + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58786C93: mov dword ptr [esi + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58786C96: mov dword ptr [esi + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x58786C99: mov dword ptr [esi + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x58786C9C: mov dword ptr [esi + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x58786C9F: mov dword ptr [esi + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x2C
        // 0x58786CA2: mov dword ptr [esi + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x58786CA5: mov word ptr [esi + 0x34], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x34
        // 0x58786CA9: mov word ptr [esi + 0x38], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x38
        // 0x58786CAD: mov word ptr [esi + 0x3a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x3A
        // 0x58786CB1: mov word ptr [esi + 0x3e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x3E
        // 0x58786CB5: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58786CB7: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58786CBB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786CC2: pop ecx
        __asm _emit 0x59
        // 0x58786CC3: pop edi
        __asm _emit 0x5F
        // 0x58786CC4: pop esi
        __asm _emit 0x5E
        // 0x58786CC5: pop ebx
        __asm _emit 0x5B
        // 0x58786CC6: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58786CC9: ret
        __asm _emit 0xC3
    }
}
