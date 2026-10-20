// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874AC20 .. +0x1A6 bytes.
extern "C" __declspec(naked) void FUN_5874ac20() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [edx + 0a4ch]
        xor eax, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        test byte ptr [esi + 170h], 1
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x5874ad36
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edx
        ; Exact mapped bytes 74 1B: je 0x5874ac6c
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        push 0
        push 0
        push 3abh
        ; Exact mapped bytes E8 8F 0E 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C8 A0 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        ; Exact mapped bytes A0 FD B1 A0 58: mov al, byte ptr [0x58a0b1fd]
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        cmp al, 0ffh
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x5874ad3a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 5
        ; Exact mapped bytes 0F 83 9A 00 00 00: jae 0x5874ad1b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        mov edx, dword ptr [eax*4 + 58a0b1e4h]
        push edx
        ; Exact mapped bytes E8 CF 93 1A 00: call 0x588f4060
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x93
        __asm _emit 0x1a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x5874acad
        __asm _emit 0x75
        __asm _emit 0x18
        push eax
        push eax
        push eax
        push 3a5h
        ; Exact mapped bytes E8 4E 0E 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 87 A0 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        mov ecx, dword ptr [eax + 0a4ch]
        mov edx, dword ptr [eax + 4ch]
        xor ecx, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        cmp ecx, edx
        ; Exact mapped bytes 74 1B: je 0x5874ace1
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        push 0
        push 0
        push 3a4h
        ; Exact mapped bytes E8 1A 0E 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 53 A0 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        mov ecx, dword ptr [eax + 0cc0h]
        mov eax, 51eb851fh
        mul dword ptr [ecx + 60h]
        ; Exact mapped bytes A1 68 B4 A0 58: mov eax, dword ptr [0x58a0b468]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        shr edx, 5
        xor eax, 0aaaaaaaah
        cmp eax, edx
        ; Exact mapped bytes 73 3A: jae 0x5874ad3a
        __asm _emit 0x73
        __asm _emit 0x3a
        push 0
        push 0
        push 0
        push 3aeh
        ; Exact mapped bytes E8 E0 0D 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 19 A0 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        push 0
        push 0
        push 0
        push 3a6h
        ; Exact mapped bytes E8 C5 0D 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FE 9F 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        cmp eax, edx
        ; Exact mapped bytes 75 04: jne 0x5874ad3e
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        pop esi
        ret
        push edi
        push 24h
        ; Exact mapped bytes E8 08 1F 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x23
        __asm _emit 0x00
        movzx ecx, word ptr [esi + 16ah]
        mov edi, eax
        mov dword ptr [edi], ecx
        mov edx, dword ptr [esi + 0b0h]
        mov dword ptr [edi + 4], edx
        movzx eax, byte ptr [esi + 164h]
        and eax, 7fh
        add esp, 4
        mov dword ptr [edi + 8], eax
        ; Exact mapped bytes E8 81 0D 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [eax + 0a0h], 0
        ; Exact mapped bytes 74 16: je 0x5874ad8e
        __asm _emit 0x74
        __asm _emit 0x16
        mov dword ptr [edi + 20h], 15eh
        ; Exact mapped bytes E8 6C 0D 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [eax + 0a0h], 0
        mov ecx, dword ptr [esi + 0b0h]
        mov eax, dword ptr [ecx*4 + 58a24860h]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5874adab
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 78 02 03: cmp word ptr [eax + 2], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x03
        ; Exact mapped bytes 75 05: jne 0x5874adab
        __asm _emit 0x75
        __asm _emit 0x05
        pop edi
        mov al, 1
        pop esi
        ret
        push edi
        push 0
        push 0
        push 1f4h
        ; Exact mapped bytes E8 36 0D 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AF F7 01 00: call 0x5876a570
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        xor al, al
        pop esi
        ret
    }
}
