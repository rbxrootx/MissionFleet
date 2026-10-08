// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 441 bytes in 1 exact ranges.
// Source symbol alias: FUN_5877fc60.

// Ghidra body range 0x5877FC60..0x5877FE19; 441 mapped bytes.
extern "C" __declspec(naked) void FUN_5877fc60_segment_00() {
    __asm {
        // 0x5877FC60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5877FC62: push 0x5897f5a9
        __asm _emit 0x68
        __asm _emit 0xA9
        __asm _emit 0xF5
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5877FC67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FC6D: push eax
        __asm _emit 0x50
        // 0x5877FC6E: push ecx
        __asm _emit 0x51
        // 0x5877FC6F: push ebx
        __asm _emit 0x53
        // 0x5877FC70: push ebp
        __asm _emit 0x55
        // 0x5877FC71: push esi
        __asm _emit 0x56
        // 0x5877FC72: push edi
        __asm _emit 0x57
        // 0x5877FC73: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877FC78: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5877FC7A: push eax
        __asm _emit 0x50
        // 0x5877FC7B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877FC7F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FC85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877FC87: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877FC8B: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877FC8F: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5877FC93: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5877FC97: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5877FC99: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5877FC9B: push ebx
        __asm _emit 0x53
        // 0x5877FC9C: push ebx
        __asm _emit 0x53
        // 0x5877FC9D: push eax
        __asm _emit 0x50
        // 0x5877FC9E: push ecx
        __asm _emit 0x51
        // 0x5877FC9F: push edx
        __asm _emit 0x52
        // 0x5877FCA0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877FCA2: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x34
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877FCA7: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877FCAB: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5877FCAF: mov dword ptr [esi], 0x58996a08
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877FCB5: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5877FCB8: mov byte ptr [esi + 0x74], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x5877FCBB: lea ebp, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FCC1: mov dword ptr [esp + 0x2c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FCC9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FCD0: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5877FCD2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xCF
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5877FCD7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5877FCD9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877FCDC: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877FCE0: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5877FCE5: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5877FCE7: je 0x5877fd0d
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5877FCE9: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877FCED: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5877FCF1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5877FCF3: push ebx
        __asm _emit 0x53
        // 0x5877FCF4: push ebx
        __asm _emit 0x53
        // 0x5877FCF5: push ecx
        __asm _emit 0x51
        // 0x5877FCF6: push edx
        __asm _emit 0x52
        // 0x5877FCF7: push esi
        __asm _emit 0x56
        // 0x5877FCF8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5877FCFA: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877FCFF: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877FD05: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5877FD08: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x5877FD0B: jmp 0x5877fd0f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877FD0D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5877FD0F: mov eax, 0xdfff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FD14: mov dword ptr [ebp - 8], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF8
        // 0x5877FD17: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5877FD1B: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5877FD1D: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877FD21: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xCF
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5877FD26: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5877FD28: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877FD2B: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877FD2F: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5877FD34: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5877FD36: je 0x5877fd5c
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5877FD38: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877FD3C: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5877FD40: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5877FD42: push ebx
        __asm _emit 0x53
        // 0x5877FD43: push ebx
        __asm _emit 0x53
        // 0x5877FD44: push ecx
        __asm _emit 0x51
        // 0x5877FD45: push edx
        __asm _emit 0x52
        // 0x5877FD46: push esi
        __asm _emit 0x56
        // 0x5877FD47: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5877FD49: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x34
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877FD4E: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877FD54: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5877FD57: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x5877FD5A: jmp 0x5877fd5e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877FD5C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5877FD5E: mov dword ptr [ebp], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x5877FD61: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5877FD64: sub dword ptr [esp + 0x2c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x5877FD69: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5877FD6D: jne 0x5877fcd0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877FD73: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FD79: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877FD7E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x2F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877FD83: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FD89: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FD8E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x2F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877FD93: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FD99: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877FD9E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x2F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877FDA3: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FDA9: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FDAE: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x2F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877FDB3: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5877FDB7: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x5877FDB9: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5877FDBC: mov byte ptr [esi + 0x60], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x5877FDBF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xCE
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5877FDC4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877FDC7: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877FDCB: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5877FDD0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5877FDD2: je 0x5877fdde
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5877FDD4: push ebx
        __asm _emit 0x53
        // 0x5877FDD5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877FDD7: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877FDDC: jmp 0x5877fde0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877FDDE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877FDE0: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FDE6: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x5877FDE9: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FDEE: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5877FDF2: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FDF7: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5877FDFB: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x5877FDFE: mov byte ptr [esi + 0x60], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x5877FE01: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5877FE03: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877FE07: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877FE0E: pop ecx
        __asm _emit 0x59
        // 0x5877FE0F: pop edi
        __asm _emit 0x5F
        // 0x5877FE10: pop esi
        __asm _emit 0x5E
        // 0x5877FE11: pop ebp
        __asm _emit 0x5D
        // 0x5877FE12: pop ebx
        __asm _emit 0x5B
        // 0x5877FE13: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5877FE16: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
