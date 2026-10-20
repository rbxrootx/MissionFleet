// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887039C .. +0x3C6 bytes.
extern "C" __declspec(naked) void FUN_5887039c_5887039C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push -1
        push 58892debh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 70h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov edx, eax
        mov esi, dword ptr [ebp + 10h]
        and eax, 3fh
        mov ebx, dword ptr [ebp + 18h]
        imul ecx, eax, 38h
        sar edx, 6
        mov dword ptr [ebp - 64h], esi
        mov dword ptr [ebp - 3ch], ebx
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [edx*4 + 589699b0h]
        mov dword ptr [ebp - 4ch], ecx
        mov eax, dword ptr [ecx + eax + 18h]
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp + 14h]
        add eax, esi
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes FF 15 98 41 89 58: call dword ptr [0x58894198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp byte ptr [ebx + 14h], 0
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 75 07: jne 0x58870415
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 8B 5A FE FF: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 0ch]
        mov esi, dword ptr [ebp + 8]
        mov edi, esi
        mov ecx, dword ptr [eax + 8]
        xor eax, eax
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        mov dword ptr [ebp - 74h], ecx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        mov eax, dword ptr [ebp - 64h]
        mov edx, eax
        mov dword ptr [ebp - 2ch], edx
        cmp eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes 0F 83 0D 03 00 00: jae 0x58870746
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 4ch]
        xor ebx, ebx
        mov dword ptr [ebp - 54h], ebx
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 2dh], al
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 40h], ebx
        mov dword ptr [ebp - 34h], 1
        cmp ecx, 0fde9h
        ; Exact mapped bytes 0F 85 30 01 00 00: jne 0x5887058f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov ecx, ebx
        add eax, 2eh
        add eax, edi
        mov dword ptr [ebp - 54h], eax
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 07: je 0x5887047c
        __asm _emit 0x74
        __asm _emit 0x07
        inc ecx
        inc eax
        cmp ecx, 5
        ; Exact mapped bytes 7C F4: jl 0x58870470
        __asm _emit 0x7c
        __asm _emit 0xf4
        mov edi, dword ptr [ebp - 50h]
        sub edi, edx
        mov dword ptr [ebp - 34h], ecx
        test ecx, ecx
        ; Exact mapped bytes 0F 8E A6 00 00 00: jle 0x58870532
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        movzx eax, byte ptr [eax]
        ; Exact mapped bytes 0F BE 80 68 75 90 58: movsx eax, byte ptr [eax + 0x58907568]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        inc eax
        mov dword ptr [ebp - 38h], eax
        sub eax, ecx
        mov dword ptr [ebp - 48h], eax
        cmp eax, edi
        ; Exact mapped bytes 0F 8F 25 02 00 00: jg 0x588706cf
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ebx
        mov ebx, dword ptr [ebp - 54h]
        mov al, byte ptr [ebx]
        mov byte ptr [ebp + edi - 18h], al
        inc edi
        inc ebx
        cmp edi, ecx
        ; Exact mapped bytes 7C F4: jl 0x588704af
        __asm _emit 0x7c
        __asm _emit 0xf4
        mov esi, dword ptr [ebp - 48h]
        xor ebx, ebx
        test esi, esi
        ; Exact mapped bytes 7E 13: jle 0x588704d7
        __asm _emit 0x7e
        __asm _emit 0x13
        push esi
        lea eax, [ebp - 18h]
        add eax, ecx
        push edx
        push eax
        ; Exact mapped bytes E8 BF C3 FD FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        add esp, 0ch
        mov edi, dword ptr [ebp - 4ch]
        mov edx, ebx
        mov esi, dword ptr [ebp - 44h]
        mov eax, dword ptr [esi*4 + 589699b0h]
        add eax, edi
        mov byte ptr [eax + edx + 2eh], bl
        inc edx
        cmp edx, ecx
        ; Exact mapped bytes 7C EE: jl 0x588704df
        __asm _emit 0x7c
        __asm _emit 0xee
        push dword ptr [ebp - 3ch]
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp - 18h]
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 7ch]
        xor eax, eax
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        cmp dword ptr [ebp - 38h], 4
        push ecx
        sete al
        ; Exact mapped bytes 66 0F 13 45 84: movlpd qword ptr [ebp - 0x7c], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x84
        inc eax
        push eax
        mov dword ptr [ebp - 34h], eax
        lea eax, [ebp - 6ch]
        push eax
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 C8 DB FF FF: call 0x5886e0ec
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, -1
        ; Exact mapped bytes 0F 84 16 02 00 00: je 0x58870746
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 51: jmp 0x58870583
        __asm _emit 0xeb
        __asm _emit 0x51
        movzx eax, byte ptr [edx]
        ; Exact mapped bytes 0F BE 80 68 75 90 58: movsx eax, byte ptr [eax + 0x58907568]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        inc eax
        mov dword ptr [ebp - 48h], eax
        cmp eax, edi
        ; Exact mapped bytes 0F 8F B4 01 00 00: jg 0x588706fc
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 3ch]
        xor ecx, ecx
        mov dword ptr [ebp - 38h], edx
        cmp eax, 4
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        lea eax, [ebp - 58h]
        ; Exact mapped bytes 66 0F 13 45 A8: movlpd qword ptr [ebp - 0x58], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xa8
        push eax
        sete cl
        lea eax, [ebp - 38h]
        inc ecx
        push ecx
        push eax
        lea eax, [ebp - 40h]
        mov dword ptr [ebp - 34h], ecx
        push eax
        ; Exact mapped bytes E8 78 DB FF FF: call 0x5886e0ec
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, -1
        ; Exact mapped bytes 0F 84 C6 01 00 00: je 0x58870746
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 2ch]
        add eax, dword ptr [ebp - 48h]
        dec eax
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x5887061e
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax*4 + 589699b0h]
        mov dword ptr [ebp - 48h], ecx
        mov ah, byte ptr [ecx + edi + 2dh]
        test ah, 4
        ; Exact mapped bytes 74 1E: je 0x588705c0
        __asm _emit 0x74
        __asm _emit 0x1e
        mov al, byte ptr [ecx + edi + 2eh]
        and ah, 0fbh
        push dword ptr [ebp - 3ch]
        mov byte ptr [ebp - 20h], al
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 1fh], al
        mov byte ptr [ecx + edi + 2dh], ah
        lea eax, [ebp - 20h]
        push 2
        push eax
        ; Exact mapped bytes EB 46: jmp 0x58870606
        __asm _emit 0xeb
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 3ch]
        movzx ecx, byte ptr [edx]
        mov eax, dword ptr [eax + 0ch]
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 66 39 1C 48: cmp word ptr [eax + ecx*2], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1c
        __asm _emit 0x48
        ; Exact mapped bytes 7D 2F: jge 0x58870600
        __asm _emit 0x7d
        __asm _emit 0x2f
        lea eax, [edx + 1]
        mov dword ptr [ebp - 38h], eax
        cmp eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes 0F 83 3D 01 00 00: jae 0x5887071d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 3ch]
        lea eax, [ebp - 40h]
        push 2
        push edx
        push eax
        ; Exact mapped bytes E8 81 D6 FF FF: call 0x5886dc70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x58870746
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes EB 1E: jmp 0x5887061e
        __asm _emit 0xeb
        __asm _emit 0x1e
        push dword ptr [ebp - 3ch]
        push 1
        push edx
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 61 D6 FF FF: call 0x5886dc70
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 0F 84 2B 01 00 00: je 0x58870746
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        push ebx
        push ebx
        inc eax
        push 5
        mov dword ptr [ebp - 2ch], eax
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp - 34h]
        lea eax, [ebp - 40h]
        push eax
        push ebx
        push dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 AF F5 FF FF: call 0x5886fbe9
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        mov dword ptr [ebp - 38h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x58870746
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        lea ecx, [ebp - 60h]
        push ecx
        push eax
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x5887073e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        sub eax, dword ptr [ebp - 64h]
        mov edx, dword ptr [ebp - 2ch]
        add eax, edx
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [ebp - 60h], eax
        ; Exact mapped bytes 0F 82 C6 00 00 00: jb 0x58870746
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 2dh], 0ah
        ; Exact mapped bytes 75 3C: jne 0x588706c2
        __asm _emit 0x75
        __asm _emit 0x3c
        push 0dh
        pop eax
        push ebx
        ; Exact mapped bytes 66 89 45 A4: mov word ptr [ebp - 0x5c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        lea eax, [ebp - 60h]
        push eax
        push 1
        lea eax, [ebp - 5ch]
        push eax
        push dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x5887073e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 60h], 1
        ; Exact mapped bytes 0F 82 93 00 00 00: jb 0x58870746
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 8]
        inc dword ptr [esi + 4]
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 54h], eax
        cmp edx, dword ptr [ebp - 50h]
        ; Exact mapped bytes 73 7F: jae 0x58870746
        __asm _emit 0x73
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E9 72 FD FF FF: jmp 0x58870441
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test edi, edi
        ; Exact mapped bytes 7E 24: jle 0x588706f7
        __asm _emit 0x7e
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 2ch]
        mov esi, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx*4 + 589699b0h]
        add edx, dword ptr [ebp - 4ch]
        mov cl, byte ptr [ebx + eax]
        add edx, ebx
        inc ebx
        mov byte ptr [edx + esi + 2eh], cl
        cmp ebx, edi
        ; Exact mapped bytes 7C E5: jl 0x588706d9
        __asm _emit 0x7c
        __asm _emit 0xe5
        mov esi, dword ptr [ebp + 8]
        add dword ptr [esi + 4], edi
        ; Exact mapped bytes EB 4A: jmp 0x58870746
        __asm _emit 0xeb
        __asm _emit 0x4a
        test edi, edi
        ; Exact mapped bytes 7E F7: jle 0x588706f7
        __asm _emit 0x7e
        __asm _emit 0xf7
        mov esi, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax*4 + 589699b0h]
        mov al, byte ptr [ebx + edx]
        add ecx, esi
        mov byte ptr [ecx + ebx + 2eh], al
        inc ebx
        cmp ebx, edi
        ; Exact mapped bytes 7C E8: jl 0x58870703
        __asm _emit 0x7c
        __asm _emit 0xe8
        ; Exact mapped bytes EB D7: jmp 0x588706f4
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 48h]
        mov cl, byte ptr [edx]
        mov byte ptr [eax + edi + 2eh], cl
        mov eax, dword ptr [ebp - 44h]
        mov eax, dword ptr [eax*4 + 589699b0h]
        or byte ptr [eax + edi + 2dh], 4
        mov eax, dword ptr [ebp - 54h]
        inc eax
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes EB 08: jmp 0x58870746
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi], eax
        mov eax, esi
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 F0 08 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}
