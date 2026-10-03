// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 1112 bytes across one range.

// Ghidra range: 0x587DEB30 .. +0x458 bytes.
extern "C" __declspec(naked) void FUN_587DEB30_segment_00() {
    __asm {
        // 0x587DEB30: push ebx
        __asm _emit 0x53
        // 0x587DEB31: push esi
        __asm _emit 0x56
        // 0x587DEB32: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587DEB34: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587DEB38: push edi
        __asm _emit 0x57
        // 0x587DEB39: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x587DEB3B: je 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3E
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEB41: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x587DEB44: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DEB48: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DEB4A: je 0x587deb71
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587DEB4C: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x587DEB4F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DEB51: je 0x587deb69
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587DEB53: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587DEB55: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DEB57: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x587DEB5A: push edi
        __asm _emit 0x57
        // 0x587DEB5B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DEB5D: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x587DEB60: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x587DEB63: je 0x587deb71
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587DEB65: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DEB67: jne 0x587deb53
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x587DEB69: pop edi
        __asm _emit 0x5F
        // 0x587DEB6A: pop esi
        __asm _emit 0x5E
        // 0x587DEB6B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587DEB6D: pop ebx
        __asm _emit 0x5B
        // 0x587DEB6E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DEB71: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587DEB74: sub eax, 0x100
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEB79: je 0x587dedaf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEB7F: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587DEB82: je 0x587ded54
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEB88: sub eax, 0xff
        __asm _emit 0x2D
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEB8D: jne 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEB93: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEB99: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DEB9B: je 0x587dec3d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEBA1: cmp dword ptr [eax + 0xcc0], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEBA8: je 0x587dec3d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEBAE: mov edx, dword ptr [eax + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x4C
        // 0x587DEBB1: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587DEBB7: je 0x587dec3d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEBBD: mov ecx, dword ptr [esi + 0xda8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEBC3: mov dword ptr [esi + 0xd14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DEBCD: call 0x588ba8e0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xBD
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587DEBD2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DEBD4: jne 0x587dec3d
        __asm _emit 0x75
        __asm _emit 0x67
        // 0x587DEBD6: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEBDC: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEBE2: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587DEBE6: mov eax, 0x7c00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEBEB: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x587DEBEE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587DEBF0: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587DEBF2: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587DEBF5: jae 0x587dec3d
        __asm _emit 0x73
        __asm _emit 0x46
        // 0x587DEBF7: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DEBFD: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587DEC00: movzx edx, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD7
        // 0x587DEC03: mov ecx, dword ptr [esi + edx*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEC0A: push ebx
        __asm _emit 0x53
        // 0x587DEC0B: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x29
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DEC10: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DEC12: jne 0x587dec34
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x587DEC14: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEC1A: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEC20: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587DEC24: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x587DEC28: inc edi
        __asm _emit 0x47
        // 0x587DEC29: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587DEC2D: cmp di, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x587DEC30: jb 0x587dec00
        __asm _emit 0x72
        __asm _emit 0xCE
        // 0x587DEC32: jmp 0x587dec3d
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x587DEC34: movzx eax, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC7
        // 0x587DEC37: mov dword ptr [esi + 0xd14], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEC3D: mov ecx, dword ptr [esi + 0x5a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEC43: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587DEC47: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x587DEC4A: je 0x587decb7
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x587DEC4C: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DEC52: mov ebx, dword ptr [esi + 0x5a4]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEC58: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587DEC5B: push edi
        __asm _emit 0x57
        // 0x587DEC5C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587DEC5E: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DEC63: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DEC65: je 0x587dec85
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587DEC67: mov ecx, dword ptr [esi + 0x5ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEC6D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DEC6F: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x29
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DEC74: mov ecx, dword ptr [esi + 0x5b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEC7A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DEC7C: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x29
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DEC81: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DEC83: jmp 0x587decac
        __asm _emit 0xEB
        __asm _emit 0x27
        // 0x587DEC85: push edi
        __asm _emit 0x57
        // 0x587DEC86: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587DEC88: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DEC8D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DEC8F: jne 0x587decb7
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x587DEC91: mov ecx, dword ptr [esi + 0x5ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEC97: push eax
        __asm _emit 0x50
        // 0x587DEC98: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x29
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DEC9D: mov ecx, dword ptr [esi + 0x5b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DECA3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DECA5: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x29
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DECAA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DECAC: mov ecx, dword ptr [esi + 0x5bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DECB2: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x29
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DECB7: mov eax, dword ptr [esi + 0x5a8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DECBD: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DECC1: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587DECC4: je 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DECCA: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DECD0: mov ebx, dword ptr [esi + 0x5a8]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DECD6: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587DECD9: push edi
        __asm _emit 0x57
        // 0x587DECDA: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587DECDC: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DECE1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DECE3: je 0x587ded15
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x587DECE5: mov ecx, dword ptr [esi + 0x5b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DECEB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DECED: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DECF2: mov ecx, dword ptr [esi + 0x5b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DECF8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DECFA: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DECFF: mov ecx, dword ptr [esi + 0x5c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED05: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DED07: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DED0C: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587DED0F: pop edi
        __asm _emit 0x5F
        // 0x587DED10: pop esi
        __asm _emit 0x5E
        // 0x587DED11: pop ebx
        __asm _emit 0x5B
        // 0x587DED12: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DED15: push edi
        __asm _emit 0x57
        // 0x587DED16: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587DED18: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DED1D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DED1F: jne 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED25: mov ecx, dword ptr [esi + 0x5b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED2B: push eax
        __asm _emit 0x50
        // 0x587DED2C: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DED31: mov ecx, dword ptr [esi + 0x5b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED37: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DED39: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DED3E: mov ecx, dword ptr [esi + 0x5c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED44: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DED46: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DED4B: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587DED4E: pop edi
        __asm _emit 0x5F
        // 0x587DED4F: pop esi
        __asm _emit 0x5E
        // 0x587DED50: pop ebx
        __asm _emit 0x5B
        // 0x587DED51: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DED54: cmp dword ptr [edi + 8], 0x11
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x08
        __asm _emit 0x11
        // 0x587DED58: jne 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED5E: mov edx, dword ptr [esi + 0xdb8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED64: mov eax, dword ptr [edx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED6A: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DED6E: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x587DED70: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587DED73: je 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED79: mov ecx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED7F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DED81: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DED86: mov ecx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED8C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DED8E: call 0x5873a540
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xB7
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DED93: mov edx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED99: mov ecx, dword ptr [edx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DED9F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DEDA1: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x28
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DEDA6: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587DEDA9: pop edi
        __asm _emit 0x5F
        // 0x587DEDAA: pop esi
        __asm _emit 0x5E
        // 0x587DEDAB: pop ebx
        __asm _emit 0x5B
        // 0x587DEDAC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DEDAF: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587DEDB2: lea eax, [edi - 0x11]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xEF
        // 0x587DEDB5: cmp eax, 0x65
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x65
        // 0x587DEDB8: ja 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xC1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEDBE: movzx eax, byte ptr [eax + 0x587defa4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0xA4
        __asm _emit 0xEF
        __asm _emit 0x7D
        __asm _emit 0x58
        // 0x587DEDC5: jmp dword ptr [eax*4 + 0x587def88]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0xEF
        __asm _emit 0x7D
        __asm _emit 0x58
        // 0x587DEDCC: mov ecx, dword ptr [0x58a2462c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x2C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DEDD2: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587DEDD6: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x587DEDD9: jne 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEDDF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DEDE1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DEDE3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DEDE5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DEDE7: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xCD
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DEDEC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DEDEE: call 0x5876b9f0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xCB
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DEDF3: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587DEDF6: pop edi
        __asm _emit 0x5F
        // 0x587DEDF7: pop esi
        __asm _emit 0x5E
        // 0x587DEDF8: pop ebx
        __asm _emit 0x5B
        // 0x587DEDF9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DEDFC: cmp dword ptr [0x58a248d8], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587DEE03: jne 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE09: mov eax, dword ptr [esi + 0xda8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE0F: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DEE13: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x587DEE17: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587DEE1A: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587DEE1D: je 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE23: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DEE25: call 0x587dad80
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DEE2A: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587DEE2D: pop edi
        __asm _emit 0x5F
        // 0x587DEE2E: pop esi
        __asm _emit 0x5E
        // 0x587DEE2F: pop ebx
        __asm _emit 0x5B
        // 0x587DEE30: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DEE33: cmp dword ptr [0x58a248d8], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587DEE3A: jne 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE40: mov edx, dword ptr [esi + 0xda8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE46: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587DEE4A: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x587DEE4E: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x587DEE50: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x587DEE52: je 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE58: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DEE5A: call 0x587dac20
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xBD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DEE5F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587DEE62: pop edi
        __asm _emit 0x5F
        // 0x587DEE63: pop esi
        __asm _emit 0x5E
        // 0x587DEE64: pop ebx
        __asm _emit 0x5B
        // 0x587DEE65: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DEE68: cmp dword ptr [esi + 0xe0c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE6F: jne 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE75: mov ecx, dword ptr [esi + 0xda8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE7B: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587DEE7F: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x587DEE82: jne 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE88: mov eax, dword ptr [esi + 0xdb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE8E: mov ecx, dword ptr [eax + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEE94: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587DEE98: shr dl, 1
        __asm _emit 0xD0
        __asm _emit 0xEA
        // 0x587DEE9A: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x587DEE9D: je 0x587def7f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEEA3: mov ecx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEEA9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DEEAB: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x27
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DEEB0: mov ecx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEEB6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DEEB8: call 0x5873a540
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xB6
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DEEBD: mov eax, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEEC3: mov ecx, dword ptr [eax + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEEC9: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x587DEECB: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x26
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DEED0: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587DEED3: pop edi
        __asm _emit 0x5F
        // 0x587DEED4: pop esi
        __asm _emit 0x5E
        // 0x587DEED5: pop ebx
        __asm _emit 0x5B
        // 0x587DEED6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DEED9: mov ecx, dword ptr [esi + 0xdcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEEDF: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587DEEE3: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x587DEEE7: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587DEEEA: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587DEEED: jne 0x587def05
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587DEEEF: mov ecx, dword ptr [esi + 0xdcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEEF5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587DEEF7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587DEEFA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587DEEFC: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587DEEFF: pop edi
        __asm _emit 0x5F
        // 0x587DEF00: pop esi
        __asm _emit 0x5E
        // 0x587DEF01: pop ebx
        __asm _emit 0x5B
        // 0x587DEF02: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DEF05: mov eax, dword ptr [esi + 0xdcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEF0B: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DEF0F: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x587DEF13: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587DEF16: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x587DEF19: jne 0x587def7f
        __asm _emit 0x75
        __asm _emit 0x64
        // 0x587DEF1B: mov ecx, dword ptr [esi + 0xdcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DEF21: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DEF23: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587DEF26: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DEF28: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587DEF2B: pop edi
        __asm _emit 0x5F
        // 0x587DEF2C: pop esi
        __asm _emit 0x5E
        // 0x587DEF2D: pop ebx
        __asm _emit 0x5B
        // 0x587DEF2E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DEF31: mov ecx, dword ptr [0x58a245d4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DEF37: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587DEF3B: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x587DEF3F: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587DEF42: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587DEF45: jne 0x587def5d
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587DEF47: mov ecx, dword ptr [0x58a245d4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DEF4D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587DEF4F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587DEF52: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587DEF54: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587DEF57: pop edi
        __asm _emit 0x5F
        // 0x587DEF58: pop esi
        __asm _emit 0x5E
        // 0x587DEF59: pop ebx
        __asm _emit 0x5B
        // 0x587DEF5A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587DEF5D: mov eax, dword ptr [0x58a245d4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DEF62: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DEF66: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x587DEF6A: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587DEF6D: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587DEF70: jne 0x587def7f
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587DEF72: mov ecx, dword ptr [0x58a245d4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DEF78: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DEF7A: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DEF7D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DEF7F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x587DEF82: pop edi
        __asm _emit 0x5F
        // 0x587DEF83: pop esi
        __asm _emit 0x5E
        // 0x587DEF84: pop ebx
        __asm _emit 0x5B
        // 0x587DEF85: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
