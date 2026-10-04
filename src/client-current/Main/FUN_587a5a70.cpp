// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra indexed extent: 0x587A5A70 .. +0x707 bytes.
// The mapped shared epilogue extends the callable body through +0x71C;
// four INT3 alignment bytes before the next function are excluded.
// Source symbol alias: FUN_587a5a70.
extern "C" __declspec(naked) void FUN_587a5a70() {
    __asm {
        // 0x587A5A70: push ecx
        __asm _emit 0x51
        // 0x587A5A71: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A5A75: push ebx
        __asm _emit 0x53
        // 0x587A5A76: push ebp
        __asm _emit 0x55
        // 0x587A5A77: push esi
        __asm _emit 0x56
        // 0x587A5A78: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587A5A7A: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587A5A7C: push edi
        __asm _emit 0x57
        // 0x587A5A7D: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A5A81: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587A5A84: je 0x587a6025
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5A8A: cmp edx, 7
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x587A5A8D: je 0x587a6025
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5A93: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587A5A96: je 0x587a5e1a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5A9C: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587A5A9F: je 0x587a5e1a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5AA5: cmp edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x14
        // 0x587A5AA8: jne 0x587a5c43
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5AAE: mov edx, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5AB4: cmp edx, 0x40000000
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A5ABA: jne 0x587a5b10
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x587A5ABC: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5AC1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587A5AC4: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A5AC6: cmp dword ptr [edx + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5ACC: jle 0x587a5aff
        __asm _emit 0x7E
        __asm _emit 0x31
        // 0x587A5ACE: mov al, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5AD2: lea edi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x587A5AD5: cmp byte ptr [edx + esi + 0x1fc], al
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5ADC: jne 0x587a5aea
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A5ADE: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587A5AE0: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587A5AE2: je 0x587a5aea
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A5AE4: mov dword ptr [edx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5AEA: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5AF0: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587A5AF3: inc esi
        __asm _emit 0x46
        // 0x587A5AF4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A5AF7: cmp esi, dword ptr [edx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5AFD: jl 0x587a5ad5
        __asm _emit 0x7C
        __asm _emit 0xD6
        // 0x587A5AFF: pop edi
        __asm _emit 0x5F
        // 0x587A5B00: pop esi
        __asm _emit 0x5E
        // 0x587A5B01: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A5B04: pop ebp
        __asm _emit 0x5D
        // 0x587A5B05: mov dword ptr [ecx + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5B0B: pop ebx
        __asm _emit 0x5B
        // 0x587A5B0C: pop ecx
        __asm _emit 0x59
        // 0x587A5B0D: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A5B10: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x587A5B12: jne 0x587a6181
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5B18: movzx edx, word ptr [ecx + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5B1F: mov al, dl
        __asm _emit 0x8A
        __asm _emit 0xC2
        // 0x587A5B21: and al, 0x30
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A5B23: cmp al, 0x30
        __asm _emit 0x3C
        __asm _emit 0x30
        // 0x587A5B25: jne 0x587a5b7a
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x587A5B27: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5B2D: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587A5B30: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A5B32: cmp dword ptr [edx + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5B38: jle 0x587a6181
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5B3E: mov al, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5B42: lea edi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x587A5B45: cmp byte ptr [edx + esi + 0x1fc], al
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5B4C: jne 0x587a5b5a
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A5B4E: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587A5B50: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587A5B52: je 0x587a5b5a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A5B54: mov dword ptr [ecx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5B5A: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5B60: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A5B63: inc esi
        __asm _emit 0x46
        // 0x587A5B64: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A5B67: cmp esi, dword ptr [edx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5B6D: jl 0x587a5b45
        __asm _emit 0x7C
        __asm _emit 0xD6
        // 0x587A5B6F: pop edi
        __asm _emit 0x5F
        // 0x587A5B70: pop esi
        __asm _emit 0x5E
        // 0x587A5B71: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A5B74: pop ebp
        __asm _emit 0x5D
        // 0x587A5B75: pop ebx
        __asm _emit 0x5B
        // 0x587A5B76: pop ecx
        __asm _emit 0x59
        // 0x587A5B77: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A5B7A: test dl, 0x10
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x587A5B7D: je 0x587a5bde
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x587A5B7F: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5B85: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587A5B88: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A5B8A: cmp dword ptr [edx + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5B90: jle 0x587a6181
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xEB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5B96: mov al, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5B9A: lea edi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x587A5B9D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587A5BA0: cmp byte ptr [edx + esi + 0x21c], bl
        __asm _emit 0x38
        __asm _emit 0x9C
        __asm _emit 0x32
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5BA7: jne 0x587a5bbe
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x587A5BA9: cmp byte ptr [edx + esi + 0x1fc], al
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5BB0: jne 0x587a5bbe
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A5BB2: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587A5BB4: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587A5BB6: je 0x587a5bbe
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A5BB8: mov dword ptr [ecx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5BBE: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5BC4: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A5BC7: inc esi
        __asm _emit 0x46
        // 0x587A5BC8: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A5BCB: cmp esi, dword ptr [edx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5BD1: jl 0x587a5ba0
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x587A5BD3: pop edi
        __asm _emit 0x5F
        // 0x587A5BD4: pop esi
        __asm _emit 0x5E
        // 0x587A5BD5: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A5BD8: pop ebp
        __asm _emit 0x5D
        // 0x587A5BD9: pop ebx
        __asm _emit 0x5B
        // 0x587A5BDA: pop ecx
        __asm _emit 0x59
        // 0x587A5BDB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A5BDE: test dl, 0x20
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x20
        // 0x587A5BE1: je 0x587a6181
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5BE7: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5BED: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587A5BF0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A5BF2: cmp dword ptr [edx + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5BF8: jle 0x587a6181
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5BFE: mov al, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5C02: lea edi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x587A5C05: cmp byte ptr [edx + esi + 0x21c], bl
        __asm _emit 0x38
        __asm _emit 0x9C
        __asm _emit 0x32
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5C0C: je 0x587a5c23
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587A5C0E: cmp byte ptr [edx + esi + 0x1fc], al
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5C15: jne 0x587a5c23
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A5C17: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587A5C19: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587A5C1B: je 0x587a5c23
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A5C1D: mov dword ptr [ecx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5C23: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5C29: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A5C2C: inc esi
        __asm _emit 0x46
        // 0x587A5C2D: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A5C30: cmp esi, dword ptr [edx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5C36: jl 0x587a5c05
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x587A5C38: pop edi
        __asm _emit 0x5F
        // 0x587A5C39: pop esi
        __asm _emit 0x5E
        // 0x587A5C3A: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A5C3D: pop ebp
        __asm _emit 0x5D
        // 0x587A5C3E: pop ebx
        __asm _emit 0x5B
        // 0x587A5C3F: pop ecx
        __asm _emit 0x59
        // 0x587A5C40: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A5C43: cmp edx, 0x15
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x15
        // 0x587A5C46: jne 0x587a5d83
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5C4C: movzx edx, word ptr [ecx + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5C53: mov al, dl
        __asm _emit 0x8A
        __asm _emit 0xC2
        // 0x587A5C55: and al, 0x30
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A5C57: cmp al, 0x30
        __asm _emit 0x3C
        __asm _emit 0x30
        // 0x587A5C59: jne 0x587a5cb5
        __asm _emit 0x75
        __asm _emit 0x5A
        // 0x587A5C5B: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5C61: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587A5C64: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A5C66: cmp dword ptr [edx + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5C6C: jle 0x587a6181
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x0F
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5C72: mov al, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5C76: lea edi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x587A5C79: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5C80: cmp byte ptr [edx + esi + 0x1fc], al
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5C87: jne 0x587a5c95
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A5C89: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587A5C8B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587A5C8D: je 0x587a5c95
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A5C8F: mov dword ptr [ecx + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5C95: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5C9B: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A5C9E: inc esi
        __asm _emit 0x46
        // 0x587A5C9F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A5CA2: cmp esi, dword ptr [edx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5CA8: jl 0x587a5c80
        __asm _emit 0x7C
        __asm _emit 0xD6
        // 0x587A5CAA: pop edi
        __asm _emit 0x5F
        // 0x587A5CAB: pop esi
        __asm _emit 0x5E
        // 0x587A5CAC: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A5CAF: pop ebp
        __asm _emit 0x5D
        // 0x587A5CB0: pop ebx
        __asm _emit 0x5B
        // 0x587A5CB1: pop ecx
        __asm _emit 0x59
        // 0x587A5CB2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A5CB5: test dl, 0x10
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x587A5CB8: je 0x587a5d1e
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x587A5CBA: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5CC0: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587A5CC3: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A5CC5: cmp dword ptr [edx + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5CCB: jle 0x587a6181
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5CD1: mov al, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5CD5: lea edi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x587A5CD8: jmp 0x587a5ce0
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587A5CDA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5CE0: cmp byte ptr [edx + esi + 0x21c], bl
        __asm _emit 0x38
        __asm _emit 0x9C
        __asm _emit 0x32
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5CE7: jne 0x587a5cfe
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x587A5CE9: cmp byte ptr [edx + esi + 0x1fc], al
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5CF0: jne 0x587a5cfe
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A5CF2: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587A5CF4: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587A5CF6: je 0x587a5cfe
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A5CF8: mov dword ptr [ecx + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5CFE: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5D04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A5D07: inc esi
        __asm _emit 0x46
        // 0x587A5D08: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A5D0B: cmp esi, dword ptr [edx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5D11: jl 0x587a5ce0
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x587A5D13: pop edi
        __asm _emit 0x5F
        // 0x587A5D14: pop esi
        __asm _emit 0x5E
        // 0x587A5D15: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A5D18: pop ebp
        __asm _emit 0x5D
        // 0x587A5D19: pop ebx
        __asm _emit 0x5B
        // 0x587A5D1A: pop ecx
        __asm _emit 0x59
        // 0x587A5D1B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A5D1E: test dl, 0x20
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x20
        // 0x587A5D21: je 0x587a6181
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5A
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5D27: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5D2D: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587A5D30: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A5D32: cmp dword ptr [edx + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5D38: jle 0x587a6181
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5D3E: mov al, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5D42: lea edi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x587A5D45: cmp byte ptr [edx + esi + 0x21c], bl
        __asm _emit 0x38
        __asm _emit 0x9C
        __asm _emit 0x32
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5D4C: je 0x587a5d63
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587A5D4E: cmp byte ptr [edx + esi + 0x1fc], al
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5D55: jne 0x587a5d63
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A5D57: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587A5D59: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587A5D5B: je 0x587a5d63
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A5D5D: mov dword ptr [ecx + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5D63: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5D69: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A5D6C: inc esi
        __asm _emit 0x46
        // 0x587A5D6D: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A5D70: cmp esi, dword ptr [edx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5D76: jl 0x587a5d45
        __asm _emit 0x7C
        __asm _emit 0xCD
        // 0x587A5D78: pop edi
        __asm _emit 0x5F
        // 0x587A5D79: pop esi
        __asm _emit 0x5E
        // 0x587A5D7A: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A5D7D: pop ebp
        __asm _emit 0x5D
        // 0x587A5D7E: pop ebx
        __asm _emit 0x5B
        // 0x587A5D7F: pop ecx
        __asm _emit 0x59
        // 0x587A5D80: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A5D83: cmp edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x587A5D86: je 0x587a5d91
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587A5D88: cmp edx, 0xb
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587A5D8B: jne 0x587a6181
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5D91: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5D96: cmp edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x587A5D99: je 0x587a5da3
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587A5D9B: cmp edx, 0xb
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587A5D9E: jne 0x587a5da3
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587A5DA0: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x587A5DA3: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5DA9: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587A5DAC: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A5DAE: cmp dword ptr [edx + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5DB4: jle 0x587a616d
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5DBA: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587A5DBC: mov cl, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5DC0: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x587A5DC3: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A5DC8: jmp 0x587a5dd0
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587A5DCA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5DD0: cmp byte ptr [edx + esi + 0x1fc], cl
        __asm _emit 0x38
        __asm _emit 0x8C
        __asm _emit 0x32
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5DD7: jne 0x587a5e01
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x587A5DD9: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A5DDB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A5DDD: je 0x587a5e01
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587A5DDF: cmp byte ptr [edx + esi + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x32
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5DE7: mov dword ptr [eax + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5DED: je 0x587a5dfb
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587A5DEF: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x587A5DF1: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x587A5DF3: mov dword ptr [eax + 0x124], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5DF9: jmp 0x587a5e01
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587A5DFB: mov dword ptr [eax + 0x124], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5E01: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5E06: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587A5E09: inc esi
        __asm _emit 0x46
        // 0x587A5E0A: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A5E0D: cmp esi, dword ptr [edx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5E13: jl 0x587a5dd0
        __asm _emit 0x7C
        __asm _emit 0xBB
        // 0x587A5E15: jmp 0x587a616d
        __asm _emit 0xE9
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5E1A: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x587A5E1D: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587A5E20: jne 0x587a5e27
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587A5E22: lea ebp, [edx - 3]
        __asm _emit 0x8D
        __asm _emit 0x6A
        __asm _emit 0xFD
        // 0x587A5E25: jmp 0x587a5e2f
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587A5E27: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587A5E2A: jne 0x587a5e2f
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587A5E2C: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x587A5E2F: movzx eax, word ptr [ecx + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5E36: mov cl, al
        __asm _emit 0x8A
        __asm _emit 0xC8
        // 0x587A5E38: and cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x30
        // 0x587A5E3B: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x587A5E3E: jne 0x587a5edc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5E44: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5E4A: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A5E4D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A5E4F: cmp dword ptr [eax + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5E55: jle 0x587a6006
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5E5B: mov cl, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5E5F: mov esi, 0xb40
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5E64: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A5E69: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5E70: mov edx, dword ptr [esi + eax + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5E77: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587A5E79: je 0x587a5ea8
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587A5E7B: movzx edx, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x12
        // 0x587A5E7E: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587A5E82: jne 0x587a5ea8
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x587A5E84: cmp byte ptr [eax + edi + 0x1fc], cl
        __asm _emit 0x38
        __asm _emit 0x8C
        __asm _emit 0x38
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5E8B: jne 0x587a5ea8
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587A5E8D: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A5E91: mov eax, dword ptr [eax + esi - 0xb38]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0xC8
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A5E98: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A5E9A: je 0x587a5ea8
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587A5E9C: mov dword ptr [eax + 0x128], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5EA2: mov dword ptr [eax + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5EA8: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5EAE: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A5EB1: inc edi
        __asm _emit 0x47
        // 0x587A5EB2: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587A5EB5: cmp edi, dword ptr [eax + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB8
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5EBB: jl 0x587a5e70
        __asm _emit 0x7C
        __asm _emit 0xB3
        // 0x587A5EBD: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A5EC1: mov dl, byte ptr [ecx + 0x92]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5EC7: or dl, 2
        __asm _emit 0x80
        __asm _emit 0xCA
        __asm _emit 0x02
        // 0x587A5ECA: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x587A5ECE: movzx ebp, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xE8
        // 0x587A5ED1: pop edi
        __asm _emit 0x5F
        // 0x587A5ED2: pop esi
        __asm _emit 0x5E
        // 0x587A5ED3: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A5ED6: pop ebp
        __asm _emit 0x5D
        // 0x587A5ED7: pop ebx
        __asm _emit 0x5B
        // 0x587A5ED8: pop ecx
        __asm _emit 0x59
        // 0x587A5ED9: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A5EDC: test al, 0x10
        __asm _emit 0xA8
        __asm _emit 0x10
        // 0x587A5EDE: je 0x587a5f85
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5EE4: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5EE9: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A5EEC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A5EEE: cmp dword ptr [eax + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5EF4: jle 0x587a6006
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5EFA: mov cl, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5EFE: mov edi, 0xb40
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5F03: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A5F08: jmp 0x587a5f10
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587A5F0A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5F10: mov esi, dword ptr [edi + eax + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x07
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5F17: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A5F19: je 0x587a5f52
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x587A5F1B: movzx esi, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x36
        // 0x587A5F1E: cmp si, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x05
        // 0x587A5F22: jne 0x587a5f52
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x587A5F24: cmp byte ptr [eax + edx + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x10
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5F2C: jne 0x587a5f52
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x587A5F2E: cmp byte ptr [eax + edx + 0x1fc], cl
        __asm _emit 0x38
        __asm _emit 0x8C
        __asm _emit 0x10
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5F35: jne 0x587a5f52
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587A5F37: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A5F3B: mov eax, dword ptr [edi + eax - 0xb38]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0xC8
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A5F42: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A5F44: je 0x587a5f52
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587A5F46: mov dword ptr [eax + 0x128], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5F4C: mov dword ptr [eax + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5F52: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5F57: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A5F5A: inc edx
        __asm _emit 0x42
        // 0x587A5F5B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A5F5E: cmp edx, dword ptr [eax + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5F64: jl 0x587a5f10
        __asm _emit 0x7C
        __asm _emit 0xAA
        // 0x587A5F66: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A5F6A: mov dl, byte ptr [ecx + 0x92]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5F70: or dl, 2
        __asm _emit 0x80
        __asm _emit 0xCA
        __asm _emit 0x02
        // 0x587A5F73: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x587A5F77: movzx ebp, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xE8
        // 0x587A5F7A: pop edi
        __asm _emit 0x5F
        // 0x587A5F7B: pop esi
        __asm _emit 0x5E
        // 0x587A5F7C: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A5F7F: pop ebp
        __asm _emit 0x5D
        // 0x587A5F80: pop ebx
        __asm _emit 0x5B
        // 0x587A5F81: pop ecx
        __asm _emit 0x59
        // 0x587A5F82: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A5F85: test al, 0x20
        __asm _emit 0xA8
        __asm _emit 0x20
        // 0x587A5F87: je 0x587a6006
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x587A5F89: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5F8F: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A5F92: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A5F94: cmp dword ptr [eax + 0x141c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5F9A: jle 0x587a6006
        __asm _emit 0x7E
        __asm _emit 0x6A
        // 0x587A5F9C: mov cl, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A5FA0: mov edi, 0xb40
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5FA5: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A5FAA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5FB0: mov esi, dword ptr [edi + eax + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x07
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5FB7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A5FB9: je 0x587a5ff2
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x587A5FBB: movzx esi, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x36
        // 0x587A5FBE: cmp si, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x05
        // 0x587A5FC2: jne 0x587a5ff2
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x587A5FC4: cmp byte ptr [eax + edx + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x10
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5FCC: je 0x587a5ff2
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587A5FCE: cmp byte ptr [eax + edx + 0x1fc], cl
        __asm _emit 0x38
        __asm _emit 0x8C
        __asm _emit 0x10
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5FD5: jne 0x587a5ff2
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587A5FD7: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A5FDB: mov eax, dword ptr [edi + eax - 0xb38]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0xC8
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A5FE2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A5FE4: je 0x587a5ff2
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587A5FE6: mov dword ptr [eax + 0x128], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5FEC: mov dword ptr [eax + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5FF2: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5FF7: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A5FFA: inc edx
        __asm _emit 0x42
        // 0x587A5FFB: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A5FFE: cmp edx, dword ptr [eax + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6004: jl 0x587a5fb0
        __asm _emit 0x7C
        __asm _emit 0xAA
        // 0x587A6006: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A600A: mov dl, byte ptr [ecx + 0x92]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6010: or dl, 2
        __asm _emit 0x80
        __asm _emit 0xCA
        __asm _emit 0x02
        // 0x587A6013: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x587A6017: movzx ebp, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xE8
        // 0x587A601A: pop edi
        __asm _emit 0x5F
        // 0x587A601B: pop esi
        __asm _emit 0x5E
        // 0x587A601C: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A601F: pop ebp
        __asm _emit 0x5D
        // 0x587A6020: pop ebx
        __asm _emit 0x5B
        // 0x587A6021: pop ecx
        __asm _emit 0x59
        // 0x587A6022: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A6025: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A602A: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587A602D: je 0x587a6037
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587A602F: cmp edx, 7
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x587A6032: jne 0x587a6037
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587A6034: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x587A6037: movzx eax, word ptr [ecx + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A603E: cmp ax, 0x30
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x30
        // 0x587A6042: jne 0x587a60a5
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x587A6044: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A604A: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A604D: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A604F: cmp dword ptr [eax + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6055: jle 0x587a616d
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A605B: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A605F: mov cl, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A6063: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x587A6066: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A606B: jmp 0x587a6070
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587A606D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587A6070: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587A6072: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587A6074: je 0x587a608b
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587A6076: cmp byte ptr [eax + esi + 0x1fc], cl
        __asm _emit 0x38
        __asm _emit 0x8C
        __asm _emit 0x30
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A607D: jne 0x587a608b
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A607F: mov dword ptr [edx + 0x124], ebp
        __asm _emit 0x89
        __asm _emit 0xAA
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6085: mov dword ptr [edx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A608B: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A6091: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A6094: inc esi
        __asm _emit 0x46
        // 0x587A6095: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A6098: cmp esi, dword ptr [eax + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A609E: jl 0x587a6070
        __asm _emit 0x7C
        __asm _emit 0xD0
        // 0x587A60A0: jmp 0x587a616d
        __asm _emit 0xE9
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A60A5: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x587A60A9: jne 0x587a610b
        __asm _emit 0x75
        __asm _emit 0x60
        // 0x587A60AB: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A60B0: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A60B3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A60B5: cmp dword ptr [eax + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A60BB: jle 0x587a616d
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A60C1: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587A60C3: mov cl, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A60C7: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x587A60CA: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A60CF: nop
        __asm _emit 0x90
        // 0x587A60D0: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x587A60D2: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A60D4: je 0x587a60f5
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587A60D6: cmp byte ptr [eax + edx + 0x1fc], cl
        __asm _emit 0x38
        __asm _emit 0x8C
        __asm _emit 0x10
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A60DD: jne 0x587a60f5
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587A60DF: cmp byte ptr [eax + edx + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x10
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A60E7: jne 0x587a60f5
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A60E9: mov dword ptr [esi + 0x124], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A60EF: mov dword ptr [esi + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A60F5: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A60FA: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A60FD: inc edx
        __asm _emit 0x42
        // 0x587A60FE: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A6101: cmp edx, dword ptr [eax + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6107: jl 0x587a60d0
        __asm _emit 0x7C
        __asm _emit 0xC7
        // 0x587A6109: jmp 0x587a616d
        __asm _emit 0xEB
        __asm _emit 0x62
        // 0x587A610B: cmp ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x587A610F: jne 0x587a616d
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x587A6111: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A6117: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A611A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A611C: cmp dword ptr [eax + 0x141c], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6122: jle 0x587a616d
        __asm _emit 0x7E
        __asm _emit 0x49
        // 0x587A6124: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A6128: mov cl, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A612C: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x587A612F: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A6134: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x587A6136: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A6138: je 0x587a6159
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587A613A: cmp byte ptr [eax + edx + 0x1fc], cl
        __asm _emit 0x38
        __asm _emit 0x8C
        __asm _emit 0x10
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6141: jne 0x587a6159
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587A6143: cmp byte ptr [eax + edx + 0x21c], 1
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x10
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587A614B: jne 0x587a6159
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A614D: mov dword ptr [esi + 0x124], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6153: mov dword ptr [esi + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6159: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A615E: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A6161: inc edx
        __asm _emit 0x42
        // 0x587A6162: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A6165: cmp edx, dword ptr [eax + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A616B: jl 0x587a6134
        __asm _emit 0x7C
        __asm _emit 0xC7
        // 0x587A616D: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A6171: mov dl, byte ptr [ecx + 0x92]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6177: or dl, 1
        __asm _emit 0x80
        __asm _emit 0xCA
        __asm _emit 0x01
        // 0x587A617A: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x587A617E: movzx ebp, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xE8
        // 0x587A6181: pop edi
        __asm _emit 0x5F
        // 0x587A6182: pop esi
        __asm _emit 0x5E
        // 0x587A6183: mov ax, bp
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A6186: pop ebp
        __asm _emit 0x5D
        // 0x587A6187: pop ebx
        __asm _emit 0x5B
        // 0x587A6188: pop ecx
        __asm _emit 0x59
        // 0x587A6189: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
