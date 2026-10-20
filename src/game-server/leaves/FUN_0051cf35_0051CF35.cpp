// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051CF35 .. +0x2B2 bytes.
extern "C" __declspec(naked) void FUN_0051cf35_0051CF35() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 80h
        mov dword ptr [ebp - 80h], ecx
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 6ch], ecx
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        lea edx, [ebp - 74h]
        push edx
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 03 8D 01 00: call 0x535c67
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 64h], ecx
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 29 8A 01 00: call 0x5359a8
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 18h], 2
        mov edx, dword ptr [ebp - 80h]
        cmp dword ptr [edx + 8ch], 0ah
        ; Exact mapped bytes 74 0C: je 0x51cfa5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 80h]
        cmp dword ptr [eax + 8ch], 0bh
        ; Exact mapped bytes 75 3C: jne 0x51cfe1
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 80h]
        cmp dword ptr [ecx + 8ch], 0ah
        ; Exact mapped bytes 75 11: jne 0x51cfc2
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 28h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ecx + 28h], eax
        ; Exact mapped bytes EB 0F: jmp 0x51cfd1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 30h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ecx + 30h], eax
        mov ecx, dword ptr [ebp - 80h]
        add ecx, 28h
        ; Exact mapped bytes E8 5E 8E 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 43: jmp 0x51d024
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 18h]
        or edx, 20h
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 80h]
        cmp dword ptr [eax + 8ch], 0ch
        ; Exact mapped bytes 75 11: jne 0x51d007
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ecx + 2ch]
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [eax + 2ch], edx
        ; Exact mapped bytes EB 0F: jmp 0x51d016
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ecx + 34h]
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [eax + 34h], edx
        mov ecx, dword ptr [ebp - 80h]
        add ecx, 28h
        ; Exact mapped bytes E8 2F 8E 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        xor ecx, ecx
        cmp dword ptr [ebp - 0ch], 0
        setl cl
        dec ecx
        and ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        lea ecx, [ebp - 7ch]
        push ecx
        mov edx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [edx + 68h]
        mov eax, dword ptr [ebp - 80h]
        mov edx, dword ptr [eax + 68h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 EA 8C 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 10 27 5E 00: call dword ptr [0x5e2710]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 15 88 27 5E 00: call dword ptr [0x5e2788]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 80h]
        add edx, 48h
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 80h]
        cmp dword ptr [edx + 8ch], 0ah
        ; Exact mapped bytes 74 10: je 0x51d0b7
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 80h]
        cmp dword ptr [eax + 8ch], 0ch
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x51d142
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 80h]
        add ecx, 58h
        ; Exact mapped bytes E8 78 8D 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov edx, dword ptr [ebp - 34h]
        sub edx, ecx
        mov dword ptr [ebp - 3ch], edx
        mov ecx, dword ptr [ebp - 80h]
        add ecx, 58h
        ; Exact mapped bytes E8 76 8D 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov edx, dword ptr [ebp - 30h]
        sub edx, ecx
        mov dword ptr [ebp - 38h], edx
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 62 8C 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 73 8E 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 6A 8E 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 6E 90 01 00: call 0x536177
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x51d13d
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 40h]
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [edx + 38h], ecx
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 44h]
        sub ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [edx + 3ch], ecx
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 48h], ecx
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx + 4ch], eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x51d1c8
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 80h]
        add ecx, 58h
        ; Exact mapped bytes E8 ED 8C 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov edx, dword ptr [ebp - 3ch]
        add edx, ecx
        mov dword ptr [ebp - 34h], edx
        mov ecx, dword ptr [ebp - 80h]
        add ecx, 58h
        ; Exact mapped bytes E8 EB 8C 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov edx, dword ptr [ebp - 38h]
        add edx, ecx
        mov dword ptr [ebp - 30h], edx
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 D7 8B 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 E8 8D 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 DF 8D 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 E3 8F 01 00: call 0x536177
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x51d1c8
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 38h]
        add ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [edx + 40h], ecx
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 3ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [edx + 44h], ecx
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 50h], ecx
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx + 54h], eax
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 8], eax
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 AD 03 00 00: call 0x51d58e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
