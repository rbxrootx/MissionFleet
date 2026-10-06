// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D9C40 .. +0xD2 bytes.
// Source symbol alias: FUN_588d9c40.
extern "C" __declspec(naked) void FUN_588d9c40() {
    __asm {
        // 0x588D9C40: mov eax, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9C46: push ebx
        __asm _emit 0x53
        // 0x588D9C47: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588D9C4B: push ebp
        __asm _emit 0x55
        // 0x588D9C4C: push esi
        __asm _emit 0x56
        // 0x588D9C4D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D9C4F: test byte ptr [eax + 0xa], 7
        __asm _emit 0xF6
        __asm _emit 0x40
        __asm _emit 0x0A
        __asm _emit 0x07
        // 0x588D9C53: push edi
        __asm _emit 0x57
        // 0x588D9C54: jbe 0x588d9c91
        __asm _emit 0x76
        __asm _emit 0x3B
        // 0x588D9C56: and bl, 1
        __asm _emit 0x80
        __asm _emit 0xE3
        __asm _emit 0x01
        // 0x588D9C59: movzx di, bl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xFB
        // 0x588D9C5D: lea esi, [ecx + 0x60dc]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xDC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9C63: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588D9C65: mov bx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588D9C69: mov ebp, 0xfffe
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9C6E: and bx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xDD
        // 0x588D9C71: or bx, di
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xDF
        // 0x588D9C74: mov word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588D9C78: mov eax, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9C7E: movzx eax, word ptr [eax + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0A
        // 0x588D9C82: inc edx
        __asm _emit 0x42
        // 0x588D9C83: and eax, 7
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x07
        // 0x588D9C86: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D9C89: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588D9C8B: jb 0x588d9c63
        __asm _emit 0x72
        __asm _emit 0xD6
        // 0x588D9C8D: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D9C91: mov eax, dword ptr [ecx + 0x1470]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9C97: mov dl, bl
        __asm _emit 0x8A
        __asm _emit 0xD3
        // 0x588D9C99: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x588D9C9C: movzx si, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xF2
        // 0x588D9CA0: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588D9CA4: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9CA9: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x588D9CAC: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD6
        // 0x588D9CAF: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588D9CB3: mov eax, dword ptr [ecx + 0x1474]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9CB9: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588D9CBD: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x588D9CC0: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD6
        // 0x588D9CC3: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588D9CC7: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x588D9CCA: jne 0x588d9cd6
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588D9CCC: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D9CD1: cmp dword ptr [eax + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588D9CD4: je 0x588d9d0b
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588D9CD6: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D9CD8: cmp dword ptr [ecx + 0x141c], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9CDE: jle 0x588d9d0b
        __asm _emit 0x7E
        __asm _emit 0x2B
        // 0x588D9CE0: lea edi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9CE6: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588D9CE8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D9CEA: je 0x588d9cff
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588D9CEC: mov bx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588D9CF0: mov ebp, 0xfffe
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9CF5: and bx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xDD
        // 0x588D9CF8: or bx, si
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xDE
        // 0x588D9CFB: mov word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588D9CFF: inc edx
        __asm _emit 0x42
        // 0x588D9D00: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D9D03: cmp edx, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D9D09: jl 0x588d9ce6
        __asm _emit 0x7C
        __asm _emit 0xDB
        // 0x588D9D0B: pop edi
        __asm _emit 0x5F
        // 0x588D9D0C: pop esi
        __asm _emit 0x5E
        // 0x588D9D0D: pop ebp
        __asm _emit 0x5D
        // 0x588D9D0E: pop ebx
        __asm _emit 0x5B
        // 0x588D9D0F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
