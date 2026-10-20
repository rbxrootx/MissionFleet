// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769FA0 .. +0x534 bytes.
extern "C" __declspec(naked) void FUN_58769fa0_58769FA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 29 AA D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xaa
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 06: mov ax, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x06
        ; Exact mapped bytes 66 C1 E8 09: shr ax, 9
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x09
        ; Exact mapped bytes 66 83 E0 3F: and ax, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        movzx eax, ax
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58769fed
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58769ffa
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes EB 07: jmp 0x5876a001
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        add edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ach], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 BC A9 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa9
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 1ffh
        ; Exact mapped bytes 66 23 48 06: and cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x06
        movzx eax, cx
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b0h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        and ecx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5876a058
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffeh
        inc ecx
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x5876a065
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes EB 07: jmp 0x5876a06c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        add eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b0h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        shl edx, 2
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b0h], ecx
        mov eax, dword ptr [ebp - 14h]
        neg eax
        mov ecx, 10h
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 8ch], eax
        mov edx, dword ptr [ebp - 14h]
        neg edx
        mov eax, 10h
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 90h], edx
        mov ecx, 10h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + edx + 94h], ecx
        mov edx, 10h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + eax + 98h], edx
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 8ch], 0
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 90h], 0
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 1
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 94h], ecx
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 1
        mov edx, 10h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 98h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0b0h]
        imul eax, dword ptr [edx + 0b0h]
        push eax
        ; Exact mapped bytes E8 B3 6E 0C 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        imul ecx, dword ptr [eax + 0b0h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 56 2C 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0b0h]
        sub eax, dword ptr [ecx + 0ach]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5876a1e9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes 7D 3E: jge 0x5876a235
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876a209
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes 7D 1C: jge 0x5876a233
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        imul eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 38h]
        mov byte ptr [eax + ecx], 1
        ; Exact mapped bytes EB CD: jmp 0x5876a200
        __asm _emit 0xeb
        __asm _emit 0xcd
        ; Exact mapped bytes EB AB: jmp 0x5876a1e0
        __asm _emit 0xeb
        __asm _emit 0xab
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5876a24e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 24h
        ; Exact mapped bytes 0F 8D 59 02 00 00: jge 0x5876a4b1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0b0h]
        imul edx, dword ptr [ecx + 0b0h]
        push edx
        ; Exact mapped bytes E8 D1 6D 0C 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x6d
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + eax*4 + 0b4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0b0h]
        imul edx, dword ptr [ecx + 0b0h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        push edx
        ; Exact mapped bytes E8 60 2B 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2b
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5876a2c5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes 0F 8D E6 00 00 00: jge 0x5876a3bd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5876a2e9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes 0F 8D BD 00 00 00: jge 0x5876a3b8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        imul ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        movzx eax, byte ptr [ecx + edx]
        test eax, eax
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x5876a3b3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, dword ptr [ebp - 1ch]
        imul edx, ecx, 0ah
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 8]
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        lea eax, [ebp - 48h]
        push eax
        lea ecx, [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 0D 98 D7 FF: call 0x584e3b50
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 48h]
        cdq
        mov ecx, 0ah
        idiv ecx
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 44h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 24h]
        sub edx, eax
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 7C 43: jl 0x5876a3b3
        __asm _emit 0x7c
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 48h]
        cmp ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes 7D 35: jge 0x5876a3b3
        __asm _emit 0x7d
        __asm _emit 0x35
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 7C 2F: jl 0x5876a3b3
        __asm _emit 0x7c
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 44h]
        cmp eax, dword ptr [edx + 0b0h]
        ; Exact mapped bytes 7D 21: jge 0x5876a3b3
        __asm _emit 0x7d
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        imul edx, dword ptr [ebp - 44h]
        add edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 0b4h]
        mov byte ptr [edx + eax], 1
        ; Exact mapped bytes E9 28 FF FF FF: jmp 0x5876a2e0
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FF FE FF FF: jmp 0x5876a2bc
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5876a3cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 0b0h]
        ; Exact mapped bytes 0F 8D C2 00 00 00: jge 0x5876a4a3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 09: jmp 0x5876a3f3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 0b0h]
        ; Exact mapped bytes 0F 8D 99 00 00 00: jge 0x5876a49e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        imul edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 0b4h]
        movzx ecx, byte ptr [eax + edx]
        test ecx, ecx
        ; Exact mapped bytes 75 6F: jne 0x5876a499
        __asm _emit 0x75
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        imul eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0b4h]
        movzx edx, byte ptr [ecx + eax - 1]
        cmp edx, 1
        ; Exact mapped bytes 75 48: jne 0x5876a499
        __asm _emit 0x75
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        imul ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx*4 + 0b4h]
        movzx eax, byte ptr [edx + ecx + 1]
        cmp eax, 1
        ; Exact mapped bytes 75 21: jne 0x5876a499
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        imul edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 0b4h]
        mov byte ptr [edx + eax], 1
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x5876a3ea
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x5876a3c6
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 64h
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes E9 94 FD FF FF: jmp 0x5876a245
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 19: je 0x5876a4d0
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 85 6B 0C 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
