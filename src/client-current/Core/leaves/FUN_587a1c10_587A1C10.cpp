// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A1C10 .. +0x302 bytes.
extern "C" __declspec(naked) void FUN_587a1c10_587A1C10() {
    __asm {
        sub esp, 14h
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [esp + 8], 0
        push ebx
        push ebp
        push edi
        test edx, edx
        ; Exact mapped bytes 0F 84 DF 02 00 00: je 0x587a1f09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 28h]
        test ebx, ebx
        ; Exact mapped bytes 0F 84 D3 02 00 00: je 0x587a1f09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 30h]
        test ebp, ebp
        ; Exact mapped bytes 0F 8E C7 02 00 00: jle 0x587a1f09
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 2ch]
        test edi, edi
        ; Exact mapped bytes 0F 84 BB 02 00 00: je 0x587a1f09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 5ch]
        mov ecx, dword ptr [ebx + 58h]
        sub eax, ecx
        push esi
        cmp ebp, eax
        ; Exact mapped bytes 7E 5E: jle 0x587a1cb9
        __asm _emit 0x7e
        __asm _emit 0x5e
        mov eax, 7fffffffh
        sub eax, ecx
        cmp ebp, eax
        ; Exact mapped bytes 0F 8F D3 00 00 00: jg 0x587a1d3d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ecx + ebp]
        cmp esi, 7ffffff7h
        ; Exact mapped bytes 7D 08: jge 0x587a1c7d
        __asm _emit 0x7d
        __asm _emit 0x08
        add esi, 8
        and esi, 0fffffff8h
        ; Exact mapped bytes EB 05: jmp 0x587a1c82
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 7fffffffh
        push 1ch
        mov eax, esi
        sub eax, ecx
        push eax
        push ecx
        push dword ptr [ebx + 60h]
        push edx
        ; Exact mapped bytes E8 7D 4E 00 00: call 0x587a6b10
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 3ch]
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x587a1d3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 60h]
        or dword ptr [ebx + 0c8h], 4000h
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [ebx + 60h], eax
        mov dword ptr [ebx + 5ch], esi
        lea esi, [edi + 14h]
        mov dword ptr [esp + 20h], 0
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 58h]
        mov ebp, dword ptr [esi - 10h]
        lea ecx, [eax*8]
        sub ecx, eax
        mov eax, dword ptr [ebx + 60h]
        lea ecx, [eax + ecx*4]
        mov dword ptr [esp + 14h], ecx
        test ebp, ebp
        ; Exact mapped bytes 0F 84 B4 01 00 00: je 0x587a1ea5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 14h]
        mov dword ptr [esp + 1ch], eax
        inc eax
        cmp eax, 3
        ; Exact mapped bytes 0F 87 93 01 00 00: ja 0x587a1e95
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp + 1]
        mov al, byte ptr [ebp]
        inc ebp
        test al, al
        ; Exact mapped bytes 75 F8: jne 0x587a1d05
        __asm _emit 0x75
        __asm _emit 0xf8
        sub ebp, edx
        mov edx, dword ptr [esp + 1ch]
        test edx, edx
        ; Exact mapped bytes 7F 43: jg 0x587a1d5a
        __asm _emit 0x7f
        __asm _emit 0x43
        xor ebx, ebx
        xor edi, edi
        mov esi, dword ptr [esi - 0ch]
        test esi, esi
        ; Exact mapped bytes 74 6D: je 0x587a1d8f
        __asm _emit 0x74
        __asm _emit 0x6d
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 74 68: je 0x587a1d8f
        __asm _emit 0x74
        __asm _emit 0x68
        lea eax, [esi + 1]
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        mov al, byte ptr [esi]
        inc esi
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a1d30
        __asm _emit 0x75
        __asm _emit 0xf9
        sub esi, dword ptr [esp + 1ch]
        ; Exact mapped bytes EB 62: jmp 0x587a1d9f
        __asm _emit 0xeb
        __asm _emit 0x62
        push 1
        push 588b887ch
        push edx
        ; Exact mapped bytes E8 A6 CF FF FF: call 0x5879ecf0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
        pop esi
        pop edi
        pop ebp
        pop ebx
        add esp, 14h
        ret
        mov ebx, dword ptr [esi]
        test ebx, ebx
        ; Exact mapped bytes 74 12: je 0x587a1d72
        __asm _emit 0x74
        __asm _emit 0x12
        lea edx, [ebx + 1]
        mov al, byte ptr [ebx]
        inc ebx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a1d63
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ebx, edx
        mov edx, dword ptr [esp + 1ch]
        ; Exact mapped bytes EB 02: jmp 0x587a1d74
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov edi, dword ptr [esi + 4]
        test edi, edi
        ; Exact mapped bytes 74 9E: je 0x587a1d19
        __asm _emit 0x74
        __asm _emit 0x9e
        lea eax, [edi + 1]
        mov dword ptr [esp + 1ch], eax
        mov al, byte ptr [edi]
        inc edi
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x587a1d82
        __asm _emit 0x75
        __asm _emit 0xf9
        sub edi, dword ptr [esp + 1ch]
        ; Exact mapped bytes EB 8C: jmp 0x587a1d1b
        __asm _emit 0xeb
        __asm _emit 0x8c
        xor eax, eax
        xor esi, esi
        test edx, edx
        setg al
        lea edx, [eax*2 - 1]
        lea eax, [esi + 4]
        mov dword ptr [ecx], edx
        add eax, edi
        add eax, ebx
        add eax, ebp
        push eax
        push dword ptr [esp + 2ch]
        ; Exact mapped bytes E8 EC 4C 00 00: call 0x587a6aa0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        add esp, 8
        mov dword ptr [ecx + 4], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x587a1ec4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        push ebp
        push dword ptr [ecx - 10h]
        push eax
        ; Exact mapped bytes E8 BC AA 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        add esp, 0ch
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [ecx + 4]
        mov byte ptr [eax + ebp], 0
        cmp dword ptr [edx - 14h], 0
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 7E 44: jle 0x587a1e33
        __asm _emit 0x7e
        __asm _emit 0x44
        inc eax
        add eax, ebp
        mov ebp, ecx
        push ebx
        mov dword ptr [ebp + 14h], eax
        push dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 90 AA 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [esp + 1ch]
        push edi
        mov byte ptr [ebx + eax], 0
        mov eax, dword ptr [ebp + 14h]
        inc eax
        add eax, ebx
        mov dword ptr [ebp + 18h], eax
        push dword ptr [ecx + 4]
        push eax
        ; Exact mapped bytes E8 72 AA 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        add esp, 18h
        mov edx, dword ptr [esp + 10h]
        mov byte ptr [edi + eax], 0
        mov eax, dword ptr [ebp + 18h]
        add eax, edi
        ; Exact mapped bytes EB 14: jmp 0x587a1e47
        __asm _emit 0xeb
        __asm _emit 0x14
        add eax, ebp
        mov dword ptr [ecx + 14h], 0
        mov ebp, dword ptr [esp + 14h]
        mov dword ptr [ecx + 18h], 0
        inc eax
        mov dword ptr [ebp + 8], eax
        test esi, esi
        ; Exact mapped bytes 74 0D: je 0x587a1e5c
        __asm _emit 0x74
        __asm _emit 0x0d
        push esi
        push dword ptr [edx - 0ch]
        push eax
        ; Exact mapped bytes E8 37 AA 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [esi + eax], 0
        cmp dword ptr [ebp], 0
        ; Exact mapped bytes 7E 17: jle 0x587a1e80
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ebx, dword ptr [esp + 2ch]
        mov eax, esi
        xor esi, esi
        mov dword ptr [ebp + 0ch], esi
        mov esi, dword ptr [esp + 10h]
        mov dword ptr [ebp + 10h], eax
        inc dword ptr [ebx + 58h]
        ; Exact mapped bytes EB 25: jmp 0x587a1ea5
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ebx, dword ptr [esp + 2ch]
        xor eax, eax
        mov dword ptr [ebp + 0ch], esi
        mov esi, dword ptr [esp + 10h]
        mov dword ptr [ebp + 10h], eax
        inc dword ptr [ebx + 58h]
        ; Exact mapped bytes EB 10: jmp 0x587a1ea5
        __asm _emit 0xeb
        __asm _emit 0x10
        push 1
        push 588b8894h
        push edx
        ; Exact mapped bytes E8 4E CE FF FF: call 0x5879ecf0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [esp + 20h]
        add esi, 1ch
        inc eax
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 20h], eax
        cmp eax, dword ptr [esp + 34h]
        ; Exact mapped bytes 7D 34: jge 0x587a1eef
        __asm _emit 0x7d
        __asm _emit 0x34
        mov edx, dword ptr [esp + 28h]
        ; Exact mapped bytes E9 0C FE FF FF: jmp 0x587a1cd0
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 28h]
        push 1
        push 588b88bch
        push ebx
        ; Exact mapped bytes E8 1B CE FF FF: call 0x5879ecf0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esp + 24h]
        push ebx
        ; Exact mapped bytes E8 F1 4A 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov eax, 1
        pop esi
        pop edi
        pop ebp
        pop ebx
        add esp, 14h
        ret
        push dword ptr [esp + 18h]
        push dword ptr [esp + 2ch]
        ; Exact mapped bytes E8 D4 4A 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        xor eax, eax
        pop esi
        pop edi
        pop ebp
        pop ebx
        add esp, 14h
        ret
        pop edi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 14h
        ret
    }
}
