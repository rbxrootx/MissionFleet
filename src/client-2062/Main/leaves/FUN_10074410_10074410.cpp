// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10074410 .. +0x2FB bytes.
extern "C" __declspec(naked) void FUN_10074410_10074410() {
    __asm {
        sub esp, 0b4h
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr [esp + 0c0h]
        mov al, byte ptr [ebx + 1b8h]
        push esi
        test al, 1
        mov byte ptr [esp + 0fh], 0
        ; Exact mapped bytes 74 22: je 0x10074453
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [esp + 0cch]
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esp + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esp + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esp + 20h], edx
        mov eax, dword ptr [esp + 0c8h]
        mov dword ptr [esp + 10h], 0
        test eax, eax
        ; Exact mapped bytes 0F 8E 2E 01 00 00: jle 0x10074598
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea eax, [ebp + 44h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 95 AA 00 00 00: mov dx, word ptr [ebp + 0xaa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 17h
        mov esi, eax
        lea edi, [esp + 68h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [eax]
        shr eax, 1
        and eax, 1fh
        lea eax, [eax + eax*4]
        shl eax, 1
        cmp edx, eax
        ; Exact mapped bytes 74 5E: je 0x100744f2
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 0D DC 92 1C 10: mov ecx, dword ptr [0x101c92dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 35 8C 51 17 10: mov esi, dword ptr [0x1017518c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push 0
        push 1017f3bch
        push 101ab8a0h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea edx, [esp + 74h]
        lea eax, [ebp + 6]
        push edx
        push eax
        lea ecx, [esp + 30h]
        push 101ab884h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 DC 92 1C 10: mov eax, dword ptr [0x101c92dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 10h
        lea edx, [esp + 28h]
        push 0
        push 1017f3bch
        push edx
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 86 7C 0F 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7c
        __asm _emit 0x0f
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 90 51 17 10: call dword ptr [0x10175190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        test byte ptr [ebx + 1b8h], 1
        ; Exact mapped bytes 74 46: je 0x10074541
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [esp + 14h]
        mov edx, eax
        and edx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x1007450e
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffe0h
        inc edx
        mov ecx, 1fh
        mov esi, 1
        sub ecx, edx
        cdq
        and edx, 1fh
        add eax, edx
        shl esi, cl
        sar eax, 5
        test dword ptr [esp + eax*4 + 18h], esi
        ; Exact mapped bytes 74 0B: je 0x10074536
        __asm _emit 0x74
        __asm _emit 0x0b
        lea eax, [ebp + 0ach]
        push 1
        push eax
        ; Exact mapped bytes EB 14: jmp 0x1007454a
        __asm _emit 0xeb
        __asm _emit 0x14
        lea ecx, [ebp + 0ach]
        push 0
        push ecx
        ; Exact mapped bytes EB 09: jmp 0x1007454a
        __asm _emit 0xeb
        __asm _emit 0x09
        lea edx, [ebp + 0ach]
        push 0
        push edx
        push ebp
        mov ecx, ebx
        ; Exact mapped bytes E8 7E F2 FF FF: call 0x100737d0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebp + 0a9h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 95 AA 00 00 00: mov dx, word ptr [ebp + 0xaa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esp + 13h], al
        xor eax, eax
        add edx, ebp
        mov al, byte ptr [ebp + 0a4h]
        lea ecx, [eax*8]
        sub ecx, eax
        mov eax, dword ptr [esp + 14h]
        inc eax
        lea ebp, [edx + ecx*4 + 0ach]
        mov ecx, dword ptr [esp + 0cch]
        cmp eax, ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8C D4 FE FF FF: jl 0x1007446b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 8
        ; Exact mapped bytes 7E 0F: jle 0x100745b5
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100745b5
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes EB 02: jmp 0x100745b7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ecx + 20b00h]
        push eax
        ; Exact mapped bytes E8 1C B1 FC FF: call 0x1003f700
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 118h]
        xor esi, esi
        cmp eax, esi
        ; Exact mapped bytes 75 15: jne 0x10074605
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40000000h
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 6D 96 07 00: call 0x100edc70
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x10074621
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        push esi
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 174h]
        ; Exact mapped bytes E8 CF 15 05 00: call 0x100c5bf0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BB B6 01 00 00 02: cmp word ptr [ebx + 0x1b6], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 07: jne 0x10074632
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 9E 02 00 00: call 0x100748d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 0e0h]
        mov ecx, dword ptr [eax]
        sub ecx, 96h
        mov dword ptr [ebx + 0ech], ecx
        mov edx, dword ptr [eax + 4]
        sub edx, 12ch
        mov dword ptr [ebx + 6ch], 40000000h
        mov dword ptr [ebx + 0f0h], edx
        mov dword ptr [ebx + 0b8h], esi
        mov dword ptr [ebx + 0b4h], esi
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [eax + 4]
        mov dl, byte ptr [ecx + 330h]
        mov dword ptr [ebx + 104h], edx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 66 8B 91 2C 03 00 00: mov dx, word ptr [ecx + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 C5 94 02 00: call 0x1009db60
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebx + 118h], esi
        ; Exact mapped bytes 75 5C: jne 0x100746ff
        __asm _emit 0x75
        __asm _emit 0x5c
        test byte ptr [esp + 0fh], 1
        ; Exact mapped bytes 74 24: je 0x100746ce
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebx + 7ch]
        push 1
        or edx, 1
        mov dword ptr [ebx + 7ch], edx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 BE B0 07 00: call 0x100ef780
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 174h]
        push esi
        ; Exact mapped bytes E8 C2 16 05 00: call 0x100c5d90
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        test byte ptr [esp + 0fh], 4
        ; Exact mapped bytes 74 2A: je 0x100746ff
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 4]
        mov ecx, ebx
        ; Exact mapped bytes 66 8B 90 2C 03 00 00: mov dx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [eax + 330h]
        push edx
        push eax
        ; Exact mapped bytes E8 7C FC FF FF: call 0x10074370
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 174h]
        ; Exact mapped bytes E8 C1 15 05 00: call 0x100c5cc0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        pop esi
        pop ebp
        pop ebx
        add esp, 0b4h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
