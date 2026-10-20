// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C030 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_5887c030() {
    __asm {
        sub esp, 104h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 100h], eax
        push ebp
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        ; Exact mapped bytes 66 89 46 78: mov word ptr [esi + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        mov dword ptr [esi + 80h], eax
        lea edi, [esi + 244h]
        lea ebp, [eax + 5]
        mov edi, edi
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 89 C7 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc7
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 F1: jne 0x5887c060
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 14h]
        test edi, edi
        ; Exact mapped bytes 0F 84 46 01 00 00: je 0x5887c1c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 07: jmp 0x5887c090
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 10h]
        push 5898c922h
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 50h]
        add esp, 8
        push 0ffffffh
        push ecx
        mov ecx, dword ptr [esi + 244h]
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes E8 11 C8 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        movzx edx, cl
        mov ecx, dword ptr [esi + 248h]
        push 0ffffffh
        push ebp
        xor edx, 0aah
        push edx
        ; Exact mapped bytes E8 AB CA 08 00: call 0x58908b90
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xca
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        movzx eax, word ptr [ecx + 5eh]
        and eax, 0fh
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [ecx + 0a4h]
        shr eax, 1
        lea ecx, [eax + edx*8]
        imul ecx, ecx, 0e0h
        push 0ffffffh
        add ecx, 589cfca8h
        push 0
        push ecx
        mov ecx, dword ptr [esi + 250h]
        inc ebp
        ; Exact mapped bytes E8 AF C7 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc7
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 1c0h]
        push 0ffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 04: jne 0x5887c138
        __asm _emit 0x75
        __asm _emit 0x04
        push 8
        ; Exact mapped bytes EB 1B: jmp 0x5887c153
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x5887c14b
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 23ch]
        mov edx, dword ptr [ecx + 6ch]
        push 9
        push edx
        ; Exact mapped bytes EB 12: jmp 0x5887c15d
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx ecx, word ptr [eax + 5eh]
        and ecx, 0fh
        push ecx
        mov edx, dword ptr [eax + 23ch]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [esi + 24ch]
        ; Exact mapped bytes E8 68 C7 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc7
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        mov al, byte ptr [ecx + 1c4h]
        test al, al
        ; Exact mapped bytes 74 24: je 0x5887c199
        __asm _emit 0x74
        __asm _emit 0x24
        cmp al, 30h
        ; Exact mapped bytes 75 0E: jne 0x5887c187
        __asm _emit 0x75
        __asm _emit 0x0e
        push 239fc8h
        push -1
        push 5899f248h
        ; Exact mapped bytes EB 1E: jmp 0x5887c1a5
        __asm _emit 0xeb
        __asm _emit 0x1e
        test al, 1
        ; Exact mapped bytes 74 0E: je 0x5887c199
        __asm _emit 0x74
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f234h
        ; Exact mapped bytes EB 0C: jmp 0x5887c1a5
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 0ffffffh
        push 1
        push 5899f1b4h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esi + 254h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 1A C7 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc7
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 46 78: inc word ptr [esi + 0x78]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x46
        __asm _emit 0x78
        mov edi, dword ptr [edi + 8]
        test edi, edi
        ; Exact mapped bytes 0F 85 CB FE FF FF: jne 0x5887c090
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        mov ecx, esi
        ; Exact mapped bytes E8 73 F0 FF FF: call 0x5887b240
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 10ch]
        pop edi
        pop esi
        pop ebp
        xor ecx, esp
        ; Exact mapped bytes E8 FC 09 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
