// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E7390 .. +0x436 bytes.
extern "C" __declspec(naked) void FUN_100e7390_100E7390() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 130h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        cmp dword ptr [esi + 1dch], ebx
        ; Exact mapped bytes 0F 84 FF 03 00 00: je 0x100e77af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 0ch]
        cmp eax, ebx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 84 EB 03 00 00: je 0x100e77af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        mov ecx, edi
        ; Exact mapped bytes E8 F1 71 00 00: call 0x100ee5c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C5 03 00 00: je 0x100e779c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 18h], ebx
        mov dword ptr [esp + 38h], ebx
        cmp dword ptr [eax + 21a34h], ebx
        ; Exact mapped bytes 75 21: jne 0x100e740d
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [eax + 21710h], ebx
        ; Exact mapped bytes 7E 19: jle 0x100e740d
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, dword ptr [eax + 10560h]
        and cl, 1
        neg cl
        sbb ecx, ecx
        and ecx, 0fffffff7h
        add ecx, 0ah
        mov dword ptr [esp + 34h], ecx
        ; Exact mapped bytes EB 08: jmp 0x100e7415
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 34h], 1
        lea eax, [edi + 0f7ch]
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esp + 3ch], eax
        mov ecx, dword ptr [eax + 8]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 C1 02 00 00: je 0x100e76ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [eax]
        test ebx, ebx
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes 0F 84 B3 02 00 00: je 0x100e76ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x100e7442
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 14h]
        mov edi, dword ptr [ebx + 0ch]
        mov ecx, edi
        ; Exact mapped bytes E8 74 24 F2 FF: call 0x100098c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x100e7540
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 334h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        mov ecx, dword ptr [esi + 1dch]
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov ebp, edx
        mov edx, dword ptr [esi + 90h]
        imul edx
        sar edx, 7
        mov dword ptr [esp + 28h], ebp
        mov ebp, edx
        shr ebp, 1fh
        mov eax, edx
        mov edx, dword ptr [esp + 28h]
        add eax, ebp
        sub eax, edx
        cdq
        xor eax, edx
        shl ecx, 1
        sub eax, edx
        mov dword ptr [esp + 24h], ecx
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 97 00 00 00: jge 0x100e7540
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D EC 55 1C 10: mov ebp, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ebp + ebp*4]
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov eax, ecx
        shr eax, 1fh
        add ecx, eax
        mov eax, dword ptr [esi + 88h]
        cdq
        idiv ecx
        lea ecx, [ebp + ebp*2]
        lea ebp, [ebp + ecx*4]
        lea ecx, [ebp + ebp*8]
        mov ebx, eax
        mov eax, dword ptr [edi + 4]
        sub ebx, eax
        mov eax, 51eb851fh
        imul ecx
        mov eax, dword ptr [esi + 8ch]
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        cdq
        idiv ecx
        mov edx, dword ptr [edi + 4a0h]
        mov ecx, eax
        mov eax, 57619f1h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        sub ecx, edx
        mov eax, ecx
        imul eax, ecx
        mov ecx, ebx
        imul ecx, ebx
        mov ebx, dword ptr [esp + 24h]
        add eax, ecx
        mov edx, ebx
        mov dword ptr [esp + 28h], eax
        imul edx, ebx
        cmp edx, eax
        ; Exact mapped bytes 7F 18: jg 0x100e7554
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ebx, dword ptr [esp + 14h]
        mov eax, dword ptr [ebx + 8]
        test eax, eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 85 EF FE FF FF: jne 0x100e743e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B 01 00 00: jmp 0x100e76ef
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 28: fild dword ptr [esp + 0x28]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes DD 5C 24 28: fstp qword ptr [esp + 0x28]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push edx
        push eax
        mov dword ptr [esp + 2ch], ecx
        ; Exact mapped bytes E8 36 52 08 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E8 2B 52 08 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1c0h]
        push eax
        xor ecx, 0aah
        push ebx
        lea eax, [ecx*8]
        sub eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        ; Exact mapped bytes E8 7F A8 F3 FF: call 0x10021e20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa8
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 14h
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 64 2F F2 FF: call 0x1000a510
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x2f
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 05 02 00 00: je 0x100e77b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test byte ptr [ecx + 368h], 80h
        ; Exact mapped bytes 0F 84 1C 01 00 00: je 0x100e76e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 23ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x100e76e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 74h]
        mov dl, byte ptr [eax + 330h]
        cmp dl, byte ptr [ecx + 330h]
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x100e76e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 298h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 91 9C 00 00: call 0x100f1290
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 298h]
        mov ebp, dword ptr [esp + 34h]
        mov ecx, dword ptr [esi + 23ch]
        lea eax, [edx*8]
        sub eax, edx
        xor edx, edx
        lea eax, [eax + eax*4]
        shl eax, 1
        div ebp
        mov edx, dword ptr [ecx + 0eb0h]
        xor edx, 0aaaaaaaah
        add eax, edx
        xor edx, edx
        xor eax, 0aaaaaaaah
        mov dword ptr [ecx + 0eb0h], eax
        mov eax, dword ptr [edi + 298h]
        mov ebx, dword ptr [esi + 23ch]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        div ebp
        mov ecx, eax
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, dword ptr [ebx + 0ed0h]
        sub edx, eax
        mov dword ptr [ebx + 0ed0h], edx
        mov eax, dword ptr [esi + 23ch]
        mov ebx, dword ptr [eax + 0ed8h]
        add ebx, ecx
        mov dword ptr [eax + 0ed8h], ebx
        mov eax, dword ptr [esp + 20h]
        mov ecx, dword ptr [esi + 23ch]
        push eax
        push 80h
        ; Exact mapped bytes E8 6F 97 00 00: call 0x100f0e00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 23ch]
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 75 41: jne 0x100e76e3
        __asm _emit 0x75
        __asm _emit 0x41
        mov edi, dword ptr [edi + 298h]
        xor edx, edx
        mov ecx, dword ptr [ecx + 0eb0h]
        mov ebx, dword ptr [esp + 18h]
        lea eax, [edi + edi*4]
        xor ecx, 0aaaaaaaah
        inc ebx
        lea eax, [eax + eax*4]
        mov dword ptr [esp + 18h], ebx
        shl eax, 1
        div ebp
        mov dword ptr [esp + 38h], eax
        mov eax, 51eb851fh
        mul ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        shr edx, 5
        push edx
        ; Exact mapped bytes E8 4D 8B F8 FF: call 0x10070230
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        test eax, eax
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x100e77b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 3ch]
        inc ecx
        add eax, 10h
        cmp ecx, 8
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes 0F 8C 17 FD FF FF: jl 0x100e7423
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 23ch]
        mov eax, dword ptr [edx + 4]
        cmp eax, ecx
        ; Exact mapped bytes 75 7B: jne 0x100e779a
        __asm _emit 0x75
        __asm _emit 0x7b
        mov ecx, dword ptr [esp + 18h]
        xor ebx, ebx
        cmp ecx, ebx
        ; Exact mapped bytes 74 71: je 0x100e779a
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 2cch], ebx
        ; Exact mapped bytes 74 63: je 0x100e779a
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, 51eb851fh
        imul dword ptr [esp + 38h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push ecx
        lea ecx, [esp + 48h]
        push 101ac350h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 10h
        mov ecx, dword ptr [edx + 2cch]
        push 9fh
        push ebx
        push 1017f088h
        ; Exact mapped bytes E8 B5 19 F4 FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x19
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        lea eax, [esp + 44h]
        push 1
        mov ecx, dword ptr [ecx + 2cch]
        push eax
        ; Exact mapped bytes E8 98 19 F4 FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x19
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100e779c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, dword ptr [esp + 1ch]
        mov eax, dword ptr [edx + 78h]
        cmp eax, ebx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 85 15 FC FF FF: jne 0x100e73c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        pop edi
        mov eax, 1
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
