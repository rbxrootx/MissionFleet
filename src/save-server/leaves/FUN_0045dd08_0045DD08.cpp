// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045DD08 .. +0x28B bytes.
extern "C" __declspec(naked) void FUN_0045dd08_0045DD08() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58eadch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 58h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 64h], ecx
        mov dword ptr [ebp - 60h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CF 6F 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 5C DA 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 29: jne 0x45dd75
        __asm _emit 0x75
        __asm _emit 0x29
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 E7 06 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        or ecx, 1
        mov dword ptr [ebp - 60h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7F EB 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 0B 02 00 00: jmp 0x45df80
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 26 DA 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 17: je 0x45dd99
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [ebp - 4ch]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 C1 E7 FF FF: call 0x45c556
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 54: jne 0x45dded
        __asm _emit 0x75
        __asm _emit 0x54
        push 0f09ah
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DA BE 07 00: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xbe
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x45ddbe
        __asm _emit 0x75
        __asm _emit 0x14
        push 958h
        push 678664h
        ; Exact mapped bytes E8 87 AF 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45ddbe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x45dd99
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A E7 06 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        or edx, 1
        mov dword ptr [ebp - 60h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 07 EB 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xeb
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 93 01 00 00: jmp 0x45df80
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 4C EA FF FF: call 0x45c842
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 09 6F 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 70 F2 06 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x45df08
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 25h
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x45ded2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 44h
        ; Exact mapped bytes 75 7E: jne 0x45ded2
        __asm _emit 0x75
        __asm _emit 0x7e
        push 0ah
        lea ecx, [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 B5 DA 0E 00: call 0x54b917
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 48 FA 00 00: call 0x46d8b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 24h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5C F3 06 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        lea eax, [ebp - 5ch]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 72 F1 06 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 5ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 EA F1 06 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 53 B8 FE FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 44 B8 FE FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 1ch]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 22 B8 FE FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 13 B8 FE FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x45de2b
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 BF F2 06 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        push 80h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 26 F3 06 00: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        lea edx, [ebp - 4ch]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 7A 6E 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 27 6E 0C 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6e
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 6D DF 00 00: call 0x46beb0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 83 F2 06 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE E5 06 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe5
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        or edx, 1
        mov dword ptr [ebp - 60h], edx
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 7B E9 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6F E9 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
