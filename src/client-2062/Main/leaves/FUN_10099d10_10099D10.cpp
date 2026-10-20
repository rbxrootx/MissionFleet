// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10099D10 .. +0x4A1 bytes.
extern "C" __declspec(naked) void FUN_10099d10_10099D10() {
    __asm {
        sub esp, 0ch
        ; Exact mapped bytes 66 8B 44 24 10: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        push ebx
        mov ebx, ecx
        ; Exact mapped bytes 66 3D 03 00: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        push esi
        mov dword ptr [esp + 0ch], ebx
        mov dword ptr [esp + 8], 6
        ; Exact mapped bytes 7D 0A: jge 0x10099d38
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [esp + 8], 0
        ; Exact mapped bytes EB 4E: jmp 0x10099d86
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0A: jge 0x10099d48
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [esp + 8], 1
        ; Exact mapped bytes EB 3E: jmp 0x10099d86
        __asm _emit 0xeb
        __asm _emit 0x3e
        ; Exact mapped bytes 66 3D 08 00: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0A: jge 0x10099d58
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [esp + 8], 2
        ; Exact mapped bytes EB 2E: jmp 0x10099d86
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 66 3D 0A 00: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0A: jge 0x10099d68
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [esp + 8], 3
        ; Exact mapped bytes EB 1E: jmp 0x10099d86
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes 66 3D 0C 00: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0A: jge 0x10099d78
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [esp + 8], 4
        ; Exact mapped bytes EB 0E: jmp 0x10099d86
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 66 3D 0E 00: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 7D 08: jge 0x10099d86
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [esp + 8], 5
        ; Exact mapped bytes 66 3B 83 74 02 00 00: cmp ax, word ptr [ebx + 0x274]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push edi
        ; Exact mapped bytes 0F 84 91 01 00 00: je 0x10099f26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + 118h]
        mov ecx, 0fh
        xor edx, edx
        mov esi, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [esi + 50h], edx
        ; Exact mapped bytes 75 F5: jne 0x10099da2
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes 0F BF 6C 24 24: movsx ebp, word ptr [esp + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
        cmp ebp, edx
        ; Exact mapped bytes 7E 4E: jle 0x10099e04
        __asm _emit 0x7e
        __asm _emit 0x4e
        lea esi, [ebx + 64h]
        mov edx, ebp
        mov eax, dword ptr [esi]
        mov ecx, 1
        test byte ptr [eax + 24h], cl
        ; Exact mapped bytes 75 09: jne 0x10099dd0
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 50h], ecx
        lea ecx, [esi + 4]
        mov edi, 2
        mov eax, dword ptr [ecx]
        mov bl, byte ptr [eax + 24h]
        and bl, 1
        cmp bl, 1
        ; Exact mapped bytes 75 0F: jne 0x10099df4
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ecx]
        mov dword ptr [eax + 50h], 0
        add ecx, 4
        dec edi
        ; Exact mapped bytes 75 DE: jne 0x10099dd8
        __asm _emit 0x75
        __asm _emit 0xde
        add esi, 0ch
        dec edx
        ; Exact mapped bytes 75 BB: jne 0x10099dbb
        __asm _emit 0x75
        __asm _emit 0xbb
        mov ebx, dword ptr [esp + 14h]
        cmp ebp, 0fh
        ; Exact mapped bytes 7D 57: jge 0x10099e60
        __asm _emit 0x7d
        __asm _emit 0x57
        lea ecx, [ebp + ebp*2 + 1bh]
        mov edx, 0fh
        sub edx, ebp
        lea esi, [ebx + ecx*4]
        lea ecx, [esi - 8]
        mov edi, 2
        mov eax, dword ptr [ecx]
        mov bl, byte ptr [eax + 24h]
        and bl, 1
        cmp bl, 1
        ; Exact mapped bytes 75 0F: jne 0x10099e3b
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ecx]
        mov dword ptr [eax + 50h], 0
        add ecx, 4
        dec edi
        ; Exact mapped bytes 75 DE: jne 0x10099e1f
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [esi]
        mov ecx, 1
        test byte ptr [eax + 24h], cl
        ; Exact mapped bytes 75 09: jne 0x10099e56
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 50h], ecx
        add esi, 0ch
        dec edx
        ; Exact mapped bytes 75 BB: jne 0x10099e17
        __asm _emit 0x75
        __asm _emit 0xbb
        mov ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F BF 44 24 20: movsx eax, word ptr [esp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        lea ecx, [eax + eax*2]
        mov esi, dword ptr [ebx + ecx*4 + 64h]
        lea ecx, [ebx + ecx*4]
        mov dl, byte ptr [esi + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 10: jne 0x10099e8a
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [edx + 50h], 0
        mov edx, dword ptr [ecx + 68h]
        test byte ptr [edx + 24h], 1
        ; Exact mapped bytes 75 0F: jne 0x10099ea2
        __asm _emit 0x75
        __asm _emit 0x0f
        mov esi, 1
        ; Exact mapped bytes 66 09 72 24: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 68h]
        mov dword ptr [ecx + 50h], esi
        lea edx, [eax + eax*2 + 1bh]
        mov ecx, dword ptr [ebx + edx*4]
        lea esi, [ebx + edx*4]
        mov dl, byte ptr [ecx + 24h]
        and dl, 1
        cmp dl, 1
        ; Exact mapped bytes 75 0F: jne 0x10099ec6
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 66 81 61 24 FE FF: and word ptr [ecx + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        xor esi, esi
        mov dword ptr [ecx + 50h], esi
        ; Exact mapped bytes EB 02: jmp 0x10099ec8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov edx, dword ptr [ebx + eax*4 + 118h]
        mov edi, 1
        push 0fffffeffh
        mov dword ptr [edx + 50h], edi
        mov ecx, dword ptr [ebx + eax*4 + 118h]
        ; Exact mapped bytes E8 78 52 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebx + 154h]
        mov edx, 6
        mov ecx, 2
        mov ebp, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [ebp + 50h], esi
        ; Exact mapped bytes 75 F5: jne 0x10099ef8
        __asm _emit 0x75
        __asm _emit 0xf5
        dec edx
        ; Exact mapped bytes 75 ED: jne 0x10099ef3
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esp + 10h]
        cmp eax, 6
        ; Exact mapped bytes 7D 17: jge 0x10099f26
        __asm _emit 0x7d
        __asm _emit 0x17
        lea eax, [ebx + eax*8 + 154h]
        mov ecx, 2
        mov edx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [edx + 50h], edi
        ; Exact mapped bytes 75 F5: jne 0x10099f1b
        __asm _emit 0x75
        __asm _emit 0xf5
        xor edi, edi
        lea esi, [ebx + 19ch]
        mov ebp, 0fffeh
        ; Exact mapped bytes 0F BF 44 24 20: movsx eax, word ptr [esp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        cmp edi, eax
        ; Exact mapped bytes 74 22: je 0x10099f5e
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 3D: jne 0x10099f86
        __asm _emit 0x75
        __asm _emit 0x3d
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10099f50
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB 28: jmp 0x10099f86
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [esi]
        test byte ptr [edx + 24h], 1
        ; Exact mapped bytes 75 20: jne 0x10099f86
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, esi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10099f6d
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, dword ptr [esi + 4]
        push 0fffffeffh
        ; Exact mapped bytes E8 DA 51 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        inc edi
        add esi, 8
        cmp edi, 0fh
        ; Exact mapped bytes 7C A4: jl 0x10099f33
        __asm _emit 0x7c
        __asm _emit 0xa4
        ; Exact mapped bytes 0F BF 44 24 20: movsx eax, word ptr [esp + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        cmp eax, 0fh
        ; Exact mapped bytes 0F 87 51 01 00 00: ja 0x1009a0ee
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 B4 A1 09 10: jmp dword ptr [eax*4 + 0x1009a1b4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x10
        mov edi, 100h
        mov esi, 8eh
        ; Exact mapped bytes E9 43 01 00 00: jmp 0x1009a0f6
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 44h
        mov esi, 0b8h
        ; Exact mapped bytes E9 34 01 00 00: jmp 0x1009a0f6
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 0ah
        mov esi, 172h
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x1009a0f6
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 100h
        mov esi, 70h
        ; Exact mapped bytes E9 16 01 00 00: jmp 0x1009a0f6
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x1009a00d
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 83 B8 48 03 00 00 01: cmp word ptr [eax + 0x348], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 0D: jne 0x1009a00d
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 0d44h]
        push 7
        ; Exact mapped bytes E8 13 36 FA FF: call 0x1003d620
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edi, 0ah
        mov esi, 17ch
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x1009a0f6
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x1009a049
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 83 BA 48 03 00 00 01: cmp word ptr [edx + 0x348], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 0D: jne 0x1009a049
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 0d44h]
        push 9
        ; Exact mapped bytes E8 D7 35 FA FF: call 0x1003d620
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edi, 100h
        mov esi, 8eh
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x1009a0f6
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x1009a085
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 83 B8 48 03 00 00 01: cmp word ptr [eax + 0x348], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 0D: jne 0x1009a085
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 0d44h]
        push 0bh
        ; Exact mapped bytes E8 9B 35 FA FF: call 0x1003d620
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edi, 100h
        mov esi, 84h
        ; Exact mapped bytes EB 65: jmp 0x1009a0f6
        __asm _emit 0xeb
        __asm _emit 0x65
        mov edi, 0ah
        mov esi, 172h
        ; Exact mapped bytes EB 59: jmp 0x1009a0f6
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x1009a0ca
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 83 BA 48 03 00 00 01: cmp word ptr [edx + 0x348], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 0D: jne 0x1009a0ca
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 0d44h]
        push 0dh
        ; Exact mapped bytes E8 56 35 FA FF: call 0x1003d620
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edi, 100h
        mov esi, 172h
        ; Exact mapped bytes EB 20: jmp 0x1009a0f6
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edi, 100h
        mov esi, 2eh
        ; Exact mapped bytes EB 14: jmp 0x1009a0f6
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edi, 7eh
        mov esi, 111h
        ; Exact mapped bytes EB 08: jmp 0x1009a0f6
        __asm _emit 0xeb
        __asm _emit 0x08
        mov esi, dword ptr [esp + 18h]
        mov edi, dword ptr [esp + 14h]
        cmp edi, dword ptr [ebx + 4]
        ; Exact mapped bytes 75 05: jne 0x1009a100
        __asm _emit 0x75
        __asm _emit 0x05
        cmp esi, dword ptr [ebx + 8]
        ; Exact mapped bytes 74 36: je 0x1009a136
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 32h
        ; Exact mapped bytes 7E 12: jle 0x1009a120
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1009a120
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes EB 02: jmp 0x1009a122
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [ebx + 184h]
        push esi
        push edi
        ; Exact mapped bytes E8 3A D9 FA FF: call 0x10047a70
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd9
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4C 24 20: mov cx, word ptr [esp + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        pop edi
        ; Exact mapped bytes 0F BF C1: movsx eax, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc1
        cmp eax, 3
        pop ebp
        ; Exact mapped bytes 7C 34: jl 0x1009a179
        __asm _emit 0x7c
        __asm _emit 0x34
        cmp eax, 5
        ; Exact mapped bytes 7E 14: jle 0x1009a15e
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp eax, 0eh
        ; Exact mapped bytes 75 2A: jne 0x1009a179
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 66 89 8B 74 02 00 00: mov word ptr [ebx + 0x274], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 F0 56 1C 10: mov esi, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        mov edx, dword ptr [esi + 0d48h]
        mov al, byte ptr [edx + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 74 2D: je 0x1009a1a2
        __asm _emit 0x74
        __asm _emit 0x2d
        push 1
        ; Exact mapped bytes EB 19: jmp 0x1009a192
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 8B 35 F0 56 1C 10: mov esi, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        mov edx, dword ptr [esi + 0d50h]
        mov al, byte ptr [edx + 25h]
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 74 12: je 0x1009a1a2
        __asm _emit 0x74
        __asm _emit 0x12
        push 0
        mov ecx, dword ptr [esi + 0d4ch]
        ; Exact mapped bytes E8 E3 A8 03 00: call 0x100d4a80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4C 24 18: mov cx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 8B 74 02 00 00: mov word ptr [ebx + 0x274], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
