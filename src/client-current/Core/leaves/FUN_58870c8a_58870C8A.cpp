// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58870C8A .. +0x21C bytes.
extern "C" __declspec(naked) void FUN_58870c8a_58870C8A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], edx
        push ebx
        mov ebx, dword ptr [ebp + 14h]
        push esi
        push edi
        test edx, edx
        ; Exact mapped bytes 0F 84 ED 01 00 00: je 0x58870e9f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x58870ce0
        __asm _emit 0x75
        __asm _emit 0x2a
        xor eax, eax
        mov byte ptr [ebx + 24h], 1
        push ebx
        push eax
        push eax
        push eax
        mov dword ptr [ebx + 20h], eax
        push eax
        mov byte ptr [ebx + 1ch], 1
        push eax
        mov dword ptr [ebx + 18h], 16h
        ; Exact mapped bytes E8 59 02 FE FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x58870ea1
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        mov esi, ecx
        and eax, 3fh
        sar esi, 6
        imul edi, eax, 38h
        mov dword ptr [ebp - 14h], esi
        mov eax, dword ptr [esi*4 + 589699b0h]
        mov dword ptr [ebp - 18h], edi
        mov al, byte ptr [edi + eax + 29h]
        mov byte ptr [ebp - 1], al
        cmp al, 2
        ; Exact mapped bytes 74 04: je 0x58870d09
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 1
        ; Exact mapped bytes 75 08: jne 0x58870d11
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, edx
        not eax
        test al, 1
        ; Exact mapped bytes 74 A5: je 0x58870cb6
        __asm _emit 0x74
        __asm _emit 0xa5
        mov edx, dword ptr [ebp - 14h]
        xor esi, esi
        mov eax, dword ptr [edx*4 + 589699b0h]
        test byte ptr [edi + eax + 28h], 20h
        ; Exact mapped bytes 74 11: je 0x58870d35
        __asm _emit 0x74
        __asm _emit 0x11
        push ebx
        push 2
        push esi
        push esi
        push ecx
        ; Exact mapped bytes E8 1F 06 00 00: call 0x5887134e
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add esp, 14h
        push ebx
        mov edi, esi
        push ecx
        mov dword ptr [ebp - 24h], edi
        ; Exact mapped bytes E8 8E FA FF FF: call 0x588707cf
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 47: je 0x58870d8e
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        sub eax, esi
        ; Exact mapped bytes 74 27: je 0x58870d76
        __asm _emit 0x74
        __asm _emit 0x27
        sub eax, 1
        ; Exact mapped bytes 74 09: je 0x58870d5d
        __asm _emit 0x74
        __asm _emit 0x09
        sub eax, 1
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x58870e37
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 0ch]
        lea eax, [ebp - 30h]
        push dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 FB F9 FF FF: call 0x58870767
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov esi, eax
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x58870e25
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push dword ptr [ebp - 0ch]
        lea eax, [ebp - 30h]
        push dword ptr [ebp - 8]
        push dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 13 F6 FF FF: call 0x5887039c
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB E1: jmp 0x58870d6f
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx*4 + 589699b0h]
        cmp byte ptr [eax + ecx + 28h], 0
        ; Exact mapped bytes 7D 55: jge 0x58870df7
        __asm _emit 0x7d
        __asm _emit 0x55
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        sub eax, esi
        ; Exact mapped bytes 74 39: je 0x58870de3
        __asm _emit 0x74
        __asm _emit 0x39
        sub eax, 1
        ; Exact mapped bytes 74 20: je 0x58870dcf
        __asm _emit 0x74
        __asm _emit 0x20
        sub eax, 1
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x58870e3d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 0ch]
        lea eax, [ebp - 30h]
        push dword ptr [ebp - 8]
        push dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 5D FB FF FF: call 0x58870927
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB A0: jmp 0x58870d6f
        __asm _emit 0xeb
        __asm _emit 0xa0
        push dword ptr [ebp - 0ch]
        lea eax, [ebp - 30h]
        push dword ptr [ebp - 8]
        push dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 2F FC FF FF: call 0x58870a10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB E7: jmp 0x58870dca
        __asm _emit 0xeb
        __asm _emit 0xe7
        push dword ptr [ebp - 0ch]
        lea eax, [ebp - 30h]
        push dword ptr [ebp - 8]
        push dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 57 FA FF FF: call 0x5887084c
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D3: jmp 0x58870dca
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [eax + ecx + 18h]
        lea edi, [ebp - 30h]
        xor eax, eax
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        push esi
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        lea eax, [ebp - 2ch]
        push eax
        push dword ptr [ebp - 0ch]
        push dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58870e22
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 30h], eax
        lea esi, [ebp - 30h]
        lea edi, [ebp - 24h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 20h]
        test eax, eax
        ; Exact mapped bytes 75 68: jne 0x58870e9a
        __asm _emit 0x75
        __asm _emit 0x68
        mov edi, dword ptr [ebp - 24h]
        xor esi, esi
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        test edi, edi
        ; Exact mapped bytes 74 2C: je 0x58870e6d
        __asm _emit 0x74
        __asm _emit 0x2c
        push 5
        pop eax
        cmp edi, eax
        ; Exact mapped bytes 75 17: jne 0x58870e5f
        __asm _emit 0x75
        __asm _emit 0x17
        mov byte ptr [ebx + 1ch], 1
        mov dword ptr [ebx + 18h], 9
        mov byte ptr [ebx + 24h], 1
        mov dword ptr [ebx + 20h], eax
        ; Exact mapped bytes E9 79 FE FF FF: jmp 0x58870cd8
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        push edi
        ; Exact mapped bytes E8 D0 15 FF FF: call 0x58862436
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        ; Exact mapped bytes E9 6B FE FF FF: jmp 0x58870cd8
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edx*4 + 589699b0h]
        test byte ptr [eax + ecx + 28h], 40h
        ; Exact mapped bytes 74 08: je 0x58870e83
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        cmp byte ptr [eax], 1ah
        ; Exact mapped bytes 74 1C: je 0x58870e9f
        __asm _emit 0x74
        __asm _emit 0x1c
        mov byte ptr [ebx + 1ch], 1
        mov dword ptr [ebx + 18h], 1ch
        mov byte ptr [ebx + 24h], 1
        mov dword ptr [ebx + 20h], esi
        ; Exact mapped bytes E9 3E FE FF FF: jmp 0x58870cd8
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 02: jmp 0x58870ea1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
