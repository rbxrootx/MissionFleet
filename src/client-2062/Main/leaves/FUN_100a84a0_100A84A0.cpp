// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A84A0 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_100a84a0_100A84A0() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes F6 46 24 02: test byte ptr [esi + 0x24], 2
        __asm _emit 0xf6
        __asm _emit 0x46
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 74 01 00 00: je 0x100a8624
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 2D 00 01 00 00: sub eax, 0x100
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x100a85ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2D 00 01 00 00: sub eax, 0x100
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 60: je 0x100a8529
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 0F 85 20 01 00 00: jne 0x100a85f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 A4 04 00 00: mov eax, dword ptr [esi + 0x4a4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 48 24: test byte ptr [eax + 0x24], cl
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 74 26: je 0x100a8506
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 96 BE 00 00 00: mov dx, word ptr [esi + 0xbe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F2 AA 00: xor dx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FA 0A: cmp dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0a
        ; Exact mapped bytes 72 14: jb 0x100a8506
        __asm _emit 0x72
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 8D 86 B4 00 00 00: lea eax, [esi + 0xb4]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2F B4 01 00: call 0x100c3930
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x100a85f0
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 A8 04 00 00: mov edx, dword ptr [esi + 0x4a8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 4A 24: test byte ptr [edx + 0x24], cl
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x100a85f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 6C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 86 B4 00 00 00: lea eax, [esi + 0xb4]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 4C 16 02 00: call 0x100c9b70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x100a85f0
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 A4 04 00 00: mov eax, dword ptr [esi + 0x4a4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 8B 7A 04: mov edi, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x04
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 7C 3F: jl 0x100a8583
        __asm _emit 0x7c
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 58 1C: mov ebx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x1c
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 7D 36: jge 0x100a8583
        __asm _emit 0x7d
        __asm _emit 0x36
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8B 58 18: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 8B 7A 08: mov edi, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x08
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 7C 27: jl 0x100a8583
        __asm _emit 0x7c
        __asm _emit 0x27
        ; Exact mapped bytes 8B 58 20: mov ebx, dword ptr [eax + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x20
        ; Exact mapped bytes 03 D9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xd9
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 7D 1E: jge 0x100a8583
        __asm _emit 0x7d
        __asm _emit 0x1e
        ; Exact mapped bytes 8A 50 24: mov dl, byte ptr [eax + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 D1: test cl, dl
        __asm _emit 0x84
        __asm _emit 0xd1
        ; Exact mapped bytes 75 04: jne 0x100a8575
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 A8 04 00 00: mov eax, dword ptr [esi + 0x4a8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 6D: jmp 0x100a85f0
        __asm _emit 0xeb
        __asm _emit 0x6d
        ; Exact mapped bytes 8B 8E A8 04 00 00: mov ecx, dword ptr [esi + 0x4a8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5A 04: mov ebx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x5a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 79 04: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 8B 69 14: mov ebp, dword ptr [ecx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x14
        ; Exact mapped bytes 03 EF: add ebp, edi
        __asm _emit 0x03
        __asm _emit 0xef
        ; Exact mapped bytes 3B DD: cmp ebx, ebp
        __asm _emit 0x3b
        __asm _emit 0xdd
        ; Exact mapped bytes 7C 3D: jl 0x100a85d5
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 69 1C: mov ebp, dword ptr [ecx + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x69
        __asm _emit 0x1c
        ; Exact mapped bytes 03 EF: add ebp, edi
        __asm _emit 0x03
        __asm _emit 0xef
        ; Exact mapped bytes 3B DD: cmp ebx, ebp
        __asm _emit 0x3b
        __asm _emit 0xdd
        ; Exact mapped bytes 7D 34: jge 0x100a85d5
        __asm _emit 0x7d
        __asm _emit 0x34
        ; Exact mapped bytes 8B 79 08: mov edi, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x08
        ; Exact mapped bytes 8B 59 18: mov ebx, dword ptr [ecx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x59
        __asm _emit 0x18
        ; Exact mapped bytes 8B 52 08: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 03 DF: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xdf
        ; Exact mapped bytes 3B D3: cmp edx, ebx
        __asm _emit 0x3b
        __asm _emit 0xd3
        ; Exact mapped bytes 7C 25: jl 0x100a85d5
        __asm _emit 0x7c
        __asm _emit 0x25
        ; Exact mapped bytes 8B 49 20: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x20
        ; Exact mapped bytes 03 CF: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xcf
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 7D 1C: jge 0x100a85d5
        __asm _emit 0x7d
        __asm _emit 0x1c
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 A8 04 00 00: mov eax, dword ptr [esi + 0x4a8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 48 24: test byte ptr [eax + 0x24], cl
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 75 21: jne 0x100a85f0
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 1B: jmp 0x100a85f0
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes B9 F0 FF 00 00: mov ecx, 0xfff0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 A8 04 00 00: mov eax, dword ptr [esi + 0x4a8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 06: jmp 0x100a85f0
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 83 79 08 1B: cmp dword ptr [ecx + 8], 0x1b
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x1b
        ; Exact mapped bytes 74 24: je 0x100a8614
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 46 3C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2D: je 0x100a8624
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 40 34: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x34
        ; Exact mapped bytes 8B 7C 24 14: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 19: je 0x100a861b
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 3B 41 34: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x34
        ; Exact mapped bytes 74 12: je 0x100a8624
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes EB EA: jmp 0x100a85fe
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
