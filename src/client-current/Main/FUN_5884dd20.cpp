// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884DD20 .. +0x243 bytes.
extern "C" __declspec(naked) void FUN_5884dd20() {
    __asm {
        // 0x5884DD20: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DD25: push esi
        __asm _emit 0x56
        // 0x5884DD26: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5884DD28: cmp dword ptr [esp + 0xc], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5884DD2C: jne 0x5884df5d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DD32: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5884DD35: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5884DD39: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5884DD3B: jne 0x5884dd81
        __asm _emit 0x75
        __asm _emit 0x44
        // 0x5884DD3D: cmp dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x5884DD42: jne 0x5884dd63
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x5884DD44: cmp byte ptr [esi + 0xd4], 3
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5884DD4B: jne 0x5884dd63
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x5884DD4D: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DD52: mov byte ptr [esi + 0xd4], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DD59: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5884DD5D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884DD5F: pop esi
        __asm _emit 0x5E
        // 0x5884DD60: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5884DD63: cmp byte ptr [esi + 0xd4], 1
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5884DD6A: jne 0x5884dd72
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5884DD6C: mov byte ptr [esi + 0xd4], dl
        __asm _emit 0x88
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DD72: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DD77: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5884DD7B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884DD7D: pop esi
        __asm _emit 0x5E
        // 0x5884DD7E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5884DD81: cmp eax, dword ptr [esi + 0xbc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DD87: jne 0x5884ddc2
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x5884DD89: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DD8F: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5884DD92: je 0x5884df5d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DD98: mov eax, dword ptr [eax*4 + 0x58a0b1e4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5884DD9F: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5884DDA2: je 0x5884df5d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DDA8: movzx ecx, byte ptr [esi + 0xdc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DDAF: push ecx
        __asm _emit 0x51
        // 0x5884DDB0: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884DDB6: push eax
        __asm _emit 0x50
        // 0x5884DDB7: call 0x587b99f0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xBC
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x5884DDBC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884DDBE: pop esi
        __asm _emit 0x5E
        // 0x5884DDBF: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5884DDC2: cmp eax, dword ptr [esi + 0xc0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DDC8: jne 0x5884de04
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x5884DDCA: mov esi, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DDD0: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5884DDD3: je 0x5884df5d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DDD9: cmp dword ptr [esi*4 + 0x58a0b1e4], -1
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB5
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x5884DDE1: je 0x5884df5d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DDE7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DDE9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DDEB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DDED: push 0x2bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DDF2: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xDC
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884DDF7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884DDF9: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xC7
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884DDFE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884DE00: pop esi
        __asm _emit 0x5E
        // 0x5884DE01: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5884DE04: cmp eax, dword ptr [esi + 0xc4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DE0A: jne 0x5884de3a
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x5884DE0C: mov esi, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DE12: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5884DE15: je 0x5884df5d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DE1B: cmp dword ptr [esi*4 + 0x58a0b1e4], -1
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB5
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x5884DE23: je 0x5884df5d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DE29: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884DE2F: call 0x587d89f0
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xAB
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5884DE34: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884DE36: pop esi
        __asm _emit 0x5E
        // 0x5884DE37: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5884DE3A: cmp eax, dword ptr [esi + 0xc8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DE40: jne 0x5884dec2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DE46: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884DE4C: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DE52: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884DE54: je 0x5884deea
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DE5A: push edi
        __asm _emit 0x57
        // 0x5884DE5B: mov edi, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DE61: movzx eax, word ptr [edi + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x02
        // 0x5884DE65: push eax
        __asm _emit 0x50
        // 0x5884DE66: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884DE68: call 0x5884dcc0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884DE6D: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5884DE6F: jne 0x5884dea8
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x5884DE71: mov cl, byte ptr [edi + 4]
        __asm _emit 0x8A
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5884DE74: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5884DE77: cmp cl, 3
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x5884DE7A: ja 0x5884dea8
        __asm _emit 0x77
        __asm _emit 0x2C
        // 0x5884DE7C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884DE7E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5884DE80: cmp dword ptr [eax*4 + 0x58a0b1e4], -1
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x5884DE88: je 0x5884de93
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5884DE8A: inc eax
        __asm _emit 0x40
        // 0x5884DE8B: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5884DE8E: jl 0x5884de80
        __asm _emit 0x7C
        __asm _emit 0xF0
        // 0x5884DE90: pop edi
        __asm _emit 0x5F
        // 0x5884DE91: jmp 0x5884deea
        __asm _emit 0xEB
        __asm _emit 0x57
        // 0x5884DE93: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5884DE96: jge 0x5884debf
        __asm _emit 0x7D
        __asm _emit 0x27
        // 0x5884DE98: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DE9E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5884DEA0: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5884DEA3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5884DEA5: pop edi
        __asm _emit 0x5F
        // 0x5884DEA6: jmp 0x5884deea
        __asm _emit 0xEB
        __asm _emit 0x42
        // 0x5884DEA8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DEAA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DEAC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DEAE: push 0x398
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DEB3: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xDC
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884DEB8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884DEBA: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x6E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884DEBF: pop edi
        __asm _emit 0x5F
        // 0x5884DEC0: jmp 0x5884deea
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x5884DEC2: cmp eax, dword ptr [esi + 0xcc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DEC8: jne 0x5884df14
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x5884DECA: movzx eax, byte ptr [esi + 0xdc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DED1: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884DED7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DED9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DEDB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DEDD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DEDF: push eax
        __asm _emit 0x50
        // 0x5884DEE0: push 0x8001f003
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x5884DEE5: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x2D
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884DEEA: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DEF0: mov dword ptr [esi + 0xdc], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884DEFA: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DF01: mov edx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DF07: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DF0E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884DF10: pop esi
        __asm _emit 0x5E
        // 0x5884DF11: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5884DF14: cmp eax, dword ptr [esi + 0xd0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DF1A: jne 0x5884df5d
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x5884DF1C: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884DF22: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DF24: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DF26: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DF28: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884DF2A: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DF2F: push 0x8001f003
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x5884DF34: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x2D
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884DF39: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DF3F: mov dword ptr [esi + 0xdc], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884DF49: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DF50: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DF56: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884DF5D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884DF5F: pop esi
        __asm _emit 0x5E
        // 0x5884DF60: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
