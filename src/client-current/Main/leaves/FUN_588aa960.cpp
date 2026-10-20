// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AA960 .. +0x49B bytes.
extern "C" __declspec(naked) void FUN_588aa960() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, 0fff0h
        mov edx, ecx
        mov ebx, 0fh
        ; Exact mapped bytes 66 09 5E 24: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x24
        mov eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ach]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 12ch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 130h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        xor edi, edi
        ; Exact mapped bytes E8 5F CD F0 FF: call 0x587b7820
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xcd
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x588aab19
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [esi + 0dch]
        push 2dah
        push 112h
        ; Exact mapped bytes E8 B6 87 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 64h]
        push 2dah
        push 0feh
        ; Exact mapped bytes E8 9A 87 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 2dah
        push 0feh
        ; Exact mapped bytes E8 88 87 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        lea edi, [ebx - 0eh]
        ; Exact mapped bytes 83 3D A0 B4 A0 58 00: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        push ebp
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x588aac15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A4 B4 A0 58 00: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        mov ebp, 2dah
        ; Exact mapped bytes 74 7D: je 0x588aabb2
        __asm _emit 0x74
        __asm _emit 0x7d
        mov ecx, dword ptr [esi + 0d8h]
        lea eax, [edi + edi*4]
        add eax, eax
        add eax, eax
        sub ebp, eax
        push ebp
        push 112h
        ; Exact mapped bytes E8 41 87 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + edi*4 + 64h]
        push ebp
        push 0feh
        ; Exact mapped bytes E8 28 87 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + edi*4 + 78h]
        push ebp
        push 0feh
        ; Exact mapped bytes E8 19 87 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*4 + 64h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + edi*4 + 78h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        inc edi
        lea ecx, [edi + edi*4]
        add ecx, ecx
        add ecx, ecx
        mov ebp, 2dah
        sub ebp, ecx
        mov ecx, dword ptr [esi + 0d0h]
        push ebp
        push 112h
        ; Exact mapped bytes E8 E9 86 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x588aac43
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d4h]
        lea edx, [edi + edi*4]
        add edx, edx
        add edx, edx
        sub ebp, edx
        push ebp
        push 112h
        ; Exact mapped bytes E8 C4 86 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + edi*4 + 64h]
        push ebp
        push 0feh
        ; Exact mapped bytes E8 AB 86 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + edi*4 + 78h]
        push ebp
        push 0feh
        ; Exact mapped bytes E8 9C 86 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*4 + 64h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + edi*4 + 78h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        inc edi
        lea eax, [edi + edi*4]
        add eax, eax
        add eax, eax
        mov ebp, 2dah
        sub ebp, eax
        ; Exact mapped bytes EB 81: jmp 0x588aab96
        __asm _emit 0xeb
        __asm _emit 0x81
        ; Exact mapped bytes 83 3D A4 B4 A0 58 00: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 58: je 0x588aac76
        __asm _emit 0x74
        __asm _emit 0x58
        lea ecx, [edi + edi*4]
        add ecx, ecx
        add ecx, ecx
        mov ebp, 2dah
        sub ebp, ecx
        mov ecx, dword ptr [esi + 0d8h]
        push ebp
        push 112h
        ; Exact mapped bytes E8 53 86 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + edi*4 + 64h]
        push ebp
        push 0feh
        ; Exact mapped bytes E8 3A 86 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + edi*4 + 78h]
        push ebp
        push 0feh
        ; Exact mapped bytes E8 2B 86 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*4 + 64h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + edi*4 + 78h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        inc edi
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 9C 45 A2 58: cmp eax, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 5D: jne 0x588aace0
        __asm _emit 0x75
        __asm _emit 0x5d
        mov ecx, dword ptr [esi + 0cch]
        lea edx, [edi + edi*4]
        add edx, edx
        add edx, edx
        mov ebp, 2dah
        sub ebp, edx
        push ebp
        push 112h
        ; Exact mapped bytes E8 EE 85 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + edi*4 + 64h]
        push ebp
        push 0feh
        ; Exact mapped bytes E8 D5 85 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + edi*4 + 78h]
        push ebp
        push 0feh
        ; Exact mapped bytes E8 C6 85 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*4 + 64h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + edi*4 + 78h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        inc edi
        ; Exact mapped bytes 3B 05 98 45 A2 58: cmp eax, dword ptr [0x58a24598]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 60: je 0x588aad48
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 3B 05 A0 45 A2 58: cmp eax, dword ptr [0x58a245a0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 58: je 0x588aad48
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0c8h]
        lea eax, [edi + edi*4]
        add eax, eax
        add eax, eax
        mov ebp, 2dah
        sub ebp, eax
        push ebp
        push 112h
        ; Exact mapped bytes E8 81 85 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + edi*4 + 64h]
        push ebp
        push 0feh
        ; Exact mapped bytes E8 68 85 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + edi*4 + 78h]
        push ebp
        push 0feh
        ; Exact mapped bytes E8 59 85 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + edi*4 + 64h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + edi*4 + 78h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        inc edi
        pop ebp
        test edi, edi
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x588aadef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 2eeh
        push 0feh
        ; Exact mapped bytes E8 2A 85 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 2eeh
        push 0feh
        ; Exact mapped bytes E8 15 85 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [edi + edi*4]
        add ecx, ecx
        add ecx, ecx
        mov edi, 2d7h
        sub edi, ecx
        mov ecx, dword ptr [esi + 8ch]
        push edi
        push 0feh
        ; Exact mapped bytes E8 F6 84 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push edi
        push 0feh
        ; Exact mapped bytes E8 E5 84 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0e2ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        pop edi
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        pop ebx
        ret
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        pop edi
        mov ecx, esi
        pop esi
        pop ebx
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
