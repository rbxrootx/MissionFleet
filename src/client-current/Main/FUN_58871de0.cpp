// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58871DE0 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_58871de0() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 6C 24 10: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8D B5 F8 00 00 00: lea esi, [ebp + 0xf8]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes F6 C1 01: test cl, 1
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 74 36: je 0x58871e3a
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 68 14: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x14
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 03 E9: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xe9
        ; Exact mapped bytes 3B D5: cmp edx, ebp
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 7C 21: jl 0x58871e36
        __asm _emit 0x7c
        __asm _emit 0x21
        ; Exact mapped bytes 8B 68 1C: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x1c
        ; Exact mapped bytes 03 E9: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xe9
        ; Exact mapped bytes 3B D5: cmp edx, ebp
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 7D 18: jge 0x58871e36
        __asm _emit 0x7d
        __asm _emit 0x18
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 68 18: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x18
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 03 E9: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xe9
        ; Exact mapped bytes 3B D5: cmp edx, ebp
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 7C 09: jl 0x58871e36
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 8B 40 20: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 7C 74: jl 0x58871eaa
        __asm _emit 0x7c
        __asm _emit 0x74
        ; Exact mapped bytes 8B 6C 24 10: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 FB 20: cmp ebx, 0x20
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x20
        ; Exact mapped bytes 7C B0: jl 0x58871df3
        __asm _emit 0x7c
        __asm _emit 0xb0
        ; Exact mapped bytes 8B 74 24 18: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 BE B8 00 00 00 FF: cmp dword ptr [esi + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 74 52: je 0x58871ea2
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 A0 00 00 00: mov eax, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 8B 57 04: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x04
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 3D: jl 0x58871ea2
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 58 1C: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x1c
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7D 34: jge 0x58871ea2
        __asm _emit 0x7d
        __asm _emit 0x34
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 8B 7F 08: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7C 25: jl 0x58871ea2
        __asm _emit 0x7c
        __asm _emit 0x25
        ; Exact mapped bytes 8B 40 20: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x20
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 7D 1C: jge 0x58871ea2
        __asm _emit 0x7d
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4E 50: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 68 35 10 01 80: push 0x80011035
        __asm _emit 0x68
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        ; Exact mapped bytes E8 CE ED 0F 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xed
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6C 24 10: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 84 9D F8 00 00 00: mov eax, dword ptr [ebp + ebx*4 + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 78 60 00: cmp dword ptr [eax + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 18: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 75 88: jne 0x58871e47
        __asm _emit 0x75
        __asm _emit 0x88
        ; Exact mapped bytes 8B 40 58: mov eax, dword ptr [eax + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 78 0D 00 00: mov ecx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 29 58 07 00: call 0x588e7700
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 5E: je 0x58871f39
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 15 98 45 A2 58: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 B4 0D 00 00: mov eax, dword ptr [edx + 0xdb4]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 80 98 01 00 00 01 00 00 00: mov dword ptr [eax + 0x198], 1
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 91 78 0D 00 00: mov edx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 48: mov eax, dword ptr [edx + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x48
        ; Exact mapped bytes 8B 94 9D F8 00 00 00: mov edx, dword ptr [ebp + ebx*4 + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x9d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E8 0A: shr eax, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C8: movzx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 46 50: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes C1 E1 10: shl ecx, 0x10
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x10
        ; Exact mapped bytes 0B 4A 58: or ecx, dword ptr [edx + 0x58]
        __asm _emit 0x0b
        __asm _emit 0x4a
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 35 10 01 80: push 0x80011035
        __asm _emit 0x68
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        ; Exact mapped bytes E8 42 ED 0F 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xed
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x58871e47
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F8 AC 10 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xac
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 25 01 00 00 80: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x58871f4a
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 C8 FE: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xfe
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0A 4B F6 FF: call 0x587d6a60
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x4b
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 E6 FE FF FF: jmp 0x58871e47
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
