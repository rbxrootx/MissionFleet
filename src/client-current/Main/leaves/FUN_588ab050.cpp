// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AB050 .. +0x2DA bytes.
extern "C" __declspec(naked) void FUN_588ab050() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push esi
        mov ebx, 2
        push edi
        mov esi, ecx
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 71 02 00 00: jne 0x588ab2d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        cmp eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 75 6E: jne 0x588ab0e0
        __asm _emit 0x75
        __asm _emit 0x6e
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 154h]
        push 5899a274h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 ED 59 EC FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x59
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 0b8h], ebx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 44 1D FE FF: call 0x5888cdf0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 15: jne 0x588ab0cf
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push ebx
        ; Exact mapped bytes E8 BE AB F3 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xab
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 91 CB F3 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xcb
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x588ab172
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 154h]
        push 5899c208h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 72 59 EC FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x59
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C0 45 A2 58: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 0b8h], 3
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 C5 1C FE FF: call 0x5888cdf0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 28: jne 0x588ab161
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes 66 0F B6 82 54 03 00 00: movzx ax, byte ptr [edx + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, ax
        push edx
        push 3
        ; Exact mapped bytes E8 2C AB F3 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xab
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 FF CA F3 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xca
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 75 6C: jne 0x588ab1e6
        __asm _emit 0x75
        __asm _emit 0x6c
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 154h]
        push 5899c570h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 E5 58 EC FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 0b8h], ebx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        ; Exact mapped bytes E8 3D 1C FE FF: call 0x5888cdf0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 14: jne 0x588ab1d5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        push ebx
        ; Exact mapped bytes E8 B7 AA F3 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xaa
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        ; Exact mapped bytes E8 8B CA F3 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xca
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 75 6F: jne 0x588ab25d
        __asm _emit 0x75
        __asm _emit 0x6f
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 154h]
        push 5899c654h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 70 58 EC FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x58
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C0 45 A2 58: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 0b8h], ebx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 4
        ; Exact mapped bytes E8 C7 1B FE FF: call 0x5888cdf0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 15: jne 0x588ab24c
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push ebx
        ; Exact mapped bytes E8 41 AA F3 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xaa
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 4
        ; Exact mapped bytes E8 14 CA F3 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xca
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x588ab322
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [eax + 154h]
        push 5899c600h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 F6 57 EC FF: call 0x58770a80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x57
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 0b8h], ebx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 3
        ; Exact mapped bytes E8 4D 1B FE FF: call 0x5888cdf0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 0D 80 45 A2 58: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 15: jne 0x588ab2c6
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push ebx
        ; Exact mapped bytes E8 C7 A9 F3 FF: call 0x587e5c80
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xa9
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 3
        ; Exact mapped bytes E8 9A C9 F3 FF: call 0x587e7c60
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 46: jne 0x588ab322
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, dword ptr [esp + 10h]
        cmp eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 75 0D: jne 0x588ab2f5
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 D3 FB FF FF: call 0x588aaec0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 74 20: je 0x588ab31d
        __asm _emit 0x74
        __asm _emit 0x20
        cmp eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 74 18: je 0x588ab31d
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 74 10: je 0x588ab31d
        __asm _emit 0x74
        __asm _emit 0x10
        cmp eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 74 08: je 0x588ab31d
        __asm _emit 0x74
        __asm _emit 0x08
        cmp eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 75 05: jne 0x588ab322
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 0E FB FF FF: call 0x588aae30
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
