// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58724410 .. +0x309 bytes.
extern "C" __declspec(naked) void FUN_58724410_58724410() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 44h
        push esi
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 F1 F4 FF: call 0x586735b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf1
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 13a4h], al
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 13a5h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 13a7h], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58724471
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 80h
        ; Exact mapped bytes 7D 35: jge 0x587244af
        __asm _emit 0x7d
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 11a4h], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 0fa4h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 0da4h], 0
        ; Exact mapped bytes EB B9: jmp 0x58724468
        __asm _emit 0xeb
        __asm _emit 0xb9
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 7F F8 FF: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 1C: jne 0x587244df
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B7 6C 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x6c
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 32 02 00 00: jmp 0x58724711
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x587244ec
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C7 7B D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7b
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 FB 01 00 00: je 0x587246f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E2 79 D6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x79
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 67 EE D9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xee
        __asm _emit 0xd9
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        xor eax, 55h
        mov byte ptr [ebp - 1], al
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4A EE D9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xee
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        movzx edx, word ptr [ebp - 8]
        cmp edx, 50h
        ; Exact mapped bytes 0F 84 97 01 00 00: je 0x587246d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 8]
        cmp eax, 51h
        ; Exact mapped bytes 0F 84 8A 01 00 00: je 0x587246d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 8]
        cmp ecx, 52h
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x587246d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C EE D9 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xee
        __asm _emit 0xd9
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 0F 85 6B 01 00 00: jne 0x587246d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CA 04 D6 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0a0h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx + ecx*4 + 0a4h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 66 04 D6 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0a0h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 40h]
        mov esi, dword ptr [ebp - 3ch]
        mov dword ptr [edx + ecx*8 + 2a4h], eax
        mov dword ptr [edx + ecx*8 + 2a8h], esi
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C2 12 D7 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x12
        __asm _emit 0xd7
        __asm _emit 0xff
        movzx ecx, al
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 0a0h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + eax*4 + 6a4h], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1D 11 D7 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x11
        __asm _emit 0xd7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F6: mov word ptr [ebp - 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf6
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 0a0h]
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 4D F6: mov cx, word ptr [ebp - 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf6
        ; Exact mapped bytes 66 89 8C 50 A4 08 00 00: mov word ptr [eax + edx*2 + 0x8a4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0xa4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F5 4F E0 FF: call 0x58529610
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x4f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0a0h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [edx + ecx*4 + 9a4h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 91 19 DA FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x19
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 0a0h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + eax*4 + 0ba4h], edx
        push 80h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D8 0E 09 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0e
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0a0h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + ecx*4 + 0da4h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 0a0h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 0fa4h], 0
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 0a0h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 11a4h], 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B5 A6 D8 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa6
        __asm _emit 0xd8
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AB A9 DD FF: call 0x584ff070
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [edx + 0a0h]
        add al, 1
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 0a0h], al
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 0a0h]
        cmp eax, 80h
        ; Exact mapped bytes 75 02: jne 0x587246ec
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x587246f1
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 F0 FD FF FF: jmp 0x587244e1
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 80 6A 09 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x6a
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
