// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585341D0 .. +0x293 bytes.
extern "C" __declspec(naked) void FUN_585341d0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 140h
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
        mov dword ptr [ebp - 124h], ecx
        ; Exact mapped bytes 0F B6 05 3C 73 94 58: movzx eax, byte ptr [0x5894733c]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 59 02 00 00: je 0x58534453
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 3C 73 94 58 00: mov byte ptr [0x5894733c], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        mov ecx, 58947340h
        ; Exact mapped bytes E8 A5 06 00 00: call 0x585348b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        mov dword ptr [ebp - 128h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5853422c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 128h]
        add ecx, 1
        mov dword ptr [ebp - 128h], ecx
        mov edx, dword ptr [ebp - 128h]
        cmp edx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 0F 8D 04 01 00 00: jge 0x58534342
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 128h]
        push eax
        mov ecx, 58947340h
        ; Exact mapped bytes E8 11 05 00 00: call 0x58534760
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 47h
        mov esi, eax
        lea edi, [ebp - 120h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea ecx, [ebp - 0a0h]
        push ecx
        ; Exact mapped bytes E8 86 DD FE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        push 20h
        mov edx, dword ptr [ebp - 128h]
        shl edx, 5
        mov eax, dword ptr [ebp - 124h]
        lea ecx, [eax + edx + 8758h]
        push ecx
        ; Exact mapped bytes E8 F4 FE 27 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 128h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 124h]
        lea edx, [ecx + eax + 256h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 124h]
        lea eax, [edx + ecx + 995ch]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + ecx*4 + 11a68h], 0
        ; Exact mapped bytes 74 55: je 0x5853433d
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes C6 05 3C 73 94 58 00: mov byte ptr [0x5894733c], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + eax*4 + 11a68h]
        mov dword ptr [ebp - 134h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ecx + eax*4 + 8458h]
        push edx
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 07 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov eax, dword ptr [ebp - 130h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 24 29 F5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x29
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DB FE FF FF: jmp 0x5853421d
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 124h]
        cmp dword ptr [ecx + 24ch], 0
        ; Exact mapped bytes 7D 1A: jge 0x5853436b
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 24ch], 0
        ; Exact mapped bytes C7 05 38 D2 8F 58 00 00 00 00: mov dword ptr [0x588fd238], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 24ch]
        mov edx, dword ptr [ebp - 124h]
        cmp dword ptr [edx + ecx*4 + 11a68h], 0
        ; Exact mapped bytes 74 2D: je 0x585343b4
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax + 24ch]
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx + ecx*4 + 11a68h]
        mov dword ptr [ebp - 138h], eax
        push 3
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 8D B4 F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 38 D2 8F 58: mov ecx, dword ptr [0x588fd238]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        shl ecx, 5
        mov edx, dword ptr [ebp - 124h]
        lea eax, [edx + ecx + 8758h]
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes 8B 0D EC 1F 96 58: mov ecx, dword ptr [0x58961fec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 5E F7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        push 588a44fch
        mov edx, dword ptr [ebp - 140h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 1
        ; Exact mapped bytes 8B 0D EC 1F 96 58: mov ecx, dword ptr [0x58961fec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 1A F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x1a
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes A1 38 D2 8F 58: mov eax, dword ptr [0x588fd238]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        shl eax, 8
        mov ecx, dword ptr [ebp - 124h]
        lea edx, [ecx + eax + 256h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        add eax, 148h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 8B 15 38 D2 8F 58: mov edx, dword ptr [0x588fd238]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 124h]
        ; Exact mapped bytes 66 8B 94 50 56 82 00 00: mov dx, word ptr [eax + edx*2 + 0x8256]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x56
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 48 02 00 00: mov word ptr [ecx + 0x248], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F1 CB 2F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xcb
        __asm _emit 0x2f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
