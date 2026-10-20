// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859E190 .. +0x52C bytes.
extern "C" __declspec(naked) void FUN_5859e190_5859E190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 48h], ecx
        mov eax, dword ptr [ebp - 48h]
        add eax, 0ac8h
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes F3 0F 10 81 C8 0A 00 00: movss xmm0, dword ptr [ecx + 0xac8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x81
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 59 05 60 4D 89 58: mulss xmm0, dword ptr [0x58894d60]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 2C D0: cvttss2si edx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 CD F6 F0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf6
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes F3 0F 10 82 C8 0A 00 00: movss xmm0, dword ptr [edx + 0xac8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x82
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 0F 59 05 60 4D 89 58: mulss xmm0, dword ptr [0x58894d60]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 2C C0: cvttss2si eax, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 A1 F6 F0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf6
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 80h], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 0acch]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 83 F6 F0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 12ch]
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 0acch]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 5F F6 F0 FF: call 0x584ad8c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf6
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 778h]
        ; Exact mapped bytes E8 91 46 F8 FF: call 0x58522900
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x46
        __asm _emit 0xf8
        __asm _emit 0xff
        push 64h
        push 0
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 0c8h]
        push edx
        ; Exact mapped bytes E8 8E EB 2A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xeb
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 10h]
        movzx ecx, word ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7C FD FF FF: call 0x5859e010
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], 80000000h
        mov dword ptr [ebp - 44h], 0ffffffach
        mov dword ptr [ebp - 40h], 0fffffeb5h
        mov dword ptr [ebp - 3ch], 15fh
        mov dword ptr [ebp - 38h], 0ffffff4ch
        mov dword ptr [ebp - 34h], 30fh
        mov dword ptr [ebp - 30h], 0ffffffddh
        mov dword ptr [ebp - 2ch], 1b0h
        mov dword ptr [ebp - 28h], 91h
        mov dword ptr [ebp - 24h], 51h
        mov dword ptr [ebp - 20h], 145h
        mov dword ptr [ebp - 1ch], 0fffffea1h
        mov dword ptr [ebp - 18h], 0b4h
        mov dword ptr [ebp - 14h], 0fffffceeh
        mov dword ptr [ebp - 10h], 1eh
        mov dword ptr [ebp - 0ch], 0fffffe4dh
        mov dword ptr [ebp - 8], 0ffffff6ah
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5859e320
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4ch]
        add edx, 1
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 8
        ; Exact mapped bytes 0F 8D 56 01 00 00: jge 0x5859e480
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + eax*4 + 4]
        mov dword ptr [ebp - 70h], edx
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859e349
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 54h]
        add eax, 1
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 5
        ; Exact mapped bytes 0F 8D 28 01 00 00: jge 0x5859e47b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859e365
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 58h]
        add ecx, 1
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 5
        ; Exact mapped bytes 0F 8D 07 01 00 00: jge 0x5859e476
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 70h]
        and edx, dword ptr [ebp - 88h]
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x5859e469
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 54h]
        imul ecx, dword ptr [eax + 0cch]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 0c4h]
        lea ecx, [eax + ecx*8]
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp + edx*8 - 44h]
        mov edx, dword ptr [ebp - 58h]
        add eax, dword ptr [ecx + edx*8]
        mov dword ptr [ebp - 0a8h], eax
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp + eax*8 - 40h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 54h]
        imul eax, dword ptr [edx + 0cch]
        mov edx, dword ptr [ebp - 48h]
        mov edx, dword ptr [edx + 0c4h]
        lea eax, [edx + eax*8]
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [eax + edx*8 + 4]
        lea ecx, [ecx + eax + 300h]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        imul ecx, dword ptr [ebp - 54h], 14h
        lea edx, [eax + ecx + 578h]
        mov eax, 0ah
        sub eax, dword ptr [ebp - 58h]
        add edx, eax
        mov dword ptr [ebp - 8ch], edx
        push 0
        movzx ecx, word ptr [ebp - 8ch]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 67 3A F1 FF: call 0x584b1e90
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x3a
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 20h
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 34: je 0x5859e469
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 F3 1A F1 FF: call 0x584aff30
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 5ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 778h]
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 58 43 F8 FF: call 0x585227c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x43
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 70h]
        shl ecx, 1
        mov dword ptr [ebp - 70h], ecx
        ; Exact mapped bytes E9 E6 FE FF FF: jmp 0x5859e35c
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 FE FF FF: jmp 0x5859e340
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 97 FE FF FF: jmp 0x5859e317
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 84 22 02 00 00: je 0x5859e6ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        movzx eax, word ptr [edx + 2]
        mov ecx, 0d4h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 9C 2B 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x2b
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp + 10h]
        movzx edx, word ptr [ecx + 2]
        imul eax, edx, 0d4h
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        ; Exact mapped bytes E8 BD E3 2A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe3
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5859e4e8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4ch]
        add eax, 1
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp + 10h]
        movzx edx, word ptr [ecx + 2]
        cmp dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes 0F 8D 97 01 00 00: jge 0x5859e68f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 4ch], 0d4h
        mov ecx, dword ptr [ebp - 60h]
        mov dl, byte ptr [ecx + eax + 80h]
        and dl, 7fh
        movzx eax, dl
        test eax, eax
        ; Exact mapped bytes 0F 84 73 01 00 00: je 0x5859e68a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 4ch], 0d4h
        mov edx, 0ffh
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 23 94 08 AE 00 00 00: and dx, word ptr [eax + ecx + 0xae]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4dh], dl
        movzx ecx, byte ptr [ebp - 4dh]
        and ecx, 0f0h
        sar ecx, 4
        mov dword ptr [ebp - 68h], ecx
        movzx edx, byte ptr [ebp - 4dh]
        and edx, 0fh
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        push 40000000h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 80 FA FF FF: call 0x5859dfe0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 68h]
        imul eax, dword ptr [edx + 0cch]
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx + 0c4h]
        lea eax, [edx + eax*8]
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [eax + ecx*8]
        mov dword ptr [ebp - 0b0h], edx
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 68h]
        imul ecx, dword ptr [eax + 0cch]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 0c4h]
        lea ecx, [eax + ecx*8]
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [ecx + edx*8 + 4]
        add eax, 300h
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        imul eax, dword ptr [ebp - 68h], 14h
        lea ecx, [edx + eax + 7d0h]
        mov edx, 0ah
        sub edx, dword ptr [ebp - 64h]
        add ecx, edx
        ; Exact mapped bytes 66 89 4D 94: mov word ptr [ebp - 0x6c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x94
        imul eax, dword ptr [ebp - 4ch], 0d4h
        add eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        movzx edx, word ptr [ebp - 6ch]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        push 8
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes E8 8D 38 F1 FF: call 0x584b1e90
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 20h
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ecx + 774h], eax
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 774h]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        mov dl, byte ptr [ecx + 80h]
        and dl, 7fh
        movzx eax, dl
        push eax
        mov ecx, dword ptr [ebp + 10h]
        movzx edx, word ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 74 17 F1 FF: call 0x584afdc0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 774h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 774h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 778h]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 774h]
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 37 41 F8 FF: call 0x585227c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x41
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 50 FE FF FF: jmp 0x5859e4df
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0a0h], ecx
        push 0d4h
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        ; Exact mapped bytes E8 8B 29 29 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x29
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 9A 29 29 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x29
        __asm _emit 0x29
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
