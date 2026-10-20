// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ABF40 .. +0x580 bytes.
extern "C" __declspec(naked) void FUN_587abf40_587ABF40() {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 1ch]
        push edi
        lea ebx, [esi + 6ch]
        mov ebp, ebx
        mov edi, ebx
        mov eax, dword ptr [esi + 74h]
        cmp eax, 106h
        ; Exact mapped bytes 73 2B: jae 0x587abf87
        __asm _emit 0x73
        __asm _emit 0x2b
        push esi
        ; Exact mapped bytes E8 AE 19 00 00: call 0x587ad910
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        add esp, 4
        cmp eax, 106h
        ; Exact mapped bytes 73 0E: jae 0x587abf7d
        __asm _emit 0x73
        __asm _emit 0x0e
        cmp dword ptr [esp + 24h], 0
        ; Exact mapped bytes 0F 84 A3 02 00 00: je 0x587ac21d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 6ch]
        mov ebp, ebx
        test eax, eax
        ; Exact mapped bytes 0F 84 BF 03 00 00: je 0x587ac346
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        cmp eax, 3
        ; Exact mapped bytes 72 47: jb 0x587abfd5
        __asm _emit 0x72
        __asm _emit 0x47
        mov ebx, dword ptr [ebp]
        mov eax, dword ptr [esi + 38h]
        mov edi, dword ptr [esi + 48h]
        mov ecx, dword ptr [esi + 58h]
        mov edx, dword ptr [esi + 34h]
        movzx eax, byte ptr [eax + ebx + 2]
        and edx, ebx
        shl edi, cl
        mov ecx, dword ptr [esi + 40h]
        xor edi, eax
        and edi, dword ptr [esi + 54h]
        mov eax, dword ptr [esi + 44h]
        mov dword ptr [esi + 48h], edi
        ; Exact mapped bytes 66 8B 04 78: mov ax, word ptr [eax + edi*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x78
        ; Exact mapped bytes 66 89 04 51: mov word ptr [ecx + edx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x51
        mov ecx, dword ptr [esi + 34h]
        mov edx, dword ptr [ebp]
        and ecx, edx
        mov eax, dword ptr [esi + 40h]
        movzx edi, word ptr [eax + ecx*2]
        mov ecx, dword ptr [esi + 48h]
        mov eax, dword ptr [esi + 44h]
        ; Exact mapped bytes 66 89 14 48: mov word ptr [eax + ecx*2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 60h]
        mov edx, 2
        mov eax, dword ptr [esi + 70h]
        mov dword ptr [esi + 78h], ecx
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 60h], 2
        test edi, edi
        ; Exact mapped bytes 74 54: je 0x587ac045
        __asm _emit 0x74
        __asm _emit 0x54
        cmp ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 73 4C: jae 0x587ac045
        __asm _emit 0x73
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [esi + 2ch]
        sub ecx, edi
        sub eax, 106h
        cmp ecx, eax
        ; Exact mapped bytes 77 3B: ja 0x587ac045
        __asm _emit 0x77
        __asm _emit 0x3b
        push edi
        push esi
        ; Exact mapped bytes E8 7F 1B 00 00: call 0x587adb90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi + 60h], eax
        mov edx, eax
        cmp eax, 5
        ; Exact mapped bytes 77 27: ja 0x587ac045
        __asm _emit 0x77
        __asm _emit 0x27
        cmp dword ptr [esi + 88h], 1
        ; Exact mapped bytes 74 12: je 0x587ac039
        __asm _emit 0x74
        __asm _emit 0x12
        cmp eax, 3
        ; Exact mapped bytes 75 19: jne 0x587ac045
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [esi + 6ch]
        sub eax, dword ptr [esi + 70h]
        cmp eax, 1000h
        ; Exact mapped bytes 76 0C: jbe 0x587ac045
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [esi + 60h], 2
        mov edx, 2
        mov ebx, dword ptr [esi + 78h]
        cmp ebx, 3
        ; Exact mapped bytes 0F 82 D6 01 00 00: jb 0x587ac227
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, ebx
        ; Exact mapped bytes 0F 87 CE 01 00 00: ja 0x587ac227
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 74h]
        lea ebp, [esi + 6ch]
        mov ecx, dword ptr [ebp]
        add edi, -3
        mov eax, dword ptr [esi + 16a0h]
        add edi, ecx
        ; Exact mapped bytes 66 2B 4E 64: sub cx, word ptr [esi + 0x64]
        __asm _emit 0x66
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x64
        sub bl, 3
        ; Exact mapped bytes 66 49: dec cx
        __asm _emit 0x66
        __asm _emit 0x49
        mov dword ptr [esp + 20h], ebx
        movzx ebx, cx
        mov ecx, dword ptr [esi + 1698h]
        mov dword ptr [esp + 10h], edi
        mov byte ptr [ecx + eax], bl
        mov ecx, ebx
        inc dword ptr [esi + 16a0h]
        add ebx, 0ffffh
        mov edx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        shr ecx, 8
        mov byte ptr [edx + eax], cl
        inc dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        mov edx, dword ptr [esp + 20h]
        mov byte ptr [ecx + eax], dl
        mov ecx, 100h
        inc dword ptr [esi + 16a0h]
        movzx eax, dl
        movzx eax, byte ptr [eax + 588bc578h]
        ; Exact mapped bytes 66 FF 84 86 98 04 00 00: inc word ptr [esi + eax*4 + 0x498]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, bx
        ; Exact mapped bytes 66 3B D9: cmp bx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd9
        ; Exact mapped bytes 73 08: jae 0x587ac0f0
        __asm _emit 0x73
        __asm _emit 0x08
        mov al, byte ptr [eax + 588bc678h]
        ; Exact mapped bytes EB 09: jmp 0x587ac0f9
        __asm _emit 0xeb
        __asm _emit 0x09
        shr eax, 7
        mov al, byte ptr [eax + 588bc778h]
        movzx eax, al
        ; Exact mapped bytes 66 FF 84 86 88 09 00 00: inc word ptr [esi + eax*4 + 0x988]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 78h]
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esi + 16a4h]
        mov dword ptr [esp + 20h], eax
        mov eax, 1
        sub eax, ecx
        add dword ptr [esi + 74h], eax
        lea eax, [ecx - 2]
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp]
        inc ebx
        mov dword ptr [ebp], ebx
        cmp ebx, edi
        ; Exact mapped bytes 77 40: ja 0x587ac17b
        __asm _emit 0x77
        __asm _emit 0x40
        mov eax, dword ptr [esi + 38h]
        mov edi, dword ptr [esi + 48h]
        mov ecx, dword ptr [esi + 58h]
        mov edx, dword ptr [esi + 34h]
        movzx eax, byte ptr [ebx + eax + 2]
        shl edi, cl
        mov ecx, dword ptr [esi + 40h]
        xor edi, eax
        and edi, dword ptr [esi + 54h]
        and edx, ebx
        mov eax, dword ptr [esi + 44h]
        mov dword ptr [esi + 48h], edi
        movzx eax, word ptr [eax + edi*2]
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 89 04 51: mov word ptr [ecx + edx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x51
        mov edx, dword ptr [esi + 48h]
        mov ecx, dword ptr [esi + 44h]
        movzx eax, word ptr [ebp]
        ; Exact mapped bytes 66 89 04 51: mov word ptr [ecx + edx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x51
        mov ebx, dword ptr [ebp]
        add dword ptr [esi + 78h], -1
        ; Exact mapped bytes 75 AF: jne 0x587ac130
        __asm _emit 0x75
        __asm _emit 0xaf
        mov eax, dword ptr [esp + 20h]
        inc ebx
        mov dword ptr [esi + 68h], 0
        mov dword ptr [esi + 60h], 2
        mov dword ptr [esi + 6ch], ebx
        cmp dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 85 9B 01 00 00: jne 0x587ac33c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        test ecx, ecx
        ; Exact mapped bytes 78 07: js 0x587ac1af
        __asm _emit 0x78
        __asm _emit 0x07
        mov eax, dword ptr [esi + 38h]
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x587ac1b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0
        sub ebx, ecx
        push ebx
        push eax
        push esi
        ; Exact mapped bytes E8 83 41 00 00: call 0x587b0340
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi]
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esp + 30h], ebx
        mov edi, dword ptr [ebx + 1ch]
        push edi
        ; Exact mapped bytes E8 5E 41 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebx + 10h]
        add esp, 14h
        cmp dword ptr [edi + 14h], ebx
        cmovbe ebx, dword ptr [edi + 14h]
        test ebx, ebx
        ; Exact mapped bytes 74 2E: je 0x587ac211
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [esp + 20h]
        push ebx
        push dword ptr [edi + 10h]
        push dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 9D 06 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        add esp, 0ch
        add dword ptr [eax + 0ch], ebx
        add dword ptr [edi + 10h], ebx
        add dword ptr [eax + 14h], ebx
        sub dword ptr [eax + 10h], ebx
        sub dword ptr [edi + 14h], ebx
        ; Exact mapped bytes 75 06: jne 0x587ac211
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edi + 10h], eax
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 85 1F 01 00 00: jne 0x587ac33c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0ch
        ret
        cmp dword ptr [esi + 68h], 0
        lea ebp, [esi + 6ch]
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x587ac32f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 38h]
        mov eax, dword ptr [ebp]
        mov dl, byte ptr [ecx + eax - 1]
        mov eax, dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 1698h]
        mov byte ptr [ecx + eax], 0
        inc dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        mov byte ptr [ecx + eax], 0
        inc dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        mov byte ptr [ecx + eax], dl
        mov ecx, ebp
        inc dword ptr [esi + 16a0h]
        movzx eax, dl
        ; Exact mapped bytes 66 FF 84 86 94 00 00 00: inc word ptr [esi + eax*4 + 0x94]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 16a0h]
        cmp eax, dword ptr [esi + 16a4h]
        ; Exact mapped bytes 75 7A: jne 0x587ac314
        __asm _emit 0x75
        __asm _emit 0x7a
        mov edx, dword ptr [esi + 5ch]
        test edx, edx
        ; Exact mapped bytes 78 07: js 0x587ac2a8
        __asm _emit 0x78
        __asm _emit 0x07
        mov ecx, dword ptr [esi + 38h]
        add ecx, edx
        ; Exact mapped bytes EB 02: jmp 0x587ac2aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ebp]
        push 0
        sub eax, edx
        push eax
        push ecx
        push esi
        ; Exact mapped bytes E8 87 40 00 00: call 0x587b0340
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi]
        mov eax, dword ptr [ebp]
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esp + 30h], ebx
        mov edi, dword ptr [ebx + 1ch]
        push edi
        ; Exact mapped bytes E8 62 40 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebx + 10h]
        add esp, 14h
        cmp dword ptr [edi + 14h], ebx
        mov ecx, ebp
        cmovbe ebx, dword ptr [edi + 14h]
        test ebx, ebx
        ; Exact mapped bytes 74 33: je 0x587ac314
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [esp + 20h]
        push ebx
        push dword ptr [edi + 10h]
        push dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 9F 05 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        add esp, 0ch
        mov ecx, ebp
        add dword ptr [eax + 0ch], ebx
        add dword ptr [edi + 10h], ebx
        add dword ptr [eax + 14h], ebx
        sub dword ptr [eax + 10h], ebx
        sub dword ptr [edi + 14h], ebx
        ; Exact mapped bytes 75 09: jne 0x587ac314
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [edi + 8]
        lea ecx, [esi + 6ch]
        mov dword ptr [edi + 10h], eax
        mov eax, dword ptr [esi]
        inc dword ptr [ecx]
        dec dword ptr [esi + 74h]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 84 F8 FE FF FF: je 0x587ac21d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, ebp
        lea ebx, [esi + 6ch]
        ; Exact mapped bytes E9 23 FC FF FF: jmp 0x587abf52
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        inc dword ptr [ebp]
        dec dword ptr [esi + 74h]
        mov dword ptr [esi + 68h], 1
        mov edi, ebp
        lea ebx, [esi + 6ch]
        ; Exact mapped bytes E9 0C FC FF FF: jmp 0x587abf52
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 5C: je 0x587ac3a8
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [esi + 38h]
        mov eax, dword ptr [edi]
        mov dl, byte ptr [ecx + eax - 1]
        mov eax, dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 1698h]
        mov byte ptr [ecx + eax], 0
        inc dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        mov byte ptr [ecx + eax], 0
        inc dword ptr [esi + 16a0h]
        mov ecx, dword ptr [esi + 16a0h]
        mov eax, dword ptr [esi + 1698h]
        mov byte ptr [ecx + eax], dl
        inc dword ptr [esi + 16a0h]
        movzx eax, dl
        ; Exact mapped bytes 66 FF 84 86 94 00 00 00: inc word ptr [esi + eax*4 + 0x94]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 68h], 0
        mov ecx, dword ptr [edi]
        mov eax, 2
        cmp ecx, eax
        cmovb eax, ecx
        cmp dword ptr [esp + 24h], 4
        mov dword ptr [esi + 16b4h], eax
        ; Exact mapped bytes 75 79: jne 0x587ac43a
        __asm _emit 0x75
        __asm _emit 0x79
        mov edx, dword ptr [esi + 5ch]
        test edx, edx
        ; Exact mapped bytes 78 07: js 0x587ac3cf
        __asm _emit 0x78
        __asm _emit 0x07
        mov eax, dword ptr [esi + 38h]
        add eax, edx
        ; Exact mapped bytes EB 02: jmp 0x587ac3d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 1
        sub ecx, edx
        push ecx
        push eax
        push esi
        ; Exact mapped bytes E8 63 3F 00 00: call 0x587b0340
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi]
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [esi + 5ch], eax
        mov edi, dword ptr [ebp + 1ch]
        push edi
        ; Exact mapped bytes E8 42 3F 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 10h]
        add esp, 14h
        cmp dword ptr [edi + 14h], ebx
        cmovbe ebx, dword ptr [edi + 14h]
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x587ac425
        __asm _emit 0x74
        __asm _emit 0x26
        push ebx
        push dword ptr [edi + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 85 04 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        add dword ptr [ebp + 0ch], ebx
        add esp, 0ch
        add dword ptr [edi + 10h], ebx
        add dword ptr [ebp + 14h], ebx
        sub dword ptr [ebp + 10h], ebx
        sub dword ptr [edi + 14h], ebx
        ; Exact mapped bytes 75 06: jne 0x587ac425
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edi + 10h], eax
        mov eax, dword ptr [esi]
        xor ecx, ecx
        pop edi
        pop esi
        pop ebp
        cmp dword ptr [eax + 10h], ecx
        pop ebx
        setne cl
        lea eax, [ecx + 2]
        add esp, 0ch
        ret
        cmp dword ptr [esi + 16a0h], 0
        ; Exact mapped bytes 74 70: je 0x587ac4b3
        __asm _emit 0x74
        __asm _emit 0x70
        mov edx, dword ptr [esi + 5ch]
        test edx, edx
        ; Exact mapped bytes 78 07: js 0x587ac451
        __asm _emit 0x78
        __asm _emit 0x07
        mov eax, dword ptr [esi + 38h]
        add eax, edx
        ; Exact mapped bytes EB 02: jmp 0x587ac453
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0
        sub ecx, edx
        push ecx
        push eax
        push esi
        ; Exact mapped bytes E8 E1 3E 00 00: call 0x587b0340
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi]
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [esi + 5ch], eax
        mov edi, dword ptr [ebp + 1ch]
        push edi
        ; Exact mapped bytes E8 C0 3E 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 10h]
        add esp, 14h
        cmp dword ptr [edi + 14h], ebx
        cmovbe ebx, dword ptr [edi + 14h]
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x587ac4a7
        __asm _emit 0x74
        __asm _emit 0x26
        push ebx
        push dword ptr [edi + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 03 04 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        add dword ptr [ebp + 0ch], ebx
        add esp, 0ch
        add dword ptr [edi + 10h], ebx
        add dword ptr [ebp + 14h], ebx
        sub dword ptr [ebp + 10h], ebx
        sub dword ptr [edi + 14h], ebx
        ; Exact mapped bytes 75 06: jne 0x587ac4a7
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [edi + 10h], ecx
        mov ecx, dword ptr [esi]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 0F 84 6A FD FF FF: je 0x587ac21d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0ch
        ret
    }
}
