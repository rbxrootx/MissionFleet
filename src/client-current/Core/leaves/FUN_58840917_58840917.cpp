// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58840917 .. +0x4D2 bytes.
extern "C" __declspec(naked) void FUN_58840917_58840917() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3b8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        and dword ptr [ebp - 3b4h], 0
        and dword ptr [ebp - 3a0h], 0
        and dword ptr [ebp - 3b8h], 0
        and dword ptr [ebp - 3b0h], 0
        and dword ptr [ebp - 3ach], 0
        lea eax, [ebp - 3b4h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 08 41 89 58: call dword ptr [0x58894108]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 3b0h], eax
        cmp dword ptr [ebp - 3b0h], 6fh
        ; Exact mapped bytes 0F 85 1A 02 00 00: jne 0x58840b89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 96 8C 01 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 3a0h], eax
        mov eax, dword ptr [ebp - 3a0h]
        mov dword ptr [ebp - 3b8h], eax
        lea eax, [ebp - 3b4h]
        push eax
        push dword ptr [ebp - 3a0h]
        ; Exact mapped bytes FF 15 08 41 89 58: call dword ptr [0x58894108]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 3b0h], eax
        cmp dword ptr [ebp - 3b0h], 0
        ; Exact mapped bytes 0F 85 CA 01 00 00: jne 0x58840b7d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3a0h], 0
        ; Exact mapped bytes 0F 84 BD 01 00 00: je 0x58840b7d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        mov eax, dword ptr [ebp - 3a0h]
        add eax, 10ch
        push eax
        push 588f30d4h
        ; Exact mapped bytes E8 7B B9 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        ; Exact mapped bytes E8 E1 63 02 00: call 0x58866dc0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 80 01 00 00: je 0x58840b6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        mov eax, dword ptr [ebp - 3a0h]
        add eax, 10ch
        push eax
        push 588f30e0h
        ; Exact mapped bytes E8 51 B9 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        ; Exact mapped bytes E8 B7 63 02 00: call 0x58866dc0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 56 01 00 00: je 0x58840b6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ach], 0
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x58840abb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        inc eax
        imul eax, eax, 5
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        xor eax, eax
        inc eax
        shl eax, 2
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        xor eax, eax
        inc eax
        imul eax, eax, 3
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        xor eax, eax
        inc eax
        shl eax, 1
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        xor eax, eax
        inc eax
        shl eax, 0
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        push 588f30f0h
        ; Exact mapped bytes E8 AB B8 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x58840b5d
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ach], 1
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x58840b5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        inc eax
        imul eax, eax, 5
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        xor eax, eax
        inc eax
        shl eax, 2
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        xor eax, eax
        inc eax
        imul eax, eax, 3
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        xor eax, eax
        inc eax
        shl eax, 1
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        xor eax, eax
        inc eax
        shl eax, 0
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp - 3a0h]
        movzx eax, byte ptr [ecx + eax + 194h]
        push eax
        push 588f30f0h
        ; Exact mapped bytes E8 04 B8 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        mov eax, dword ptr [ebp - 3ach]
        inc eax
        mov dword ptr [ebp - 3ach], eax
        mov eax, dword ptr [ebp - 3a0h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 3a0h], eax
        ; Exact mapped bytes E9 36 FE FF FF: jmp 0x588409b3
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 78 8A 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        cmp dword ptr [ebp - 3ach], 0
        ; Exact mapped bytes 0F 85 1E 02 00 00: jne 0x58840db4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        push 0
        lea eax, [ebp - 39ch]
        push eax
        ; Exact mapped bytes E8 6A C2 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 39ch], 37h
        lea eax, [ebp - 35ch]
        mov dword ptr [ebp - 398h], eax
        mov eax, 100h
        ; Exact mapped bytes 66 89 85 6C FC FF FF: mov word ptr [ebp - 0x394], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 39ch]
        push eax
        ; Exact mapped bytes E8 4F C2 03 00: call 0x5887ce23
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 3a1h], al
        and dword ptr [ebp - 3a8h], 0
        ; Exact mapped bytes EB 0D: jmp 0x58840bf0
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 3a8h]
        inc eax
        mov dword ptr [ebp - 3a8h], eax
        movzx eax, byte ptr [ebp - 35ch]
        cmp dword ptr [ebp - 3a8h], eax
        ; Exact mapped bytes 0F 8D B1 01 00 00: jge 0x58840db4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        push 0
        lea eax, [ebp - 39ch]
        push eax
        ; Exact mapped bytes E8 FD C1 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 39ch], 32h
        mov eax, dword ptr [ebp - 3a8h]
        mov al, byte ptr [ebp + eax - 35bh]
        mov byte ptr [ebp - 36ch], al
        lea eax, [ebp - 39ch]
        push eax
        ; Exact mapped bytes E8 E7 C1 03 00: call 0x5887ce23
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 3a1h], al
        push 40h
        push 0
        lea eax, [ebp - 39ch]
        push eax
        ; Exact mapped bytes E8 BE C1 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 39ch], 33h
        mov eax, dword ptr [ebp - 3a8h]
        mov al, byte ptr [ebp + eax - 35bh]
        mov byte ptr [ebp - 36ch], al
        push 588f3114h
        lea eax, [ebp - 392h]
        push eax
        ; Exact mapped bytes E8 20 8E 01 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        lea eax, [ebp - 25ch]
        mov dword ptr [ebp - 398h], eax
        mov eax, 258h
        ; Exact mapped bytes 66 89 85 6C FC FF FF: mov word ptr [ebp - 0x394], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 39ch]
        push eax
        ; Exact mapped bytes E8 7D C1 03 00: call 0x5887ce23
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 3a1h], al
        movzx eax, byte ptr [ebp - 3a1h]
        test eax, eax
        ; Exact mapped bytes 0F 85 F4 00 00 00: jne 0x58840daf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3a8h], 0
        ; Exact mapped bytes 75 71: jne 0x58840d35
        __asm _emit 0x75
        __asm _emit 0x71
        xor eax, eax
        inc eax
        imul eax, eax, 5
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        xor eax, eax
        inc eax
        shl eax, 2
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        xor eax, eax
        inc eax
        imul eax, eax, 3
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        xor eax, eax
        inc eax
        shl eax, 1
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        xor eax, eax
        inc eax
        shl eax, 0
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        xor eax, eax
        inc eax
        imul eax, eax, 0
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        push 588f30f0h
        ; Exact mapped bytes E8 2C B6 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        cmp dword ptr [ebp - 3a8h], 1
        ; Exact mapped bytes 75 71: jne 0x58840daf
        __asm _emit 0x75
        __asm _emit 0x71
        xor eax, eax
        inc eax
        imul eax, eax, 5
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        xor eax, eax
        inc eax
        shl eax, 2
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        xor eax, eax
        inc eax
        imul eax, eax, 3
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        xor eax, eax
        inc eax
        shl eax, 1
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        xor eax, eax
        inc eax
        shl eax, 0
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        xor eax, eax
        inc eax
        imul eax, eax, 0
        movzx eax, byte ptr [ebp + eax - 25ch]
        push eax
        push 588f30f0h
        ; Exact mapped bytes E8 B2 B5 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        ; Exact mapped bytes E9 2F FE FF FF: jmp 0x58840be3
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        inc eax
        shl eax, 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 04 01: movsx eax, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x01
        cmp eax, 2dh
        ; Exact mapped bytes 74 16: je 0x58840ddb
        __asm _emit 0x74
        __asm _emit 0x16
        push 588f3118h
        ; Exact mapped bytes E8 84 B5 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 8C 01 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6B 02 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
