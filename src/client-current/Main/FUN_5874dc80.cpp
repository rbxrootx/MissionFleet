// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874DC80 .. +0x10D bytes.
// Source symbol alias: FUN_5874dc80.
extern "C" __declspec(naked) void FUN_5874dc80() {
    __asm {
        // 0x5874DC80: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5874DC82: push 0x5897e563
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0xE5
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5874DC87: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874DC8D: push eax
        __asm _emit 0x50
        // 0x5874DC8E: push ecx
        __asm _emit 0x51
        // 0x5874DC8F: push ebx
        __asm _emit 0x53
        // 0x5874DC90: push ebp
        __asm _emit 0x55
        // 0x5874DC91: push esi
        __asm _emit 0x56
        // 0x5874DC92: push edi
        __asm _emit 0x57
        // 0x5874DC93: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874DC98: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874DC9A: push eax
        __asm _emit 0x50
        // 0x5874DC9B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874DC9F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874DCA5: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5874DCA7: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874DCAB: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874DCAF: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5874DCB3: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874DCB7: push eax
        __asm _emit 0x50
        // 0x5874DCB8: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874DCBC: push ecx
        __asm _emit 0x51
        // 0x5874DCBD: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874DCC1: push edx
        __asm _emit 0x52
        // 0x5874DCC2: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874DCC6: push eax
        __asm _emit 0x50
        // 0x5874DCC7: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874DCCB: push ecx
        __asm _emit 0x51
        // 0x5874DCCC: push edx
        __asm _emit 0x52
        // 0x5874DCCD: push eax
        __asm _emit 0x50
        // 0x5874DCCE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874DCD0: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874DCD5: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5874DCD7: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874DCDB: mov dword ptr [edi], 0x5898d2c0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0xC0
        __asm _emit 0xD2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874DCE1: lea ebp, [edi + 0x1e8]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874DCE7: mov dword ptr [esp + 0x3c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874DCEF: nop
        __asm _emit 0x90
        // 0x5874DCF0: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5874DCF3: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5874DCF6: mov edx, dword ptr [ebp - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE0
        // 0x5874DCF9: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5874DCFC: sub ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x14
        // 0x5874DCFF: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5874DD01: mov dword ptr [edx + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5874DD04: mov dword ptr [edx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5874DD07: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xEF
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874DD0C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5874DD0E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874DD11: mov dword ptr [esp + 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874DD15: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5874DD1A: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5874DD1C: je 0x5874dd49
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5874DD1E: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874DD22: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5874DD25: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5874DD28: add edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x40
        // 0x5874DD2B: push edx
        __asm _emit 0x52
        // 0x5874DD2C: push ebx
        __asm _emit 0x53
        // 0x5874DD2D: push ebx
        __asm _emit 0x53
        // 0x5874DD2E: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x5874DD31: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5874DD34: push eax
        __asm _emit 0x50
        // 0x5874DD35: push ecx
        __asm _emit 0x51
        // 0x5874DD36: push edi
        __asm _emit 0x57
        // 0x5874DD37: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874DD39: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x54
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874DD3E: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874DD44: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x5874DD47: jmp 0x5874dd4b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874DD49: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5874DD4B: mov dword ptr [ebp], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x5874DD4E: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874DD53: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5874DD57: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5874DD5A: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5874DD5F: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874DD63: jne 0x5874dcf0
        __asm _emit 0x75
        __asm _emit 0x8B
        // 0x5874DD65: mov ecx, dword ptr [edi + 0x1e8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874DD6B: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874DD70: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x4F
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874DD75: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5874DD77: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874DD7B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874DD82: pop ecx
        __asm _emit 0x59
        // 0x5874DD83: pop edi
        __asm _emit 0x5F
        // 0x5874DD84: pop esi
        __asm _emit 0x5E
        // 0x5874DD85: pop ebp
        __asm _emit 0x5D
        // 0x5874DD86: pop ebx
        __asm _emit 0x5B
        // 0x5874DD87: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5874DD8A: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
