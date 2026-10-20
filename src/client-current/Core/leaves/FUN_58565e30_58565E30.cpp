// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58565E30 .. +0x4BA bytes.
extern "C" __declspec(naked) void FUN_58565e30_58565E30() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1064h
        ; Exact mapped bytes E8 B3 BC 2C 00: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xbc
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 1030h], ecx
        mov eax, dword ptr [ebp - 1030h]
        ; Exact mapped bytes 66 8B 88 24 02 00 00: mov cx, word ptr [eax + 0x224]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 03: shr cx, 3
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x03
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        movzx edx, cx
        imul eax, edx, 64h
        mov dword ptr [ebp - 1054h], eax
        mov ecx, dword ptr [ebp - 1030h]
        ; Exact mapped bytes 66 8B 91 24 02 00 00: mov dx, word ptr [ecx + 0x224]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 09: shr dx, 9
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x09
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        imul ecx, eax, 64h
        mov dword ptr [ebp - 1048h], ecx
        mov edx, dword ptr [ebp - 1030h]
        ; Exact mapped bytes 66 8B 82 24 02 00 00: mov ax, word ptr [edx + 0x224]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 07: and ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x07
        movzx eax, ax
        cdq
        sub eax, edx
        sar eax, 1
        imul eax, dword ptr [ebp - 1048h]
        neg eax
        mov dword ptr [ebp - 1044h], eax
        mov ecx, dword ptr [ebp - 1030h]
        ; Exact mapped bytes 66 8B 91 24 02 00 00: mov dx, word ptr [ecx + 0x224]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 07: and dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        movzx eax, dx
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58565ed8
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x58565ede
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 17: jmp 0x58565ef5
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 1048h]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, dword ptr [ebp - 1044h]
        mov dword ptr [ebp - 1044h], eax
        mov dword ptr [ebp - 1040h], 0
        mov ecx, dword ptr [ebp - 1030h]
        mov eax, dword ptr [ecx + 0b8h]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 1050h], eax
        push 200h
        push 0
        lea edx, [ebp - 1024h]
        push edx
        ; Exact mapped bytes E8 E3 6E 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x6e
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1028h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58565f4b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 1028h]
        add eax, 1
        mov dword ptr [ebp - 1028h], eax
        cmp dword ptr [ebp - 1028h], 8
        ; Exact mapped bytes 0F 8D 0C 01 00 00: jge 0x58566064
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1040h]
        mov eax, dword ptr [ebp - 1054h]
        imul eax, dword ptr [ecx*4 + 589490f0h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 1028h]
        mov dword ptr [ebp + edx*4 - 24h], eax
        mov eax, dword ptr [ebp - 1040h]
        mov ecx, dword ptr [eax*4 + 5894c930h]
        mov dword ptr [ebp - 1060h], ecx
        mov edx, dword ptr [ebp - 1044h]
        mov dword ptr [ebp - 104ch], edx
        mov dword ptr [ebp - 103ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58565fb8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 103ch]
        add eax, 1
        mov dword ptr [ebp - 103ch], eax
        mov ecx, dword ptr [ebp - 1030h]
        ; Exact mapped bytes 66 8B 91 24 02 00 00: mov dx, word ptr [ecx + 0x224]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 07: and dx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x07
        movzx eax, dx
        cmp dword ptr [ebp - 103ch], eax
        ; Exact mapped bytes 73 65: jae 0x58566039
        __asm _emit 0x73
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 103ch]
        shl ecx, 6
        lea edx, [ebp + ecx - 1024h]
        mov eax, dword ptr [ebp - 1028h]
        mov ecx, dword ptr [ebp - 104ch]
        mov dword ptr [edx + eax*8], ecx
        mov eax, dword ptr [ebp - 1060h]
        imul eax, dword ptr [ebp - 1054h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 103ch]
        shl edx, 6
        lea ecx, [ebp + edx - 1024h]
        mov edx, dword ptr [ebp - 1028h]
        mov dword ptr [ecx + edx*8 + 4], eax
        mov eax, dword ptr [ebp - 104ch]
        add eax, dword ptr [ebp - 1048h]
        mov dword ptr [ebp - 104ch], eax
        ; Exact mapped bytes E9 70 FF FF FF: jmp 0x58565fa9
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1040h]
        add ecx, dword ptr [ebp - 1050h]
        mov dword ptr [ebp - 1040h], ecx
        mov eax, dword ptr [ebp - 1050h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 1050h], edx
        ; Exact mapped bytes E9 D8 FE FF FF: jmp 0x58565f3c
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1038h], 0
        mov dword ptr [ebp - 1064h], 64h
        mov dword ptr [ebp - 1028h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58566093
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 1028h]
        add edx, 1
        mov dword ptr [ebp - 1028h], edx
        cmp dword ptr [ebp - 1028h], 24h
        ; Exact mapped bytes 0F 8D 3B 02 00 00: jge 0x585662db
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1038h]
        mov ecx, dword ptr [eax*4 + 5894c930h]
        mov dword ptr [ebp - 105ch], ecx
        mov edx, dword ptr [ebp - 1038h]
        mov eax, dword ptr [edx*4 + 589490f0h]
        mov dword ptr [ebp - 1058h], eax
        mov dword ptr [ebp - 1034h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585660e1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 1034h]
        add ecx, 1
        mov dword ptr [ebp - 1034h], ecx
        mov edx, dword ptr [ebp - 1030h]
        ; Exact mapped bytes 66 8B 82 24 02 00 00: mov ax, word ptr [edx + 0x224]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 07: and ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x07
        movzx ecx, ax
        cmp dword ptr [ebp - 1034h], ecx
        ; Exact mapped bytes 0F 83 AF 01 00 00: jae 0x585662b0
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 102ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5856611c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 102ch]
        add edx, 1
        mov dword ptr [ebp - 102ch], edx
        cmp dword ptr [ebp - 102ch], 8
        ; Exact mapped bytes 0F 8D 82 01 00 00: jge 0x585662ab
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1034h]
        shl eax, 6
        lea ecx, [ebp + eax - 1024h]
        mov edx, dword ptr [ebp - 102ch]
        mov eax, dword ptr [ebp - 105ch]
        imul eax, dword ptr [ecx + edx*8]
        mov ecx, dword ptr [ebp - 1034h]
        shl ecx, 6
        lea edx, [ebp + ecx - 1024h]
        mov ecx, dword ptr [ebp - 102ch]
        mov esi, dword ptr [ebp - 1058h]
        imul esi, dword ptr [edx + ecx*8 + 4]
        sub eax, esi
        cdq
        mov ecx, 186a0h
        idiv ecx
        imul edx, dword ptr [ebp - 1034h], 900h
        mov ecx, dword ptr [ebp - 1030h]
        lea edx, [ecx + edx + 3e4h]
        imul ecx, dword ptr [ebp - 102ch], 120h
        add edx, ecx
        mov ecx, dword ptr [ebp - 1028h]
        mov dword ptr [edx + ecx*8], eax
        mov edx, dword ptr [ebp - 1034h]
        shl edx, 6
        lea eax, [ebp + edx - 1024h]
        mov ecx, dword ptr [ebp - 102ch]
        mov edx, dword ptr [ebp - 1058h]
        imul edx, dword ptr [eax + ecx*8]
        mov eax, dword ptr [ebp - 1034h]
        shl eax, 6
        lea ecx, [ebp + eax - 1024h]
        mov eax, dword ptr [ebp - 102ch]
        mov esi, dword ptr [ebp - 105ch]
        imul esi, dword ptr [ecx + eax*8 + 4]
        add edx, esi
        mov eax, edx
        cdq
        mov ecx, 30d40h
        idiv ecx
        imul edx, dword ptr [ebp - 1034h], 900h
        mov ecx, dword ptr [ebp - 1030h]
        lea edx, [ecx + edx + 3e4h]
        imul ecx, dword ptr [ebp - 102ch], 120h
        add edx, ecx
        mov ecx, dword ptr [ebp - 1028h]
        mov dword ptr [edx + ecx*8 + 4], eax
        mov edx, dword ptr [ebp - 102ch]
        mov eax, dword ptr [ebp + edx*4 - 24h]
        add eax, 32h
        cdq
        mov ecx, 0c8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 1030h]
        ; Exact mapped bytes 66 8B 82 26 02 00 00: mov ax, word ptr [edx + 0x226]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx eax, ax
        cdq
        sub eax, edx
        sar eax, 1
        add ecx, eax
        imul edx, dword ptr [ebp - 1034h], 900h
        mov eax, dword ptr [ebp - 1030h]
        lea edx, [eax + edx + 3e4h]
        imul eax, dword ptr [ebp - 102ch], 120h
        add edx, eax
        mov eax, dword ptr [ebp - 1028h]
        add ecx, dword ptr [edx + eax*8 + 4]
        imul edx, dword ptr [ebp - 102ch], 120h
        imul eax, dword ptr [ebp - 1034h], 900h
        mov esi, dword ptr [ebp - 1030h]
        lea eax, [esi + eax + 3e4h]
        add eax, edx
        mov edx, dword ptr [ebp - 1028h]
        mov dword ptr [eax + edx*8 + 4], ecx
        ; Exact mapped bytes E9 62 FE FF FF: jmp 0x5856610d
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 22 FE FF FF: jmp 0x585660d2
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1038h]
        add eax, dword ptr [ebp - 1064h]
        mov dword ptr [ebp - 1038h], eax
        mov eax, dword ptr [ebp - 1038h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 1038h], edx
        ; Exact mapped bytes E9 A9 FD FF FF: jmp 0x58566084
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6A AD 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xad
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
