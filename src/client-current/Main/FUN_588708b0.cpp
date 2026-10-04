// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588708B0 .. +0x9D9 bytes.
// Source symbol alias: FUN_588708b0.
extern "C" __declspec(naked) void FUN_588708b0() {
    __asm {
        // 0x588708B0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588708B2: push 0x589861e3
        __asm _emit 0x68
        __asm _emit 0xE3
        __asm _emit 0x61
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588708B7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588708BD: push eax
        __asm _emit 0x50
        // 0x588708BE: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x588708C1: push ebx
        __asm _emit 0x53
        // 0x588708C2: push ebp
        __asm _emit 0x55
        // 0x588708C3: push esi
        __asm _emit 0x56
        // 0x588708C4: push edi
        __asm _emit 0x57
        // 0x588708C5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588708CA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588708CC: push eax
        __asm _emit 0x50
        // 0x588708CD: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588708D1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588708D7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588708D9: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588708DD: movsx eax, word ptr [esp + 0x48]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588708E2: mov ebp, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588708E6: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588708EA: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588708EE: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588708F0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588708F2: push ebx
        __asm _emit 0x53
        // 0x588708F3: push eax
        __asm _emit 0x50
        // 0x588708F4: push ebp
        __asm _emit 0x55
        // 0x588708F5: push edi
        __asm _emit 0x57
        // 0x588708F6: push ecx
        __asm _emit 0x51
        // 0x588708F7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588708F9: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588708FE: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58870904: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58870909: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5887090C: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x5887090F: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870916: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x58870919: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5887091B: mov dword ptr [esp + 0x38], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5887091F: mov dword ptr [esi], 0x5899edf8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xF8
        __asm _emit 0xED
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58870925: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xC3
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887092A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887092C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887092F: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870933: mov byte ptr [esp + 0x34], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x58870938: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5887093A: je 0x5887095e
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5887093C: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870940: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58870944: push edx
        __asm _emit 0x52
        // 0x58870945: push ebx
        __asm _emit 0x53
        // 0x58870946: push ebx
        __asm _emit 0x53
        // 0x58870947: push ebp
        __asm _emit 0x55
        // 0x58870948: push eax
        __asm _emit 0x50
        // 0x58870949: push esi
        __asm _emit 0x56
        // 0x5887094A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5887094C: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870951: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58870957: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5887095A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5887095C: jmp 0x58870960
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887095E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58870960: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58870965: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58870969: mov dword ptr [esi + 0x68], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5887096C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870971: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58870974: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870979: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5887097D: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5887097F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870984: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870987: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5887098B: mov byte ptr [esp + 0x34], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        // 0x58870990: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58870992: je 0x588709d7
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x58870994: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887099A: cmp dword ptr [ecx + 0x164], 0x98
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588709A4: jle 0x588709bc
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588709A6: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588709AC: je 0x588709bc
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588709AE: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588709B4: mov ecx, dword ptr [edx + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588709BA: jmp 0x588709be
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588709BC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588709BE: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588709C2: push edx
        __asm _emit 0x52
        // 0x588709C3: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588709C7: push ebp
        __asm _emit 0x55
        // 0x588709C8: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x588709CB: push edx
        __asm _emit 0x52
        // 0x588709CC: push ecx
        __asm _emit 0x51
        // 0x588709CD: push esi
        __asm _emit 0x56
        // 0x588709CE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588709D0: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x12
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588709D5: jmp 0x588709d9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588709D7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588709D9: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588709DB: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588709DF: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588709E2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588709E7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588709E9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588709EC: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588709F0: mov byte ptr [esp + 0x34], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x03
        // 0x588709F5: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588709F7: je 0x58870a21
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588709F9: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588709FD: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58870A01: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x58870A04: push eax
        __asm _emit 0x50
        // 0x58870A05: push ebx
        __asm _emit 0x53
        // 0x58870A06: push ebx
        __asm _emit 0x53
        // 0x58870A07: push ebp
        __asm _emit 0x55
        // 0x58870A08: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x58870A0B: push ecx
        __asm _emit 0x51
        // 0x58870A0C: push esi
        __asm _emit 0x56
        // 0x58870A0D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58870A0F: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870A14: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58870A1A: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58870A1D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58870A1F: jmp 0x58870a23
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870A21: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58870A23: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870A28: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58870A2C: mov dword ptr [esi + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58870A2F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870A34: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58870A37: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870A3C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58870A40: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58870A42: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870A47: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58870A49: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870A4C: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870A50: mov byte ptr [esp + 0x34], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x04
        // 0x58870A55: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58870A57: je 0x58870a81
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58870A59: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870A5D: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58870A61: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x58870A64: push eax
        __asm _emit 0x50
        // 0x58870A65: push ebx
        __asm _emit 0x53
        // 0x58870A66: push ebx
        __asm _emit 0x53
        // 0x58870A67: push ebp
        __asm _emit 0x55
        // 0x58870A68: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x58870A6B: push ecx
        __asm _emit 0x51
        // 0x58870A6C: push esi
        __asm _emit 0x56
        // 0x58870A6D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58870A6F: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870A74: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58870A7A: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58870A7D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58870A7F: jmp 0x58870a83
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870A81: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58870A83: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58870A88: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58870A8C: mov dword ptr [esi + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58870A8F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870A94: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58870A97: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870A9C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58870AA0: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870AA5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870AAA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870AAD: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870AB1: mov byte ptr [esp + 0x34], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x05
        // 0x58870AB6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58870AB8: je 0x58870b14
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x58870ABA: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870AC0: cmp dword ptr [ecx + 0x160], 0x21
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x21
        // 0x58870AC7: jle 0x58870adf
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58870AC9: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870ACF: je 0x58870adf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870AD1: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870AD7: add ecx, 0x840
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870ADD: jmp 0x58870ae1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870ADF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58870AE1: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870AE5: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x58870AE8: push edx
        __asm _emit 0x52
        // 0x58870AE9: lea edx, [ebp + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870AEF: push edx
        __asm _emit 0x52
        // 0x58870AF0: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870AF4: add edx, 0x104
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870AFA: push edx
        __asm _emit 0x52
        // 0x58870AFB: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870B01: push ecx
        __asm _emit 0x51
        // 0x58870B02: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870B08: push esi
        __asm _emit 0x56
        // 0x58870B09: push ecx
        __asm _emit 0x51
        // 0x58870B0A: push edx
        __asm _emit 0x52
        // 0x58870B0B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58870B0D: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xD2
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58870B12: jmp 0x58870b16
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870B14: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58870B16: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870B1B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58870B1D: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58870B21: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58870B24: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870B29: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870B2E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xC1
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870B33: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870B36: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870B3A: mov byte ptr [esp + 0x34], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x06
        // 0x58870B3F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58870B41: je 0x58870b8b
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x58870B43: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870B49: cmp dword ptr [ecx + 0x160], 0x2a
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2A
        // 0x58870B50: jle 0x58870b68
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58870B52: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870B58: je 0x58870b68
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870B5A: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870B60: add ecx, 0xa80
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870B66: jmp 0x58870b6a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870B68: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58870B6A: lea edx, [ebp + 0x8a]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870B70: push edx
        __asm _emit 0x52
        // 0x58870B71: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58870B75: add edx, 0x103
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870B7B: push edx
        __asm _emit 0x52
        // 0x58870B7C: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58870B7E: push ecx
        __asm _emit 0x51
        // 0x58870B7F: push esi
        __asm _emit 0x56
        // 0x58870B80: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58870B82: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x65
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870B87: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58870B89: jmp 0x58870b8d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870B8B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58870B8D: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870B91: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870B97: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58870B9A: add eax, 0xbb8
        __asm _emit 0x05
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870B9F: mov byte ptr [esp + 0x34], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58870BA3: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58870BA7: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58870BA9: je 0x58870bb1
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58870BAB: push edi
        __asm _emit 0x57
        // 0x58870BAC: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870BB1: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58870BB4: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58870BB6: je 0x58870bbe
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58870BB8: push edi
        __asm _emit 0x57
        // 0x58870BB9: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870BBE: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58870BC0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870BC5: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58870BC7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870BCA: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870BCE: mov byte ptr [esp + 0x34], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x07
        // 0x58870BD3: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58870BD5: je 0x58870c05
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58870BD7: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870BDB: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58870BDF: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x58870BE2: push ecx
        __asm _emit 0x51
        // 0x58870BE3: push ebx
        __asm _emit 0x53
        // 0x58870BE4: push ebx
        __asm _emit 0x53
        // 0x58870BE5: lea edx, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x78
        // 0x58870BE8: push edx
        __asm _emit 0x52
        // 0x58870BE9: add eax, 0xd7
        __asm _emit 0x05
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870BEE: push eax
        __asm _emit 0x50
        // 0x58870BEF: push esi
        __asm _emit 0x56
        // 0x58870BF0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58870BF2: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870BF7: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58870BFD: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58870C00: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x58870C03: jmp 0x58870c07
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870C05: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58870C07: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58870C09: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58870C0D: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58870C10: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870C15: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58870C17: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870C1A: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870C1E: mov byte ptr [esp + 0x34], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x08
        // 0x58870C23: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58870C25: je 0x58870c55
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58870C27: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870C2B: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58870C2F: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x58870C32: push ecx
        __asm _emit 0x51
        // 0x58870C33: push ebx
        __asm _emit 0x53
        // 0x58870C34: push ebx
        __asm _emit 0x53
        // 0x58870C35: lea edx, [ebp + 0xaa]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870C3B: push edx
        __asm _emit 0x52
        // 0x58870C3C: add eax, 0xd7
        __asm _emit 0x05
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870C41: push eax
        __asm _emit 0x50
        // 0x58870C42: push esi
        __asm _emit 0x56
        // 0x58870C43: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58870C45: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870C4A: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58870C50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58870C53: jmp 0x58870c57
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870C55: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58870C57: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58870C5A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870C5F: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58870C63: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x58870C66: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870C6B: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58870C6E: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870C73: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58870C77: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58870C7A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870C7F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870C84: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58870C87: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870C8C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58870C90: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58870C93: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870C98: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58870C9C: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58870C9F: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58870CA1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58870CA5: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58870CA8: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870CAD: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870CB2: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58870CB4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870CB9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870CBC: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870CC0: mov byte ptr [esp + 0x34], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x09
        // 0x58870CC5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58870CC7: je 0x58870d04
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x58870CC9: push ebx
        __asm _emit 0x53
        // 0x58870CCA: push ebx
        __asm _emit 0x53
        // 0x58870CCB: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58870CD0: lea ecx, [ebp + 0xe0]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870CD6: push ecx
        __asm _emit 0x51
        // 0x58870CD7: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58870CDB: lea edx, [ecx + 0x1b4]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870CE1: push edx
        __asm _emit 0x52
        // 0x58870CE2: lea edx, [ebp + 0xc6]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870CE8: push edx
        __asm _emit 0x52
        // 0x58870CE9: add ecx, 0xfc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870CEF: push ecx
        __asm _emit 0x51
        // 0x58870CF0: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870CF6: push ecx
        __asm _emit 0x51
        // 0x58870CF7: push ebx
        __asm _emit 0x53
        // 0x58870CF8: push esi
        __asm _emit 0x56
        // 0x58870CF9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58870CFB: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58870D00: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58870D02: jmp 0x58870d06
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870D04: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58870D06: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870D0A: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x58870D0D: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58870D10: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x58870D13: mov byte ptr [esp + 0x34], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58870D17: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x58870D1B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58870D1D: je 0x58870d25
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58870D1F: push edi
        __asm _emit 0x57
        // 0x58870D20: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870D25: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58870D28: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58870D2A: je 0x58870d32
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58870D2C: push edi
        __asm _emit 0x57
        // 0x58870D2D: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870D32: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58870D34: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870D39: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870D3C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870D40: mov byte ptr [esp + 0x34], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0A
        // 0x58870D45: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58870D47: je 0x58870d8c
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x58870D49: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870D4F: cmp dword ptr [ecx + 0x160], 0x20
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x58870D56: jle 0x58870d6e
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58870D58: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870D5E: je 0x58870d6e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870D60: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870D66: add edx, 0x800
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870D6C: jmp 0x58870d70
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870D6E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58870D70: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870D74: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58870D77: push ecx
        __asm _emit 0x51
        // 0x58870D78: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58870D7C: push ebp
        __asm _emit 0x55
        // 0x58870D7D: add ecx, 0x33
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x33
        // 0x58870D80: push ecx
        __asm _emit 0x51
        // 0x58870D81: push edx
        __asm _emit 0x52
        // 0x58870D82: push esi
        __asm _emit 0x56
        // 0x58870D83: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58870D85: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x3C
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58870D8A: jmp 0x58870d8e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870D8C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58870D8E: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870D94: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870D99: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58870D9D: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870DA3: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870DA8: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58870DAC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x1F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870DB1: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58870DB3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870DB8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58870DBA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870DBD: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870DC1: mov byte ptr [esp + 0x34], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0B
        // 0x58870DC6: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58870DC8: je 0x58870df6
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x58870DCA: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870DCE: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58870DD2: add eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1E
        // 0x58870DD5: push eax
        __asm _emit 0x50
        // 0x58870DD6: push ebx
        __asm _emit 0x53
        // 0x58870DD7: push ebx
        __asm _emit 0x53
        // 0x58870DD8: lea ecx, [ebp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x64
        // 0x58870DDB: push ecx
        __asm _emit 0x51
        // 0x58870DDC: add edx, 0xc4
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870DE2: push edx
        __asm _emit 0x52
        // 0x58870DE3: push esi
        __asm _emit 0x56
        // 0x58870DE4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58870DE6: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870DEB: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58870DF1: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58870DF4: jmp 0x58870df8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870DF6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58870DF8: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870DFD: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870E03: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58870E07: lea ecx, [esi + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870E0D: lea edx, [esi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870E13: add ebp, 0x49
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x49
        // 0x58870E16: mov byte ptr [esp + 0x34], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58870E1A: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58870E1E: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58870E22: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870E26: mov dword ptr [esp + 0x1c], 0xb
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870E2E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58870E30: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870E35: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870E3A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870E3D: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58870E41: mov byte ptr [esp + 0x34], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0C
        // 0x58870E46: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58870E48: je 0x58870e93
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x58870E4A: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870E50: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870E5A: jle 0x58870e72
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58870E5C: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870E62: je 0x58870e72
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870E64: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870E6A: add edx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870E70: jmp 0x58870e74
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870E72: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58870E74: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870E78: push ecx
        __asm _emit 0x51
        // 0x58870E79: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58870E7D: add ecx, 0x87
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870E83: push ecx
        __asm _emit 0x51
        // 0x58870E84: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58870E86: push edx
        __asm _emit 0x52
        // 0x58870E87: push esi
        __asm _emit 0x56
        // 0x58870E88: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58870E8A: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x62
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870E8F: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58870E91: jmp 0x58870e95
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870E93: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58870E95: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58870E99: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870E9D: mov dword ptr [ebp - 4], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xFC
        // 0x58870EA0: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58870EA3: add eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x32
        // 0x58870EA6: mov byte ptr [esp + 0x34], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58870EAA: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58870EAE: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58870EB2: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58870EB4: je 0x58870ebc
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58870EB6: push edi
        __asm _emit 0x57
        // 0x58870EB7: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870EBC: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58870EBF: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58870EC1: je 0x58870ec9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58870EC3: push edi
        __asm _emit 0x57
        // 0x58870EC4: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870EC9: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x58870ECC: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870ED1: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x1E
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870ED6: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870EDB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870EE0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870EE3: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58870EE7: mov byte ptr [esp + 0x34], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0D
        // 0x58870EEC: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58870EEE: je 0x58870f36
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x58870EF0: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870EF6: cmp dword ptr [ecx + 0x160], 0xcb
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870F00: jle 0x58870f18
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58870F02: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870F08: je 0x58870f18
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870F0A: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870F10: add edx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870F16: jmp 0x58870f1a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870F18: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58870F1A: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58870F1E: push ecx
        __asm _emit 0x51
        // 0x58870F1F: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58870F23: add ecx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x32
        // 0x58870F26: push ecx
        __asm _emit 0x51
        // 0x58870F27: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58870F29: push edx
        __asm _emit 0x52
        // 0x58870F2A: push esi
        __asm _emit 0x56
        // 0x58870F2B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58870F2D: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870F32: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58870F34: jmp 0x58870f38
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870F36: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58870F38: mov dx, word ptr [esp + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58870F3D: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x58870F40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58870F43: mov byte ptr [esp + 0x34], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58870F47: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x58870F4B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58870F4D: je 0x58870f55
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58870F4F: push edi
        __asm _emit 0x57
        // 0x58870F50: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x1F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870F55: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58870F58: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58870F5A: je 0x58870f62
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58870F5C: push edi
        __asm _emit 0x57
        // 0x58870F5D: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x1F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870F62: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58870F65: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870F6A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870F6F: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58870F71: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xBC
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58870F76: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58870F78: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58870F7B: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58870F7F: mov byte ptr [esp + 0x34], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0E
        // 0x58870F84: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58870F86: je 0x58871007
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x58870F88: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58870F8D: cmp dword ptr [eax + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x58870F94: jle 0x58870fac
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58870F96: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870F9C: je 0x58870fac
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870F9E: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870FA4: add ebp, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870FAA: jmp 0x58870fae
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58870FAC: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58870FAE: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58870FB2: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58870FB6: add eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x32
        // 0x58870FB9: push eax
        __asm _emit 0x50
        // 0x58870FBA: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58870FBE: push ebx
        __asm _emit 0x53
        // 0x58870FBF: push ebx
        __asm _emit 0x53
        // 0x58870FC0: dec eax
        __asm _emit 0x48
        // 0x58870FC1: push eax
        __asm _emit 0x50
        // 0x58870FC2: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x28
        // 0x58870FC5: push ecx
        __asm _emit 0x51
        // 0x58870FC6: push esi
        __asm _emit 0x56
        // 0x58870FC7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58870FC9: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58870FCE: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58870FD4: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58870FD7: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x54
        // 0x58870FDA: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58870FDC: je 0x58871009
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58870FDE: mov edx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x18
        // 0x58870FE1: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x58870FE4: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x58870FE7: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x58870FEA: mov ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x58870FED: lea eax, [ebp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x58870FF0: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58870FF3: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58870FF6: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58870FF9: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58870FFC: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58870FFF: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58871002: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58871005: jmp 0x58871009
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58871007: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58871009: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5887100D: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x5887100F: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871014: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58871018: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x5887101A: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5887101E: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58871021: add eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x32
        // 0x58871024: mov byte ptr [esp + 0x34], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58871028: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5887102C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5887102E: je 0x58871036
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58871030: push edi
        __asm _emit 0x57
        // 0x58871031: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x1F
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871036: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58871039: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5887103B: je 0x58871043
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887103D: push edi
        __asm _emit 0x57
        // 0x5887103E: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x1E
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871043: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x58871045: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xBC
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887104A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887104D: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58871051: mov byte ptr [esp + 0x34], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0F
        // 0x58871056: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58871058: je 0x588710b3
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x5887105A: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58871060: cmp dword ptr [ecx + 0x164], 0xb7
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887106A: jle 0x58871082
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5887106C: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871072: je 0x58871082
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58871074: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887107A: mov edx, dword ptr [edx + 0x2dc]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871080: jmp 0x58871084
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58871082: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58871084: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58871088: add ecx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x32
        // 0x5887108B: push ecx
        __asm _emit 0x51
        // 0x5887108C: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58871090: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x03
        // 0x58871093: push ecx
        __asm _emit 0x51
        // 0x58871094: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58871098: add ecx, 0xa1
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887109E: push ecx
        __asm _emit 0x51
        // 0x5887109F: push edx
        __asm _emit 0x52
        // 0x588710A0: push esi
        __asm _emit 0x56
        // 0x588710A1: push ebx
        __asm _emit 0x53
        // 0x588710A2: push 0x9c4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588710A7: push ebx
        __asm _emit 0x53
        // 0x588710A8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588710AA: call 0x5877e800
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xD7
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588710AF: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588710B1: jmp 0x588710b5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588710B3: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588710B5: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588710B9: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588710BD: mov dword ptr [edx + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x2C
        // 0x588710C0: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588710C3: add eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x32
        // 0x588710C6: mov byte ptr [esp + 0x34], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588710CA: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x588710CE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588710D0: je 0x588710d8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588710D2: push edi
        __asm _emit 0x57
        // 0x588710D3: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x1E
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588710D8: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588710DB: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588710DD: je 0x588710e5
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588710DF: push edi
        __asm _emit 0x57
        // 0x588710E0: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588710E5: add dword ptr [esp + 0x14], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        // 0x588710EA: add dword ptr [esp + 0x18], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x08
        // 0x588710EF: add dword ptr [esp + 0x3c], 0x10
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x10
        // 0x588710F4: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x588710F9: jne 0x58870e30
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588710FF: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58871101: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xBB
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58871106: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58871109: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5887110D: mov byte ptr [esp + 0x34], 0x10
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x10
        // 0x58871112: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58871114: je 0x5887114f
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x58871116: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5887111A: push ebx
        __asm _emit 0x53
        // 0x5887111B: push ebx
        __asm _emit 0x53
        // 0x5887111C: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58871121: lea edx, [ecx + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871127: push edx
        __asm _emit 0x52
        // 0x58871128: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5887112C: lea edi, [edx + 0xe2]
        __asm _emit 0x8D
        __asm _emit 0xBA
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871132: push edi
        __asm _emit 0x57
        // 0x58871133: add ecx, 0x74
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x74
        // 0x58871136: push ecx
        __asm _emit 0x51
        // 0x58871137: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887113D: add edx, 0x2a
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x2A
        // 0x58871140: push edx
        __asm _emit 0x52
        // 0x58871141: push ecx
        __asm _emit 0x51
        // 0x58871142: push ebx
        __asm _emit 0x53
        // 0x58871143: push esi
        __asm _emit 0x56
        // 0x58871144: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58871146: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x21
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5887114B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887114D: jmp 0x58871151
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887114F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58871151: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58871155: mov dword ptr [esi + 0x13c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887115B: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5887115E: add eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x32
        // 0x58871161: mov byte ptr [esp + 0x34], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58871165: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58871169: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5887116B: je 0x58871173
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887116D: push edi
        __asm _emit 0x57
        // 0x5887116E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871173: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58871176: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58871178: je 0x58871180
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887117A: push edi
        __asm _emit 0x57
        // 0x5887117B: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871180: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58871184: mov ebp, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58871188: add edx, 0x96
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887118E: lea eax, [esi + 0x140]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871194: mov dword ptr [esp + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58871198: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5887119C: add ebp, 0x8c
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588711A2: mov dword ptr [esp + 0x44], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588711AA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588711B0: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588711B2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588711B7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588711BA: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588711BE: mov byte ptr [esp + 0x34], 0x11
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x11
        // 0x588711C3: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588711C5: je 0x588711f6
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588711C7: push ebx
        __asm _emit 0x53
        // 0x588711C8: push ebx
        __asm _emit 0x53
        // 0x588711C9: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588711CE: lea ecx, [ebp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x588711D1: push ecx
        __asm _emit 0x51
        // 0x588711D2: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x588711D6: lea edx, [ecx + 0xf2]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588711DC: push edx
        __asm _emit 0x52
        // 0x588711DD: push ebp
        __asm _emit 0x55
        // 0x588711DE: add ecx, 0x2a
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x2A
        // 0x588711E1: push ecx
        __asm _emit 0x51
        // 0x588711E2: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588711E8: push ecx
        __asm _emit 0x51
        // 0x588711E9: push ebx
        __asm _emit 0x53
        // 0x588711EA: push esi
        __asm _emit 0x56
        // 0x588711EB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588711ED: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588711F2: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588711F4: jmp 0x588711f8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588711F6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588711F8: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588711FC: mov ax, word ptr [esp + 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58871201: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x58871203: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58871206: mov byte ptr [esp + 0x34], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5887120A: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5887120E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58871210: je 0x58871218
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58871212: push edi
        __asm _emit 0x57
        // 0x58871213: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871218: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5887121B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5887121D: je 0x58871225
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887121F: push edi
        __asm _emit 0x57
        // 0x58871220: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58871225: add dword ptr [esp + 0x48], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5887122A: add ebp, 0xb
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0B
        // 0x5887122D: sub dword ptr [esp + 0x44], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        // 0x58871232: jne 0x588711b0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58871238: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5887123C: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871241: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58871244: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871249: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5887124C: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58871250: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871255: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58871259: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887125E: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58871262: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871267: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5887126B: mov dword ptr [esi + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x28
        // 0x5887126E: mov dword ptr [esi + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x58
        // 0x58871271: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58871273: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58871277: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887127E: pop ecx
        __asm _emit 0x59
        // 0x5887127F: pop edi
        __asm _emit 0x5F
        // 0x58871280: pop esi
        __asm _emit 0x5E
        // 0x58871281: pop ebp
        __asm _emit 0x5D
        // 0x58871282: pop ebx
        __asm _emit 0x5B
        // 0x58871283: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x58871286: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
