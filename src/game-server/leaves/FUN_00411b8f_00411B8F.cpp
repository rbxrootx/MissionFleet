// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411B8F .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_00411b8f_00411B8F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 10: jne 0x411bc9
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 07: jne 0x411bc9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x411cb0
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x411bdb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EE FC FF FF: call 0x4118c9
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x411cae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 40000000h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D3 6B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x411caa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 68 24 5E 00: call dword ptr [0x5e2468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AF 6B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 83 B7 0D 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0ch], ecx
        mov esi, esp
        push 0
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 76 6B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 63 6B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 6C 24 5E 00: call dword ptr [0x5e246c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 50 6B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 60 02 00 00: call 0x411f08
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x411cb0
        __asm _emit 0xeb
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x411cb0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 25 6B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
