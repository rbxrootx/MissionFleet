// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100767E0 .. +0x5B3 bytes.
extern "C" __declspec(naked) void FUN_100767e0_100767E0() {
    __asm {
        sub esp, 20h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, 4
        lea eax, [esi + 3b8h]
        mov ecx, dword ptr [eax - 10h]
        mov edx, 1
        add eax, 4
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        dec edi
        ; Exact mapped bytes 75 D9: jne 0x100767f4
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [esi + 3e8h]
        mov ecx, edx
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 388h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 400h]
        add eax, 0f3h
        push eax
        ; Exact mapped bytes E8 7B 85 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 400h]
        mov ebx, 0fh
        lea ecx, [esi + 2e8h]
        mov edx, 20h
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 404h]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1007686e
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 4
        ; Exact mapped bytes 7E 0F: jle 0x10076897
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10076897
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 10h]
        ; Exact mapped bytes EB 02: jmp 0x10076899
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3f8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100768ce
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, 101ace60h
        lea edx, [esi + 368h]
        mov eax, dword ptr [ecx]
        test byte ptr [eax + 30h], 1
        ; Exact mapped bytes 74 09: je 0x100768ea
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        add edx, 4
        add ecx, 4
        cmp ecx, 101ace80h
        ; Exact mapped bytes 7C E4: jl 0x100768d9
        __asm _emit 0x7c
        __asm _emit 0xe4
        mov ebx, dword ptr [esp + 34h]
        xor eax, eax
        mov al, byte ptr [esi + 4a8h]
        mov ecx, dword ptr [ebx*4 + 101ace60h]
        lea edx, [ebx + ebx*4]
        mov ebp, dword ptr [ecx + 24h]
        lea edi, [esi + edx*4]
        xor ecx, ecx
        mov dword ptr [esi + 68h], 0
        mov cl, byte ptr [edi + 408h]
        sub eax, ecx
        mov ecx, dword ptr [esi + 3d8h]
        lea edx, [eax + eax*4]
        shl edx, 1
        push edx
        ; Exact mapped bytes E8 BD 39 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        xor ecx, ecx
        mov al, byte ptr [esi + 4a9h]
        mov cl, byte ptr [edi + 409h]
        sub eax, ecx
        mov ecx, dword ptr [esi + 3dch]
        lea edx, [eax + eax*4]
        shl edx, 1
        push edx
        ; Exact mapped bytes E8 9A 39 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        xor ecx, ecx
        mov al, byte ptr [esi + 4aah]
        mov cl, byte ptr [edi + 40ah]
        sub eax, ecx
        mov ecx, dword ptr [esi + 3e0h]
        lea edx, [eax + eax*4]
        shl edx, 1
        push edx
        ; Exact mapped bytes E8 77 39 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        xor ecx, ecx
        mov al, byte ptr [esi + 4abh]
        mov cl, byte ptr [edi + 40bh]
        sub eax, ecx
        mov ecx, dword ptr [esi + 3e4h]
        lea edx, [eax + eax*4]
        shl edx, 1
        push edx
        ; Exact mapped bytes E8 54 39 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        xor ecx, ecx
        mov al, byte ptr [esi + 4a8h]
        mov cl, byte ptr [edi + 408h]
        sub eax, ecx
        mov ecx, dword ptr [esi + 3b8h]
        push eax
        ; Exact mapped bytes E8 66 8D 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3bch]
        xor edx, edx
        mov dl, byte ptr [esi + 4a9h]
        xor eax, eax
        mov al, byte ptr [edi + 409h]
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 48 8D 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x00
        xor ecx, ecx
        xor edx, edx
        mov cl, byte ptr [esi + 4aah]
        mov dl, byte ptr [edi + 40ah]
        sub ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 3c0h]
        ; Exact mapped bytes E8 2A 8D 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        xor ecx, ecx
        mov al, byte ptr [esi + 4abh]
        mov cl, byte ptr [edi + 40bh]
        sub eax, ecx
        mov ecx, dword ptr [esi + 3c4h]
        push eax
        ; Exact mapped bytes E8 0C 8D 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x00
        lea ebp, [ebp + ebp*4]
        shl ebp, 1
        push ebp
        mov ecx, dword ptr [esi + 3c8h]
        push 0
        ; Exact mapped bytes E8 28 39 FB FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3cch]
        push ebp
        push 0
        ; Exact mapped bytes E8 1A 39 FB FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3d0h]
        push ebp
        push 0
        ; Exact mapped bytes E8 0C 39 FB FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3d4h]
        push ebp
        push 0
        ; Exact mapped bytes E8 FE 38 FB FF: call 0x1002a350
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [esi + 3c8h]
        mov al, byte ptr [edi + 408h]
        lea edx, [eax + eax*4]
        shl edx, 1
        push edx
        ; Exact mapped bytes E8 85 38 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [esi + 3cch]
        mov al, byte ptr [edi + 409h]
        lea eax, [eax + eax*4]
        shl eax, 1
        push eax
        ; Exact mapped bytes E8 6C 38 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        mov al, byte ptr [edi + 40ah]
        lea ecx, [eax + eax*4]
        shl ecx, 1
        push ecx
        mov ecx, dword ptr [esi + 3d0h]
        ; Exact mapped bytes E8 53 38 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [esi + 3d4h]
        mov al, byte ptr [edi + 40bh]
        lea edx, [eax + eax*4]
        shl edx, 1
        push edx
        ; Exact mapped bytes E8 3A 38 FB FF: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3a8h]
        xor eax, eax
        mov al, byte ptr [edi + 408h]
        push eax
        ; Exact mapped bytes E8 56 8C 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [edi + 409h]
        push ecx
        mov ecx, dword ptr [esi + 3ach]
        ; Exact mapped bytes E8 42 8C 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3b0h]
        xor edx, edx
        mov dl, byte ptr [edi + 40ah]
        push edx
        ; Exact mapped bytes E8 2E 8C 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3b4h]
        xor eax, eax
        mov al, byte ptr [edi + 40bh]
        push eax
        ; Exact mapped bytes E8 1A 8C 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 C2 07 00 00: call 0x100772d0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 1ch], 1
        mov edi, dword ptr [edx + 0ch]
        mov ebp, dword ptr [ecx + 108b4h]
        test edi, edi
        ; Exact mapped bytes 74 28: je 0x10076b57
        __asm _emit 0x74
        __asm _emit 0x28
        xor eax, eax
        mov al, byte ptr [edi + 330h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0B: je 0x10076b46
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, edi
        ; Exact mapped bytes E8 8E 7A 07 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x10076b4f
        __asm _emit 0x75
        __asm _emit 0x09
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 E2: jne 0x10076b2f
        __asm _emit 0x75
        __asm _emit 0xe2
        ; Exact mapped bytes EB 08: jmp 0x10076b57
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 1ch], 0
        mov eax, dword ptr [esi + 0c4h]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 1C: jle 0x10076b7f
        __asm _emit 0x7e
        __asm _emit 0x1c
        lea ebp, [esi + 0c8h]
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 CF C4 06 00: call 0x100e3040
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        inc edi
        add ebp, 4
        cmp edi, eax
        ; Exact mapped bytes 7C EA: jl 0x10076b69
        __asm _emit 0x7c
        __asm _emit 0xea
        mov eax, dword ptr [esi + 70h]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 19: jle 0x10076ba1
        __asm _emit 0x7e
        __asm _emit 0x19
        lea ebp, [esi + 2c8h]
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 AA C4 06 00: call 0x100e3040
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        inc edi
        add ebp, 4
        cmp edi, eax
        ; Exact mapped bytes 7C ED: jl 0x10076b8e
        __asm _emit 0x7c
        __asm _emit 0xed
        mov ecx, dword ptr [esi + 388h]
        mov edx, dword ptr [esi + 6ch]
        xor eax, eax
        mov dword ptr [ecx + 50h], edx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 14h], eax
        mov edi, dword ptr [ecx + 0ch]
        cmp edi, eax
        ; Exact mapped bytes 0F 84 C5 01 00 00: je 0x10076d89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 18h], eax
        lea ebp, [esi + 0c8h]
        mov eax, dword ptr [edi + 5c54h]
        test eax, eax
        ; Exact mapped bytes 0F 85 A2 01 00 00: jne 0x10076d7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [edi + 330h]
        cmp ecx, ebx
        mov dword ptr [esp + 20h], ecx
        ; Exact mapped bytes 0F 85 8E 01 00 00: jne 0x10076d7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 21714h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x10076c0e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp edi, dword ptr [eax + 4]
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x10076d7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0eb4h]
        mov eax, 51eb851fh
        xor edx, 0aaaaaaaah
        mul edx
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        shr edx, 5
        mov eax, dword ptr [eax + 108b4h]
        mov dword ptr [esp + 10h], edx
        cmp ecx, eax
        ; Exact mapped bytes 75 0B: jne 0x10076c42
        __asm _emit 0x75
        __asm _emit 0x0b
        lea ecx, [edx + edx]
        mov dword ptr [esp + 10h], ecx
        mov edx, ecx
        ; Exact mapped bytes EB 1F: jmp 0x10076c61
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 89 94 05 01 00: mov cx, word ptr [ecx + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 74 0C: je 0x10076c61
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 74 06: je 0x10076c61
        __asm _emit 0x74
        __asm _emit 0x06
        shr edx, 1
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 89 94 05 01 00: mov cx, word ptr [ecx + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 74 06: je 0x10076c7a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 75 35: jne 0x10076caf
        __asm _emit 0x75
        __asm _emit 0x35
        cmp dword ptr [esp + 20h], eax
        ; Exact mapped bytes 75 2F: jne 0x10076caf
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [esp + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x10076caf
        __asm _emit 0x74
        __asm _emit 0x27
        mov dword ptr [esp + 28h], edx
        mov dword ptr [esp + 2ch], 0
        ; Exact mapped bytes DF 6C 24 28: fild qword ptr [esp + 0x28]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes DD 5C 24 20: fstp qword ptr [esp + 0x20]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DD 44 24 20: fld qword ptr [esp + 0x20]
        __asm _emit 0xdd
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DC 0D 30 52 17 10: fmul qword ptr [0x10175230]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 FB 5A 0F 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x5a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        push 0bh
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 36 86 07 00: call 0x100ef2f0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x10076cea
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0bh
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 27 86 07 00: call 0x100ef2f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x00
        lea eax, [eax + eax*4]
        push 0bh
        push 0
        mov ecx, edi
        lea ebx, [eax + eax*4]
        shl ebx, 2
        ; Exact mapped bytes E8 13 86 07 00: call 0x100ef2f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, eax
        mov eax, ebx
        mov ebx, dword ptr [esp + 34h]
        cdq
        idiv ecx
        ; Exact mapped bytes EB 02: jmp 0x10076cec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 0eb0h]
        mov edx, dword ptr [esp + 10h]
        push 0
        push eax
        xor ecx, 0aaaaaaaah
        mov eax, 51eb851fh
        push edx
        mul ecx
        mov eax, dword ptr [edi + 0each]
        mov ecx, dword ptr [esp + 20h]
        shr edx, 5
        push edx
        mov edx, dword ptr [edi + 0ea8h]
        xor edx, 0aaaaaaaah
        xor eax, 0aaaaaaaah
        push edx
        push eax
        mov eax, dword ptr [edi + 0f10h]
        push ecx
        lea edx, [edi + 37ch]
        push ebx
        mov ecx, dword ptr [eax + 6ch]
        push edx
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 FD C3 06 00: call 0x100e3140
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push 0ah
        push 0
        push ebx
        ; Exact mapped bytes E8 40 C5 06 00: call 0x100e3290
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esp + 18h]
        lea ecx, [eax + edx + 0f3h]
        push ecx
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 59 80 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 18h]
        inc edx
        add ebp, 4
        add eax, 0eh
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 18h], eax
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 0F 85 45 FE FF FF: jne 0x10076bce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
