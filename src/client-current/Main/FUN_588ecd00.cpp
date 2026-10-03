// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588ECD00 .. +0x19C bytes.
extern "C" __declspec(naked) void FUN_588ecd00() {
    __asm {
        // 0x588ECD00: push esi
        __asm _emit 0x56
        // 0x588ECD01: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588ECD03: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588ECD07: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x588ECD09: je 0x588ece96
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECD0F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588ECD13: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECD18: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588ECD1B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECD20: push edi
        __asm _emit 0x57
        // 0x588ECD21: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588ECD24: je 0x588ecd3b
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588ECD26: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588ECD2A: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588ECD2D: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECD32: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588ECD35: jne 0x588ece70
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECD3B: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588ECD3E: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588ECD41: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588ECD43: jne 0x588ecd4d
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588ECD45: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588ECD48: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588ECD4B: je 0x588ecdcc
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x588ECD4D: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588ECD4F: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588ECD52: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588ECD55: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x588ECD58: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x588ECD5B: ja 0x588ecd82
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x588ECD5D: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588ECD60: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588ECD63: ja 0x588ecd79
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x588ECD65: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ECD67: jge 0x588ecd6e
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588ECD69: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x588ECD6C: jmp 0x588ecd8d
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588ECD6E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588ECD70: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ECD72: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x588ECD75: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588ECD77: jmp 0x588ecd8d
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588ECD79: cdq
        __asm _emit 0x99
        // 0x588ECD7A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588ECD7C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588ECD7E: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x588ECD80: jmp 0x588ecd8d
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588ECD82: cdq
        __asm _emit 0x99
        // 0x588ECD83: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588ECD86: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588ECD88: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588ECD8A: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x588ECD8D: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x588ECD90: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x588ECD93: ja 0x588ecdb8
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x588ECD95: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x588ECD98: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588ECD9B: ja 0x588ecdaf
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x588ECD9D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588ECD9F: jge 0x588ecda6
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588ECDA1: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588ECDA4: jmp 0x588ecdc3
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588ECDA6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588ECDA8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588ECDAA: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x588ECDAD: jmp 0x588ecdc3
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588ECDAF: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588ECDB1: cdq
        __asm _emit 0x99
        // 0x588ECDB2: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588ECDB4: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588ECDB6: jmp 0x588ecdc3
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588ECDB8: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588ECDBA: cdq
        __asm _emit 0x99
        // 0x588ECDBB: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588ECDBE: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588ECDC0: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588ECDC3: push eax
        __asm _emit 0x50
        // 0x588ECDC4: push edi
        __asm _emit 0x57
        // 0x588ECDC5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588ECDC7: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588ECDCC: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588ECDCF: cmp eax, dword ptr [esi + 0x50]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588ECDD2: jne 0x588ece70
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECDD8: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588ECDDB: cmp ecx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588ECDDE: jne 0x588ece70
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECDE4: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588ECDE8: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECDED: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588ECDF0: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECDF5: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588ECDF8: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588ECDFC: jne 0x588ece19
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x588ECDFE: mov eax, 0xe2ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECE03: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588ECE06: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECE0B: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588ECE0E: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588ECE12: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588ECE17: jmp 0x588ece70
        __asm _emit 0xEB
        __asm _emit 0x57
        // 0x588ECE19: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588ECE1C: mov ecx, 0x400
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECE21: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588ECE24: jne 0x588ece70
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x588ECE26: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588ECE2A: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECE2F: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588ECE32: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECE37: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x588ECE3A: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588ECE3E: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECE43: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588ECE47: mov eax, 0xfffb
        __asm _emit 0xB8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECE4C: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588ECE50: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ECE55: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588ECE59: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECE5F: cmp dword ptr [edx + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x588ECE63: jne 0x588ece70
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588ECE65: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ECE6B: call 0x58889020
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588ECE70: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588ECE74: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588ECE77: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588ECE79: je 0x588ece95
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588ECE7B: jmp 0x588ece80
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588ECE7D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588ECE80: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588ECE83: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588ECE85: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588ECE88: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588ECE8B: je 0x588ece98
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588ECE8D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588ECE8F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588ECE91: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588ECE93: jne 0x588ece80
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588ECE95: pop edi
        __asm _emit 0x5F
        // 0x588ECE96: pop esi
        __asm _emit 0x5E
        // 0x588ECE97: ret
        __asm _emit 0xC3
        // 0x588ECE98: pop edi
        __asm _emit 0x5F
        // 0x588ECE99: pop esi
        __asm _emit 0x5E
        // 0x588ECE9A: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
