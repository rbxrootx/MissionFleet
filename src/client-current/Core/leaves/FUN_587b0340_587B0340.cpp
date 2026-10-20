// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0340 .. +0x3CD bytes.
extern "C" __declspec(naked) void FUN_587b0340_587B0340() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 14h]
        push edi
        xor edi, edi
        lea ebx, [esi + 94h]
        mov dword ptr [esp + 10h], ebx
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 0F 8E 61 01 00 00: jle 0x587b04c2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi]
        cmp dword ptr [edi + 2ch], 2
        ; Exact mapped bytes 75 6A: jne 0x587b03d3
        __asm _emit 0x75
        __asm _emit 0x6a
        mov eax, 0f3ffc07fh
        xor edx, edx
        mov ecx, ebx
        test al, 1
        ; Exact mapped bytes 74 06: je 0x587b037c
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 39 00: cmp word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 75 46: jne 0x587b03c2
        __asm _emit 0x75
        __asm _emit 0x46
        inc edx
        shr eax, 1
        add ecx, 4
        cmp edx, 1fh
        ; Exact mapped bytes 7E EB: jle 0x587b0372
        __asm _emit 0x7e
        __asm _emit 0xeb
        ; Exact mapped bytes 66 83 BE B8 00 00 00 00: cmp word ptr [esi + 0xb8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 38: jne 0x587b03c9
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 66 83 BE BC 00 00 00 00: cmp word ptr [esi + 0xbc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2E: jne 0x587b03c9
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 66 83 BE C8 00 00 00 00: cmp word ptr [esi + 0xc8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x587b03c9
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, 20h
        lea eax, [esi + 114h]
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x587b03c9
        __asm _emit 0x75
        __asm _emit 0x13
        inc ecx
        add eax, 4
        cmp ecx, 100h
        ; Exact mapped bytes 7C EE: jl 0x587b03b0
        __asm _emit 0x7c
        __asm _emit 0xee
        xor eax, eax
        mov dword ptr [edi + 2ch], eax
        ; Exact mapped bytes EB 0E: jmp 0x587b03d7
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, 1
        mov dword ptr [edi + 2ch], eax
        ; Exact mapped bytes EB 04: jmp 0x587b03d7
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 10h], ebx
        lea eax, [esi + 0b18h]
        push eax
        push esi
        ; Exact mapped bytes E8 8C 05 00 00: call 0x587b0970
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 0b24h]
        push eax
        push esi
        ; Exact mapped bytes E8 7F 05 00 00: call 0x587b0970
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 0b1ch]
        push ebx
        push esi
        ; Exact mapped bytes E8 62 10 00 00: call 0x587b1460
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 0b28h]
        lea ebp, [esi + 988h]
        push ebp
        push esi
        ; Exact mapped bytes E8 4F 10 00 00: call 0x587b1460
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 0b30h]
        push eax
        push esi
        ; Exact mapped bytes E8 52 05 00 00: call 0x587b0970
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 30h
        mov edi, 12h
        mov ecx, 588bc9c4h
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ecx + 2]
        ; Exact mapped bytes 66 83 BC 86 7E 0A 00 00 00: cmp word ptr [esi + eax*4 + 0xa7e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 47: jne 0x587b0486
        __asm _emit 0x75
        __asm _emit 0x47
        movzx eax, byte ptr [ecx + 1]
        ; Exact mapped bytes 66 83 BC 86 7E 0A 00 00 00: cmp word ptr [esi + eax*4 + 0xa7e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 37: jne 0x587b0485
        __asm _emit 0x75
        __asm _emit 0x37
        movzx eax, byte ptr [ecx]
        ; Exact mapped bytes 66 83 BC 86 7E 0A 00 00 00: cmp word ptr [esi + eax*4 + 0xa7e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x587b0480
        __asm _emit 0x75
        __asm _emit 0x24
        movzx eax, byte ptr [ecx - 1]
        ; Exact mapped bytes 66 83 BC 86 7E 0A 00 00 00: cmp word ptr [esi + eax*4 + 0xa7e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbc
        __asm _emit 0x86
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x587b047b
        __asm _emit 0x75
        __asm _emit 0x10
        sub ecx, 4
        sub edi, 4
        cmp ecx, 588bc9b5h
        ; Exact mapped bytes 7D B7: jge 0x587b0430
        __asm _emit 0x7d
        __asm _emit 0xb7
        ; Exact mapped bytes EB 0B: jmp 0x587b0486
        __asm _emit 0xeb
        __asm _emit 0x0b
        sub edi, 3
        ; Exact mapped bytes EB 06: jmp 0x587b0486
        __asm _emit 0xeb
        __asm _emit 0x06
        sub edi, 2
        ; Exact mapped bytes EB 01: jmp 0x587b0486
        __asm _emit 0xeb
        __asm _emit 0x01
        dec edi
        mov ecx, dword ptr [esi + 16ach]
        lea eax, [edi*2 + 11h]
        add eax, edi
        add ecx, 0ah
        add dword ptr [esi + 16a8h], eax
        mov edx, dword ptr [esi + 16a8h]
        shr ecx, 3
        lea edx, [edx + 0ah]
        shr edx, 3
        cmp ecx, edx
        ; Exact mapped bytes 76 09: jbe 0x587b04ba
        __asm _emit 0x76
        __asm _emit 0x09
        cmp dword ptr [esi + 88h], 4
        ; Exact mapped bytes 75 02: jne 0x587b04bc
        __asm _emit 0x75
        __asm _emit 0x02
        mov edx, ecx
        mov eax, dword ptr [esp + 20h]
        ; Exact mapped bytes EB 0D: jmp 0x587b04cf
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [esp + 10h], ebx
        lea ecx, [eax + 5]
        mov edx, ecx
        add eax, 4
        cmp eax, edx
        ; Exact mapped bytes 0F 87 F4 00 00 00: ja 0x587b05ce
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x587b05ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [esi + 16bch]
        movzx ebx, ax
        ; Exact mapped bytes 66 8B C3: mov ax, bx
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 66 D3 E0: shl ax, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0B 86 B8 16 00 00: or ax, word ptr [esi + 0x16b8]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, ax
        cmp ecx, 0dh
        ; Exact mapped bytes 7E 3D: jle 0x587b0545
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 66 89 96 B8 16 00 00: mov word ptr [esi + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ecx + eax], dl
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov al, byte ptr [esi + 16b9h]
        mov dword ptr [esi + 14h], edx
        mov byte ptr [edx + ecx], al
        mov cl, 10h
        sub cl, byte ptr [esi + 16bch]
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes 66 D3 EB: shr bx, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xeb
        add dword ptr [esi + 16bch], -0dh
        movzx eax, bx
        ; Exact mapped bytes EB 0B: jmp 0x587b0550
        __asm _emit 0xeb
        __asm _emit 0x0b
        lea eax, [ecx + 3]
        mov dword ptr [esi + 16bch], eax
        mov eax, edx
        push esi
        ; Exact mapped bytes 66 89 86 B8 16 00 00: mov word ptr [esi + 0x16b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A3 03 00 00: call 0x587b0900
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 14h]
        add esp, 4
        mov eax, dword ptr [esi + 8]
        mov ebx, dword ptr [esp + 20h]
        mov byte ptr [ecx + eax], bl
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc edx
        mov dword ptr [esi + 14h], edx
        movzx ebx, bx
        mov ecx, ebx
        not ebx
        shr ecx, 8
        mov byte ptr [edx + eax], cl
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc edx
        mov ecx, dword ptr [esp + 20h]
        mov dword ptr [esi + 14h], edx
        not cl
        shr ebx, 8
        mov byte ptr [edx + eax], cl
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc ecx
        mov dword ptr [esi + 14h], ecx
        mov byte ptr [ecx + eax], bl
        mov ecx, dword ptr [esi + 14h]
        mov ebx, dword ptr [esp + 20h]
        inc ecx
        mov dword ptr [esi + 14h], ecx
        test ebx, ebx
        ; Exact mapped bytes 74 10: je 0x587b05c6
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [esi + 8]
        push ebx
        add eax, ecx
        push ebp
        push eax
        ; Exact mapped bytes E8 CD C2 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        add dword ptr [esi + 14h], ebx
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x587b06ee
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        lea ebx, [esi + 16b8h]
        mov ebp, dword ptr [esi + 16bch]
        cmp ecx, edx
        movzx eax, ax
        mov ecx, ebp
        ; Exact mapped bytes 75 76: jne 0x587b065d
        __asm _emit 0x75
        __asm _emit 0x76
        add eax, 2
        movzx edi, ax
        ; Exact mapped bytes 66 8B C7: mov ax, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 66 D3 E0: shl ax, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe0
        movzx ecx, word ptr [ebx]
        ; Exact mapped bytes 66 0B C1: or ax, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc1
        movzx edx, ax
        cmp ebp, 0dh
        ; Exact mapped bytes 7E 36: jle 0x587b0637
        __asm _emit 0x7e
        __asm _emit 0x36
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 66 89 13: mov word ptr [ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x13
        mov byte ptr [ecx + eax], dl
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov al, byte ptr [ebx + 1]
        mov dword ptr [esi + 14h], edx
        mov byte ptr [edx + ecx], al
        mov cl, 10h
        sub cl, byte ptr [esi + 16bch]
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes 66 D3 EF: shr di, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xef
        add dword ptr [esi + 16bch], -0dh
        movzx eax, di
        ; Exact mapped bytes EB 0B: jmp 0x587b0642
        __asm _emit 0xeb
        __asm _emit 0x0b
        lea eax, [ebp + 3]
        mov dword ptr [esi + 16bch], eax
        mov eax, edx
        push 588bce48h
        push 588bc9c8h
        push esi
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes E8 9B 05 00 00: call 0x587b0bf0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x587b06ee
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 4
        movzx eax, ax
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 66 D3 E0: shl ax, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe0
        movzx ecx, word ptr [ebx]
        ; Exact mapped bytes 66 0B C1: or ax, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc1
        movzx edx, ax
        cmp ebp, 0dh
        ; Exact mapped bytes 7E 3A: jle 0x587b06b2
        __asm _emit 0x7e
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 66 89 13: mov word ptr [ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x13
        mov byte ptr [ecx + eax], dl
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov al, byte ptr [ebx + 1]
        mov dword ptr [esi + 14h], edx
        mov byte ptr [edx + ecx], al
        mov cl, 10h
        sub cl, byte ptr [esi + 16bch]
        mov eax, dword ptr [esp + 20h]
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes 66 D3 E8: shr ax, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe8
        add dword ptr [esi + 16bch], -0dh
        movzx eax, ax
        ; Exact mapped bytes EB 0B: jmp 0x587b06bd
        __asm _emit 0xeb
        __asm _emit 0x0b
        lea eax, [ebp + 3]
        mov dword ptr [esi + 16bch], eax
        mov eax, edx
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        lea eax, [edi + 1]
        push eax
        mov eax, dword ptr [esi + 0b28h]
        inc eax
        push eax
        mov eax, dword ptr [esi + 0b1ch]
        inc eax
        push eax
        push esi
        ; Exact mapped bytes E8 86 0E 00 00: call 0x587b1560
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 988h]
        push eax
        push dword ptr [esp + 24h]
        push esi
        ; Exact mapped bytes E8 05 05 00 00: call 0x587b0bf0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        push esi
        ; Exact mapped bytes E8 0C 0C 00 00: call 0x587b1300
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [esp + 24h], 0
        ; Exact mapped bytes 74 09: je 0x587b0707
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 FC 01 00 00: call 0x587b0900
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
