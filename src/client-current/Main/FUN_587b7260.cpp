// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B7260 .. +0xEA bytes.
// Source symbol alias: FUN_587b7260.
extern "C" __declspec(naked) void FUN_587b7260() {
    __asm {
        // 0x587B7260: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587B7262: push 0x58981073
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0x10
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7267: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B726D: push eax
        __asm _emit 0x50
        // 0x587B726E: push ecx
        __asm _emit 0x51
        // 0x587B726F: push ebp
        __asm _emit 0x55
        // 0x587B7270: push esi
        __asm _emit 0x56
        // 0x587B7271: push edi
        __asm _emit 0x57
        // 0x587B7272: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B7277: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B7279: push eax
        __asm _emit 0x50
        // 0x587B727A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B727E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7284: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B7286: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B728A: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587B728E: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587B7292: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B7296: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B729A: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B729E: push eax
        __asm _emit 0x50
        // 0x587B729F: push edi
        __asm _emit 0x57
        // 0x587B72A0: push ebp
        __asm _emit 0x55
        // 0x587B72A1: push ecx
        __asm _emit 0x51
        // 0x587B72A2: push edx
        __asm _emit 0x52
        // 0x587B72A3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B72A5: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xD7
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587B72AA: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587B72AE: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587B72B1: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B72B5: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B72BD: mov dword ptr [esi], 0x5899a118
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0xA1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B72C3: mov dword ptr [esi + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B72CA: mov dword ptr [esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x587B72CD: mov dword ptr [esi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587B72D0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B72D2: jne 0x587b7329
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x587B72D4: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x587B72D6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x59
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B72DB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B72DE: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587B72E2: mov byte ptr [esp + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x587B72E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B72E9: je 0x587b7322
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x587B72EB: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B72EF: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B72F3: cmp dword ptr [edx + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xBA
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B72F9: jle 0x587b7316
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x587B72FB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587B72FD: jl 0x587b7316
        __asm _emit 0x7C
        __asm _emit 0x17
        // 0x587B72FF: mov edx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7305: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587B7307: je 0x587b7316
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587B7309: mov edx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xBA
        // 0x587B730C: push edx
        __asm _emit 0x52
        // 0x587B730D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B730F: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7314: jmp 0x587b7324
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587B7316: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B7318: push edx
        __asm _emit 0x52
        // 0x587B7319: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B731B: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7320: jmp 0x587b7324
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B7322: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B7324: mov byte ptr [esp + 0x1c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B7329: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B732B: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x587B732E: call 0x587b70a0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B7333: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B7335: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B7339: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7340: pop ecx
        __asm _emit 0x59
        // 0x587B7341: pop edi
        __asm _emit 0x5F
        // 0x587B7342: pop esi
        __asm _emit 0x5E
        // 0x587B7343: pop ebp
        __asm _emit 0x5D
        // 0x587B7344: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587B7347: ret 0x24
        __asm _emit 0xC2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
