// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F6110 .. +0x60D bytes.
extern "C" __declspec(naked) void FUN_585f6110_585F6110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 164h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 110h], ecx
        mov byte ptr [ebp - 111h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx + 1bch]
        and edx, 1
        ; Exact mapped bytes 74 3C: je 0x585f6188
        __asm _emit 0x74
        __asm _emit 0x3c
        mov dword ptr [ebp - 120h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585f6167
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 120h]
        add eax, 1
        mov dword ptr [ebp - 120h], eax
        cmp dword ptr [ebp - 120h], 4
        ; Exact mapped bytes 7D 18: jge 0x585f6188
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 120h]
        mov edx, dword ptr [ebp - 120h]
        mov eax, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + edx*4]
        mov dword ptr [ebp + ecx*4 - 54h], edx
        ; Exact mapped bytes EB D0: jmp 0x585f6158
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov dword ptr [ebp - 124h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585f61a3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 124h]
        add eax, 1
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 124h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8D C7 01 00 00: jge 0x585f6379
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 118h]
        movzx eax, word ptr [edx + 10ah]
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 114h
        mov dword ptr [ebp - 164h], ecx
        mov esi, dword ptr [ebp - 118h]
        add esi, 44h
        mov ecx, 2eh
        lea edi, [ebp - 10ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 118h]
        mov eax, dword ptr [edx + 44h]
        shr eax, 1
        and eax, 1fh
        imul ecx, eax, 18h
        cmp dword ptr [ebp - 138h], ecx
        ; Exact mapped bytes 74 68: je 0x585f626e
        __asm _emit 0x74
        __asm _emit 0x68
        push 0
        push 588adc2ch
        push 588adc38h
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 6
        push ecx
        push 588adc7ch
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0
        push 588adc98h
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes 8B 0D 1C 5F 96 58: mov ecx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 61 23 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x61
        __asm _emit 0x23
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 110h]
        mov eax, dword ptr [edx + 1bch]
        and eax, 1
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x585f630f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 124h]
        and ecx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x585f6296
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0ffffffe0h
        inc ecx
        mov edx, 1fh
        sub edx, ecx
        mov eax, 1
        mov ecx, edx
        shl eax, cl
        mov dword ptr [ebp - 13ch], eax
        mov eax, dword ptr [ebp - 124h]
        cdq
        and edx, 1fh
        add eax, edx
        sar eax, 5
        mov ecx, dword ptr [ebp - 13ch]
        and ecx, dword ptr [ebp + eax*4 - 54h]
        ; Exact mapped bytes 74 24: je 0x585f62eb
        __asm _emit 0x74
        __asm _emit 0x24
        push 1
        mov edx, dword ptr [ebp - 118h]
        add edx, 114h
        push edx
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 38 E9 FF FF: call 0x585f4c20
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x585f630d
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 114h
        push ecx
        mov edx, dword ptr [ebp - 118h]
        push edx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 14 E9 FF FF: call 0x585f4c20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 21: jmp 0x585f6330
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        mov eax, dword ptr [ebp - 118h]
        add eax, 114h
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 F1 E8 FF FF: call 0x585f4c20
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 118h]
        mov al, byte ptr [edx + 109h]
        mov byte ptr [ebp - 111h], al
        mov ecx, dword ptr [ebp - 118h]
        movzx edx, word ptr [ecx + 10ah]
        mov eax, dword ptr [ebp - 118h]
        lea ecx, [eax + edx + 114h]
        mov edx, dword ptr [ebp - 118h]
        movzx eax, byte ptr [edx + 100h]
        shl eax, 5
        add ecx, eax
        mov dword ptr [ebp - 118h], ecx
        ; Exact mapped bytes E9 1B FE FF FF: jmp 0x585f6194
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA E6 E8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe6
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 140h], ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 16 5A 1C 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5a
        __asm _emit 0x1c
        __asm _emit 0x00
        push 8
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 E6 E8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe6
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 148h], edx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes FF 95 B8 FE FF FF: call dword ptr [ebp - 0x148]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 E8 FF FF: call 0x585f4c00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 05 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 46 60 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EF F3 E9 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        cmp dword ptr [eax + edx + 28h], 1
        ; Exact mapped bytes 75 10: jne 0x585f6420
        __asm _emit 0x75
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 05 00 00: call 0x585f69b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x585f642e
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 05 00 00: call 0x585f69b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 A7 F5 FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xa7
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 05 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        mov eax, dword ptr [ebp - 14ch]
        push eax
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 6E BD F5 FF: call 0x585521d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xbd
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 110h]
        cmp dword ptr [ecx + 114h], 0
        ; Exact mapped bytes 75 24: jne 0x585f6496
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 05 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        push 40000000h
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 7D AA 16 00: call 0x58760f10
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xaa
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 40: jmp 0x585f64d6
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 05 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 2C FA E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfa
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 110h]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 15ch], eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 1B CF 10 00: call 0x587033f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xcf
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 110h]
        movzx edx, word ptr [ecx + 1b6h]
        cmp edx, 2
        ; Exact mapped bytes 75 0C: jne 0x585f64f4
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 7D 97 FF FF: call 0x585efc70
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [eax + 0dch]
        mov edx, dword ptr [ecx]
        sub edx, 96h
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [eax + 0e8h], edx
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx + 0dch]
        mov eax, dword ptr [edx + 4]
        sub eax, 12ch
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [ecx + 0ech], eax
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [edx + 68h], 40000000h
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [eax + 0b4h], 0
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 04 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3D 6A E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x6a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [edx + 100h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 04 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BF 5B E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x5b
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        mov eax, dword ptr [ebp - 160h]
        push eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 5A 08 00: call 0x5867c090
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C F3 00 00: call 0x58605910
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 110h]
        cmp dword ptr [ecx + 114h], 0
        ; Exact mapped bytes 0F 85 2A 01 00 00: jne 0x585f66f2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp - 111h]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x585f666c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0F: je 0x585f65f7
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10ch]
        mov dword ptr [ebp - 130h], ecx
        mov edx, dword ptr [ebp - 110h]
        movzx eax, word ptr [edx + 110h]
        test eax, eax
        ; Exact mapped bytes 75 54: jne 0x585f665c
        __asm _emit 0x75
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D F2 E9 FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf2
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 74 10: je 0x585f6628
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D F2 E9 FF: call 0x58495830
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf2
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ch
        ; Exact mapped bytes 75 34: jne 0x585f665c
        __asm _emit 0x75
        __asm _emit 0x34
        cmp dword ptr [ebp - 130h], 3
        ; Exact mapped bytes 7D 0C: jge 0x585f663d
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 134h], 1
        ; Exact mapped bytes EB 0A: jmp 0x585f6647
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 67 F4 FF FF: call 0x585f5ac0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0E: jmp 0x585f666a
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 57 F4 FF FF: call 0x585f5ac0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1A: jmp 0x585f6686
        __asm _emit 0xeb
        __asm _emit 0x1a
        movzx edx, byte ptr [ebp - 111h]
        cmp edx, 2
        ; Exact mapped bytes 75 0E: jne 0x585f6686
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 7B F5 FF FF: call 0x585f5c00
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        movzx eax, byte ptr [ebp - 111h]
        and eax, 4
        ; Exact mapped bytes 74 60: je 0x585f66f2
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 03 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AC 5A E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5a
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 DA FE FF FF: mov word ptr [ebp - 0x126], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 03 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F3 68 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x68
        __asm _emit 0xe9
        __asm _emit 0xff
        mov byte ptr [ebp - 119h], al
        push 1
        movzx ecx, word ptr [ebp - 126h]
        push ecx
        movzx edx, byte ptr [ebp - 119h]
        push edx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 C0 EB FF FF: call 0x585f52a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 1F C4 10 00: call 0x58702b10
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc4
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx + 100h]
        push edx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 16 E0 FF FF: call 0x585f4720
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 39 A9 23 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x23
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
