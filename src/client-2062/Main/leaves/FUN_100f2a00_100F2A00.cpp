// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F2A00 .. +0x8EE bytes.
extern "C" __declspec(naked) void FUN_100f2a00_100F2A00() {
    __asm {
        sub esp, 0a0h
        push ebx
        push ebp
        mov eax, ecx
        push esi
        push edi
        mov ecx, 0e0h
        lea esi, [eax + 0b4h]
        lea edi, [eax + 434h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        xor edx, edx
        lea ecx, [eax + 7bch]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 66 89 90 B4 07 00 00: mov word ptr [eax + 0x7b4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 B6 07 00 00: mov word ptr [eax + 0x7b6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 B8 07 00 00: mov word ptr [eax + 0x7b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 24h], edx
        mov dword ptr [eax + 93ch], edx
        mov dword ptr [eax + 940h], edx
        mov dword ptr [eax + 944h], edx
        mov dword ptr [eax + 948h], edx
        mov dword ptr [esp + 2ch], edx
        mov dword ptr [esp + 28h], edx
        mov dword ptr [esp + 20h], ecx
        lea esi, [eax + 0c8h]
        ; Exact mapped bytes EB 04: jmp 0x100f2a78
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [eax + 0b4ch]
        mov ecx, dword ptr [esi - 14h]
        xor eax, eax
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes 66 8B 82 48 03 00 00: mov ax, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        shr edx, 3
        mov edi, eax
        and edx, 7e000h
        and edi, 0ffffe000h
        cmp edi, edx
        ; Exact mapped bytes 75 6B: jne 0x100f2b10
        __asm _emit 0x75
        __asm _emit 0x6b
        mov ebx, dword ptr [esi - 10h]
        xor ebx, 0aah
        and ebx, 3ffffffh
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 75 05: jne 0x100f2abf
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebx, 1
        mov ebp, dword ptr [esi]
        mov ecx, ebp
        mov edi, ebp
        xor ecx, 2a800h
        xor edi, 0aa00000h
        shr ecx, 0ah
        shr edi, 14h
        and ecx, 3ffh
        and edi, 3ffh
        mov eax, edi
        mov edx, ecx
        ; Exact mapped bytes 0F AF 05 30 54 1C 10: imul eax, dword ptr [0x101c5430]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 0F AF 15 2C 54 1C 10: imul edx, dword ptr [0x101c542c]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebp, 0aah
        add eax, edx
        and ebp, 3ffh
        lea edx, [edi + ebp]
        add edx, ecx
        imul eax, edx
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x100f2bef
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffe000h
        cmp eax, 6000h
        ; Exact mapped bytes 7C 17: jl 0x100f2b33
        __asm _emit 0x7c
        __asm _emit 0x17
        mov edx, ecx
        and edx, 3f0000h
        cmp edx, 30000h
        ; Exact mapped bytes 73 15: jae 0x100f2b41
        __asm _emit 0x73
        __asm _emit 0x15
        cmp eax, 6000h
        ; Exact mapped bytes 7D 67: jge 0x100f2b9a
        __asm _emit 0x7d
        __asm _emit 0x67
        and ecx, 3f0000h
        cmp ecx, 30000h
        ; Exact mapped bytes 73 59: jae 0x100f2b9a
        __asm _emit 0x73
        __asm _emit 0x59
        mov ebx, dword ptr [esi - 10h]
        xor ebx, 0aah
        and ebx, 3ffffffh
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 75 05: jne 0x100f2b5b
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebx, 1
        mov ebp, dword ptr [esi]
        mov edi, ebp
        mov ecx, ebp
        xor edi, 0aa00000h
        xor ebp, 0aah
        shr edi, 14h
        xor ecx, 2a800h
        and edi, 3ffh
        and ebp, 3ffh
        shr ecx, 0ah
        and ecx, 3ffh
        lea eax, [edi + ebp]
        add eax, ecx
        imul eax, ecx
        lea eax, [eax + eax*4]
        shl eax, 1
        ; Exact mapped bytes EB 55: jmp 0x100f2bef
        __asm _emit 0xeb
        __asm _emit 0x55
        mov ebx, dword ptr [esi - 10h]
        xor ebx, 0aah
        and ebx, 3ffffffh
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 75 05: jne 0x100f2bb4
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebx, 1
        mov ebp, dword ptr [esi]
        mov edi, ebp
        mov ecx, ebp
        xor edi, 0aa00000h
        xor ebp, 0aah
        shr edi, 14h
        xor ecx, 2a800h
        and edi, 3ffh
        and ebp, 3ffh
        shr ecx, 0ah
        and ecx, 3ffh
        lea eax, [edi + ebp]
        add eax, ecx
        imul eax, ecx
        shl eax, 2
        xor edx, edx
        div ebx
        mov ebx, eax
        mov eax, dword ptr [esp + 1ch]
        and eax, 0f000h
        cmp eax, 2000h
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x100f2c8c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        lea edx, [esp + 30h]
        push eax
        push edi
        push ecx
        mov ecx, dword ptr [esp + 34h]
        push ebp
        ; Exact mapped bytes 8B 2D 88 51 17 10: mov ebp, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push ecx
        push 101ac77ch
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 1ch
        lea eax, [esp + 30h]
        push eax
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi - 14h]
        shr ecx, 10h
        mov edx, dword ptr [edi + 0b4ch]
        and ecx, 3fh
        push ecx
        lea ecx, [esp + 34h]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        shr eax, 8
        and eax, 0fh
        push eax
        push 101ac750h
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 10h
        lea edx, [esp + 30h]
        push edx
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push ebx
        lea eax, [esp + 34h]
        push 101ac734h
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        add esp, 0ch
        lea ecx, [esp + 30h]
        push ecx
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes EB 04: jmp 0x100f2c90
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 20h]
        mov ebp, 101c5434h
        lea eax, [edi + 7b4h]
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [edx], ebx
        mov dword ptr [esp + 10h], eax
        lea ecx, [esi + 374h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 81 80 FC FF FF: mov ax, word ptr [ecx - 0x380]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, ebx
        cdq
        idiv dword ptr [ebp]
        cmp eax, 0ffffh
        ; Exact mapped bytes 76 05: jbe 0x100f2ccb
        __asm _emit 0x76
        __asm _emit 0x05
        mov eax, 0ffffh
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov ebp, eax
        ; Exact mapped bytes 66 8B 12: mov dx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x12
        and ebp, 0ffffh
        and edx, 0ffffh
        add edx, ebp
        cmp edx, 0ffffh
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 7E 07: jle 0x100f2cf8
        __asm _emit 0x7e
        __asm _emit 0x07
        ; Exact mapped bytes 66 C7 02 FF FF: mov word ptr [edx], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x100f2d00
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 2A: mov bp, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x2a
        add ebp, eax
        ; Exact mapped bytes 66 89 2A: mov word ptr [edx], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x2a
        mov ebp, dword ptr [esp + 1ch]
        add ecx, 2
        add ebp, 4
        add edx, 2
        cmp ebp, 101c5440h
        mov dword ptr [esp + 10h], edx
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 75 92: jne 0x100f2caf
        __asm _emit 0x75
        __asm _emit 0x92
        mov eax, dword ptr [esi - 14h]
        shr eax, 0ch
        and eax, 0fh
        cmp eax, 0fh
        ; Exact mapped bytes 0F 87 72 03 00 00: ja 0x100f30a1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 34 33 0F 10: jmp dword ptr [eax*4 + 0x100f3334]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 46 FA: mov ax, word ptr [esi - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfa
        ; Exact mapped bytes 66 89 86 7A 03 00 00: mov word ptr [esi + 0x37a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FC: mov ax, word ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfc
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 50 54 1C 10: idiv dword ptr [0x101c5450]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7C 03 00 00: mov word ptr [esi + 0x37c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FE: mov ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfe
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 54 54 1C 10: idiv dword ptr [0x101c5454]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E9 2D 03 00 00: jmp 0x100f309a
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FA: mov ax, word ptr [esi - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfa
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 58 54 1C 10: idiv dword ptr [0x101c5458]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7A 03 00 00: mov word ptr [esi + 0x37a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FC: mov ax, word ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfc
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 5C 54 1C 10: idiv dword ptr [0x101c545c]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7C 03 00 00: mov word ptr [esi + 0x37c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FE: mov ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfe
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 60 54 1C 10: idiv dword ptr [0x101c5460]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E9 EA 02 00 00: jmp 0x100f309a
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov edi, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 8B 46 FA: mov ax, word ptr [esi - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfa
        xor ecx, ecx
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 64 54 1C 10: idiv dword ptr [0x101c5464]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        inc edi
        mov dword ptr [esp + 2ch], edi
        ; Exact mapped bytes 66 89 86 7A 03 00 00: mov word ptr [esi + 0x37a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FC: mov ax, word ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfc
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 68 54 1C 10: idiv dword ptr [0x101c5468]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 89 86 7C 03 00 00: mov word ptr [esi + 0x37c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 86 7E 03 00 00 00 00: mov word ptr [esi + 0x37e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8E 7A 03 00 00: mov cx, word ptr [esi + 0x37a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        add edx, ecx
        mov dword ptr [esp + 18h], edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 96 7C 03 00 00: mov dx, word ptr [esi + 0x37c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, edx
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes E9 86 02 00 00: jmp 0x100f30a1
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FA: mov ax, word ptr [esi - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfa
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 70 54 1C 10: idiv dword ptr [0x101c5470]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7A 03 00 00: mov word ptr [esi + 0x37a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FC: mov ax, word ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfc
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 74 54 1C 10: idiv dword ptr [0x101c5474]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7C 03 00 00: mov word ptr [esi + 0x37c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FE: mov ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfe
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 78 54 1C 10: idiv dword ptr [0x101c5478]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 66 89 86 7E 03 00 00: mov word ptr [esi + 0x37e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 948h]
        xor eax, eax
        mov ebp, dword ptr [edi + 940h]
        ; Exact mapped bytes 66 8B 86 7A 03 00 00: mov ax, word ptr [esi + 0x37a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [edi + 93ch]
        add ecx, eax
        mov dword ptr [edi + 948h], ecx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E 7C 03 00 00: mov cx, word ptr [esi + 0x37c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add ebp, ecx
        mov dword ptr [edi + 940h], ebp
        ; Exact mapped bytes 66 8B 96 7E 03 00 00: mov dx, word ptr [esi + 0x37e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add ebx, edx
        mov dword ptr [edi + 93ch], ebx
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 30h]
        test eax, eax
        ; Exact mapped bytes 0F 84 EC 01 00 00: je 0x100f30a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi - 14h]
        and ecx, 1fh
        mov eax, dword ptr [eax + ecx*4 + 83ch]
        ; Exact mapped bytes E9 DA 01 00 00: jmp 0x100f30a1
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FA: mov ax, word ptr [esi - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfa
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 7C 54 1C 10: idiv dword ptr [0x101c547c]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7A 03 00 00: mov word ptr [esi + 0x37a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FC: mov ax, word ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfc
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 80 54 1C 10: idiv dword ptr [0x101c5480]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7C 03 00 00: mov word ptr [esi + 0x37c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FE: mov ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfe
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 84 54 1C 10: idiv dword ptr [0x101c5484]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 66 89 86 7E 03 00 00: mov word ptr [esi + 0x37e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 96 7A 03 00 00: mov dx, word ptr [esi + 0x37a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [edi + 944h]
        mov ecx, dword ptr [edi + 940h]
        add ebx, edx
        xor eax, eax
        mov dword ptr [edi + 944h], ebx
        ; Exact mapped bytes 66 8B 86 7C 03 00 00: mov ax, word ptr [esi + 0x37c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, eax
        mov eax, dword ptr [edi + 948h]
        mov dword ptr [edi + 940h], ecx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E 7E 03 00 00: mov cx, word ptr [esi + 0x37e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, ecx
        mov dword ptr [edi + 948h], eax
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x100f30a1
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FA: mov ax, word ptr [esi - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfa
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 88 54 1C 10: idiv dword ptr [0x101c5488]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7A 03 00 00: mov word ptr [esi + 0x37a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FC: mov ax, word ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfc
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 8C 54 1C 10: idiv dword ptr [0x101c548c]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7C 03 00 00: mov word ptr [esi + 0x37c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FE: mov ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfe
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 90 54 1C 10: idiv dword ptr [0x101c5490]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x100f309a
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FA: mov ax, word ptr [esi - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfa
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 94 54 1C 10: idiv dword ptr [0x101c5494]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7A 03 00 00: mov word ptr [esi + 0x37a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FC: mov ax, word ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfc
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 98 54 1C 10: idiv dword ptr [0x101c5498]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7C 03 00 00: mov word ptr [esi + 0x37c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FE: mov ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfe
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D 9C 54 1C 10: idiv dword ptr [0x101c549c]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x100f309a
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FA: mov ax, word ptr [esi - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfa
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D B8 54 1C 10: idiv dword ptr [0x101c54b8]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7A 03 00 00: mov word ptr [esi + 0x37a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FC: mov ax, word ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfc
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D BC 54 1C 10: idiv dword ptr [0x101c54bc]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7C 03 00 00: mov word ptr [esi + 0x37c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FE: mov ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfe
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D C0 54 1C 10: idiv dword ptr [0x101c54c0]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes EB 7E: jmp 0x100f309a
        __asm _emit 0xeb
        __asm _emit 0x7e
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FA: mov ax, word ptr [esi - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfa
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D C4 54 1C 10: idiv dword ptr [0x101c54c4]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7A 03 00 00: mov word ptr [esi + 0x37a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FC: mov ax, word ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfc
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D C8 54 1C 10: idiv dword ptr [0x101c54c8]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7C 03 00 00: mov word ptr [esi + 0x37c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FE: mov ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfe
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D CC 54 1C 10: idiv dword ptr [0x101c54cc]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes EB 3E: jmp 0x100f309a
        __asm _emit 0xeb
        __asm _emit 0x3e
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FA: mov ax, word ptr [esi - 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfa
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D D0 54 1C 10: idiv dword ptr [0x101c54d0]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7A 03 00 00: mov word ptr [esi + 0x37a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FC: mov ax, word ptr [esi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfc
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D D4 54 1C 10: idiv dword ptr [0x101c54d4]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7C 03 00 00: mov word ptr [esi + 0x37c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 46 FE: mov ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfe
        imul eax, ebx
        cdq
        ; Exact mapped bytes F7 3D D8 54 1C 10: idiv dword ptr [0x101c54d8]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 7E 03 00 00: mov word ptr [esi + 0x37e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 20h]
        inc eax
        add edi, 4
        add esi, 1ch
        cmp eax, 20h
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes 0F 8C B3 F9 FF FF: jl 0x100f2a74
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb3
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        xor eax, eax
        mov esi, dword ptr [esp + 14h]
        xor edi, edi
        ; Exact mapped bytes 66 8B 82 B4 07 00 00: mov ax, word ptr [edx + 0x7b4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [edx + 7b4h]
        cdq
        ; Exact mapped bytes F7 3D 40 54 1C 10: idiv dword ptr [0x101c5440]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 45 00: mov word ptr [ebp], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 B6 07 00 00: mov ax, word ptr [esi + 0x7b6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cdq
        ; Exact mapped bytes F7 3D 44 54 1C 10: idiv dword ptr [0x101c5444]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 B6 07 00 00: mov word ptr [esi + 0x7b6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 B8 07 00 00: mov ax, word ptr [esi + 0x7b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cdq
        ; Exact mapped bytes F7 3D 48 54 1C 10: idiv dword ptr [0x101c5448]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 86 B8 07 00 00: mov word ptr [esi + 0x7b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        cmp eax, edi
        ; Exact mapped bytes 7E 74: jle 0x100f318f
        __asm _emit 0x7e
        __asm _emit 0x74
        dec eax
        cmp eax, 9
        ; Exact mapped bytes 77 4D: ja 0x100f316e
        __asm _emit 0x77
        __asm _emit 0x4d
        ; Exact mapped bytes FF 24 85 74 33 0F 10: jmp dword ptr [eax*4 + 0x100f3374]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x10
        mov eax, 3e8h
        ; Exact mapped bytes EB 44: jmp 0x100f3173
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, 2c3h
        ; Exact mapped bytes EB 3D: jmp 0x100f3173
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, 241h
        ; Exact mapped bytes EB 36: jmp 0x100f3173
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, 1f4h
        ; Exact mapped bytes EB 2F: jmp 0x100f3173
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, 1bfh
        ; Exact mapped bytes EB 28: jmp 0x100f3173
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, 198h
        ; Exact mapped bytes EB 21: jmp 0x100f3173
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, 179h
        ; Exact mapped bytes EB 1A: jmp 0x100f3173
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, 162h
        ; Exact mapped bytes EB 13: jmp 0x100f3173
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, 14dh
        ; Exact mapped bytes EB 0C: jmp 0x100f3173
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, 13ch
        ; Exact mapped bytes EB 05: jmp 0x100f3173
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 12ch
        imul eax, dword ptr [esp + 18h]
        mov ecx, eax
        mov eax, 10624dd3h
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov ebx, edx
        ; Exact mapped bytes EB 04: jmp 0x100f3193
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 18h]
        mov eax, dword ptr [esi + 0b58h]
        cmp eax, edi
        ; Exact mapped bytes 74 45: je 0x100f31e2
        __asm _emit 0x74
        __asm _emit 0x45
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 88 98 00 00 00: mov cx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 908h], ecx
        ; Exact mapped bytes 66 8B 90 9A 00 00 00: mov dx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, edx
        ; Exact mapped bytes 66 8B 8E 46 04 00 00: mov cx, word ptr [esi + 0x446]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, ecx
        mov ecx, eax
        shl ecx, 6
        add ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 90ch], edx
        ; Exact mapped bytes EB 0C: jmp 0x100f31ee
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [esi + 908h], edi
        mov dword ptr [esi + 90ch], edi
        mov eax, dword ptr [esi + 0b4ch]
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x100f3209
        __asm _emit 0x74
        __asm _emit 0x11
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 5A 03 00 00: mov cx, word ptr [eax + 0x35a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 910h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x100f3213
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 910h], 1
        mov edi, dword ptr [esi + 0b54h]
        xor ecx, ecx
        cmp edi, ecx
        ; Exact mapped bytes 74 75: je 0x100f3294
        __asm _emit 0x74
        __asm _emit 0x75
        cmp eax, ecx
        ; Exact mapped bytes 74 1E: je 0x100f3241
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 8B 48 68: mov cx, word ptr [eax + 0x68]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x68
        mov eax, 51eb851fh
        imul ecx, dword ptr [edi + 0a4h]
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov ecx, edx
        mov eax, 66666667h
        imul ebx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        lea eax, [edx + ecx]
        mov edx, dword ptr [esp + 24h]
        mov dword ptr [esi + 930h], eax
        mov ecx, dword ptr [edi + 9ch]
        push eax
        push 101ac714h
        lea ecx, [ecx + ecx*4]
        lea ecx, [edx + ecx*8]
        lea edx, [esp + 38h]
        push edx
        mov dword ptr [esi + 934h], ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 30h]
        push eax
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        xor ecx, ecx
        ; Exact mapped bytes EB 0C: jmp 0x100f32a0
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [esi + 930h], ecx
        mov dword ptr [esi + 934h], ecx
        mov dword ptr [esi + 914h], ecx
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E B8 07 00 00: mov cx, word ptr [esi + 0x7b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 3e8h
        cdq
        lea edi, [ecx + 64h]
        idiv edi
        test eax, eax
        mov dword ptr [esi + 91ch], eax
        ; Exact mapped bytes 75 05: jne 0x100f32c9
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 1
        mov dword ptr [esi + 91ch], eax
        mov eax, dword ptr [esi + 0b4ch]
        shr ecx, 1
        add ecx, 64h
        test eax, eax
        mov dword ptr [esi + 918h], ecx
        ; Exact mapped bytes 74 3B: je 0x100f331f
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        xor edx, edx
        ; Exact mapped bytes 66 8B 55 00: mov dx, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
    }
}
