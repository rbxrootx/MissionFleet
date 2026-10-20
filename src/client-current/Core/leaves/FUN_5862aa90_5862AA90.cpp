// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862AA90 .. +0x2C8 bytes.
extern "C" __declspec(naked) void FUN_5862aa90_5862AA90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 36 01 00 00: jne 0x5862abd9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 25ch]
        ; Exact mapped bytes 75 0E: jne 0x5862aabf
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 67 05 00 00: call 0x5862b020
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x5862abd4
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 260h]
        ; Exact mapped bytes 75 0E: jne 0x5862aadb
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FB 04 00 00: call 0x5862afd0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x5862abd4
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5862aaed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D DD 00 00 00: jge 0x5862abd4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 248h]
        ; Exact mapped bytes 75 5B: jne 0x5862ab64
        __asm _emit 0x75
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 278h], eax
        ; Exact mapped bytes E8 D6 C6 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc6
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 03 00 00: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 294h
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 26ch]
        add edx, dword ptr [ebp - 10h]
        imul eax, edx, 18h
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 1ch]
        push edx
        push 140h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5F 6C EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6c
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6B: jmp 0x5862abcf
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 250h]
        ; Exact mapped bytes 75 59: jne 0x5862abcf
        __asm _emit 0x75
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 278h], ecx
        ; Exact mapped bytes E8 69 C6 EA FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc6
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 02 00 00: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 294h
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 26ch]
        add eax, dword ptr [ebp - 10h]
        imul ecx, eax, 18h
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 141h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F2 6B EB FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 10 FF FF FF: jmp 0x5862aae4
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 79 01 00 00: jmp 0x5862ad52
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 0F 85 6C 01 00 00: jne 0x5862ad52
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF C3 EA FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc3
        __asm _emit 0xea
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 85 58 01 00 00: jne 0x5862ad52
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5862ac0c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 8D 3C 01 00 00: jge 0x5862ad52
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 278h]
        cmp edx, dword ptr [ecx + eax*4 + 248h]
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x5862acb6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 02 00 00: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1f4h
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 26ch]
        add ecx, dword ptr [ebp - 0ch]
        shl ecx, 2
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 34h]
        add edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 02 00 00: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 274h
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 26ch]
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 40h]
        movzx ecx, byte ptr [eax]
        sub ecx, 1
        ; Exact mapped bytes 66 89 4D FE: mov word ptr [ebp - 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfe
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        push 1
        movzx ecx, word ptr [ebp - 2]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 34 F5 FF: call 0x5857e0d0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x34
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x5862ad4d
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 278h]
        cmp edx, dword ptr [ecx + eax*4 + 250h]
        ; Exact mapped bytes 75 7F: jne 0x5862ad4d
        __asm _emit 0x75
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 01 00 00: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1f4h
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 26ch]
        add ecx, dword ptr [ebp - 0ch]
        shl ecx, 2
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 48h]
        add edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 01 00 00: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 274h
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 26ch]
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 50h]
        add eax, dword ptr [ebp - 54h]
        movzx ecx, byte ptr [eax]
        sub ecx, 1
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        push 0
        movzx ecx, word ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 33 F5 FF: call 0x5857e0d0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B1 FE FF FF: jmp 0x5862ac03
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
