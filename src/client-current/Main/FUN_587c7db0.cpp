// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C7DB0 .. +0x112 bytes.
// Source symbol alias: FUN_587c7db0.
extern "C" __declspec(naked) void FUN_587c7db0() {
    __asm {
        // 0x587C7DB0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587C7DB2: push 0x58981603
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x16
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C7DB7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7DBD: push eax
        __asm _emit 0x50
        // 0x587C7DBE: push ecx
        __asm _emit 0x51
        // 0x587C7DBF: push ebx
        __asm _emit 0x53
        // 0x587C7DC0: push ebp
        __asm _emit 0x55
        // 0x587C7DC1: push esi
        __asm _emit 0x56
        // 0x587C7DC2: push edi
        __asm _emit 0x57
        // 0x587C7DC3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587C7DC8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587C7DCA: push eax
        __asm _emit 0x50
        // 0x587C7DCB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C7DCF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7DD5: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587C7DD7: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C7DDB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C7DDF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587C7DE3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587C7DE7: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587C7DEB: push eax
        __asm _emit 0x50
        // 0x587C7DEC: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587C7DF0: push ecx
        __asm _emit 0x51
        // 0x587C7DF1: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587C7DF5: push edx
        __asm _emit 0x52
        // 0x587C7DF6: push eax
        __asm _emit 0x50
        // 0x587C7DF7: push esi
        __asm _emit 0x56
        // 0x587C7DF8: push ecx
        __asm _emit 0x51
        // 0x587C7DF9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587C7DFB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xB3
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C7E00: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587C7E02: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587C7E06: mov dword ptr [edi], 0x5899afa8
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0xA8
        __asm _emit 0xAF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C7E0C: mov dword ptr [edi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7E12: mov dword ptr [edi + 0xc8], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7E18: mov dword ptr [edi + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7E1E: mov dword ptr [edi + 0xc4], 1
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7E28: mov dword ptr [edi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7E2E: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C7E32: lea ebp, [edi + 0xac]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7E38: mov dword ptr [esp + 0x38], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7E40: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587C7E42: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x4E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C7E47: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587C7E49: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587C7E4C: mov dword ptr [esp + 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587C7E50: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587C7E55: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x587C7E57: je 0x587c7e80
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587C7E59: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587C7E5D: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587C7E61: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7E66: push ebx
        __asm _emit 0x53
        // 0x587C7E67: push ebx
        __asm _emit 0x53
        // 0x587C7E68: push edx
        __asm _emit 0x52
        // 0x587C7E69: push eax
        __asm _emit 0x50
        // 0x587C7E6A: push edi
        __asm _emit 0x57
        // 0x587C7E6B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C7E6D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xB3
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C7E72: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C7E78: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x587C7E7B: mov dword ptr [esi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x587C7E7E: jmp 0x587c7e82
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C7E80: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587C7E82: add dword ptr [esp + 0x3c], 0xe
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x0E
        // 0x587C7E87: mov dword ptr [ebp], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x587C7E8A: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7E8F: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587C7E93: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587C7E96: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587C7E99: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x587C7E9E: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587C7EA2: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x587C7EA5: jne 0x587c7e40
        __asm _emit 0x75
        __asm _emit 0x99
        // 0x587C7EA7: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x587C7EAA: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587C7EAC: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C7EB0: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7EB7: pop ecx
        __asm _emit 0x59
        // 0x587C7EB8: pop edi
        __asm _emit 0x5F
        // 0x587C7EB9: pop esi
        __asm _emit 0x5E
        // 0x587C7EBA: pop ebp
        __asm _emit 0x5D
        // 0x587C7EBB: pop ebx
        __asm _emit 0x5B
        // 0x587C7EBC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587C7EBF: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
