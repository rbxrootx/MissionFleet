// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DDB90 .. +0x38C bytes.
extern "C" __declspec(naked) void FUN_100ddb90_100DDB90() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 72 03 00 00: je 0x100ddf12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x100ddbc6
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x100ddd21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 E8: jne 0x100ddbae
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [edi + 4]
        cmp eax, 201h
        ; Exact mapped bytes 0F 87 DA 02 00 00: ja 0x100ddeae
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A8 01 00 00: je 0x100ddd82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 23 01 00 00: je 0x100ddd08
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 22 03 00 00: jne 0x100ddf12
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        xor edx, edx
        mov dl, byte ptr [esi + 139ch]
        mov dword ptr [esp + 14h], edx
        cmp edi, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F 8D BF 00 00 00: jge 0x100ddcc7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov al, byte ptr [esi + 139fh]
        lea ebp, [eax + edi]
        mov eax, dword ptr [esi + ebp*4 + 0d9ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x100ddcc7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        mov edx, dword ptr [edx + 4]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 3E: jl 0x100ddc75
        __asm _emit 0x7c
        __asm _emit 0x3e
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7D 35: jge 0x100ddc75
        __asm _emit 0x7d
        __asm _emit 0x35
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx + 8]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 7C 20: jl 0x100ddc75
        __asm _emit 0x7c
        __asm _emit 0x20
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7D 17: jge 0x100ddc75
        __asm _emit 0x7d
        __asm _emit 0x17
        ; Exact mapped bytes 0F BF 8E A4 13 00 00: movsx ecx, word ptr [esi + 0x13a4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, ebp
        ; Exact mapped bytes 74 5E: je 0x100ddcc7
        __asm _emit 0x74
        __asm _emit 0x5e
        xor edx, edx
        mov dl, byte ptr [esi + 98h]
        cmp ebp, edx
        ; Exact mapped bytes 7C 08: jl 0x100ddc7d
        __asm _emit 0x7c
        __asm _emit 0x08
        inc edi
        cmp edi, 5
        ; Exact mapped bytes 7C 83: jl 0x100ddbfe
        __asm _emit 0x7c
        __asm _emit 0x83
        ; Exact mapped bytes EB 4A: jmp 0x100ddcc7
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 66 83 BE A4 13 00 00 FF: cmp word ptr [esi + 0x13a4], -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 74 0B: je 0x100ddc92
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 13a0h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F B6 8E 9F 13 00 00: movzx cx, byte ptr [esi + 0x139f]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8e
        __asm _emit 0x9f
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ecx + edi]
        mov ecx, dword ptr [esi + 13a0h]
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 86 A4 13 00 00: mov word ptr [esi + 0x13a4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + edx*4 + 0d9ch]
        push eax
        ; Exact mapped bytes E8 14 E9 FC FF: call 0x100ac5d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 13a0h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp edi, 5
        ; Exact mapped bytes 74 10: je 0x100ddcdc
        __asm _emit 0x74
        __asm _emit 0x10
        xor eax, eax
        mov al, byte ptr [esi + 98h]
        cmp edi, eax
        ; Exact mapped bytes 0F 85 36 02 00 00: jne 0x100ddf12
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        or edi, 0ffffffffh
        ; Exact mapped bytes 66 39 BE A4 13 00 00: cmp word ptr [esi + 0x13a4], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 26 02 00 00: je 0x100ddf12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 13a0h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 34h]
        ; Exact mapped bytes 66 89 BE A4 13 00 00: mov word ptr [esi + 0x13a4], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        cmp eax, 1bh
        ; Exact mapped bytes 75 1A: jne 0x100ddd2a
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 94h], 0
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 25h
        ; Exact mapped bytes 74 48: je 0x100ddd77
        __asm _emit 0x74
        __asm _emit 0x48
        cmp eax, 26h
        ; Exact mapped bytes 74 43: je 0x100ddd77
        __asm _emit 0x74
        __asm _emit 0x43
        cmp eax, 27h
        ; Exact mapped bytes 74 09: je 0x100ddd42
        __asm _emit 0x74
        __asm _emit 0x09
        cmp eax, 28h
        ; Exact mapped bytes 0F 85 D0 01 00 00: jne 0x100ddf12
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 139fh]
        xor ecx, ecx
        mov edx, eax
        mov cl, byte ptr [esi + 98h]
        and edx, 0ffh
        sub ecx, 5
        cmp edx, ecx
        ; Exact mapped bytes 0F 8D AF 01 00 00: jge 0x100ddf12
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        inc al
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 93 F8 FF FF: call 0x100dd600
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov al, byte ptr [esi + 139fh]
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x100ddecf
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov ebx, 100h
        xor eax, eax
        xor ecx, ecx
        mov al, byte ptr [esi + 139fh]
        mov cl, byte ptr [esi + 98h]
        add eax, edi
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D F7 00 00 00: jge 0x100dde9a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + eax*4 + 0d9ch]
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        mov edx, dword ptr [edx + 4]
        add ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 0F 8C D7 00 00 00: jl 0x100dde9a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 0F 8D CA 00 00 00: jge 0x100dde9a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 18h]
        mov edx, dword ptr [edx + 8]
        add ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 0F 8C B1 00 00 00: jl 0x100dde9a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 0F 8D A4 00 00 00: jge 0x100dde9a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        xor eax, eax
        mov al, byte ptr [esi + 139fh]
        add eax, edi
        mov ecx, dword ptr [esi + eax*4 + 0d9ch]
        cmp dword ptr [ecx + 28h], ebx
        ; Exact mapped bytes 75 29: jne 0x100dde42
        __asm _emit 0x75
        __asm _emit 0x29
        push 80h
        ; Exact mapped bytes E8 FD 12 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [esi + 139fh]
        add ecx, edi
        mov dword ptr [esi + ecx*4 + 119ch], 0
        mov al, byte ptr [esi + 139eh]
        dec al
        ; Exact mapped bytes EB 52: jmp 0x100dde94
        __asm _emit 0xeb
        __asm _emit 0x52
        xor edx, edx
        xor eax, eax
        mov dl, byte ptr [esi + 139ch]
        mov al, byte ptr [esi + 139eh]
        sub edx, eax
        cmp edx, 4
        ; Exact mapped bytes 7D 18: jge 0x100dde71
        __asm _emit 0x7d
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 197h
        ; Exact mapped bytes E8 41 FC F3 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes EB 29: jmp 0x100dde9a
        __asm _emit 0xeb
        __asm _emit 0x29
        push ebx
        ; Exact mapped bytes E8 A9 12 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [esi + 139fh]
        add ecx, edi
        mov dword ptr [esi + ecx*4 + 119ch], 1
        mov al, byte ptr [esi + 139eh]
        inc al
        mov byte ptr [esi + 139eh], al
        inc edi
        cmp edi, 5
        ; Exact mapped bytes 0F 8C E5 FE FF FF: jl 0x100ddd89
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        sub eax, 204h
        ; Exact mapped bytes 74 32: je 0x100ddee7
        __asm _emit 0x74
        __asm _emit 0x32
        sub eax, 6
        ; Exact mapped bytes 75 58: jne 0x100ddf12
        __asm _emit 0x75
        __asm _emit 0x58
        mov edx, dword ptr [edi + 8]
        mov al, byte ptr [esi + 139fh]
        shr edx, 10h
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 8E 79 FE FF FF: jle 0x100ddd48
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 76 3F: jbe 0x100ddf12
        __asm _emit 0x76
        __asm _emit 0x3f
        dec al
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 23 F7 FF FF: call 0x100dd600
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 13a0h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 1
        ; Exact mapped bytes 75 18: jne 0x100ddf12
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 13a0h]
        ; Exact mapped bytes E8 FE 00 FD FF: call 0x100ae010
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
