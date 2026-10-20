// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887BB70 .. +0x1B4 bytes.
extern "C" __declspec(naked) void FUN_5887bb70() {
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
        push ebx
        push ebp
        xor eax, eax
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        ; Exact mapped bytes 66 89 46 78: mov word ptr [esi + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        mov dword ptr [esi + 80h], ebp
        lea edi, [esi + 244h]
        lea ebx, [eax + 5]
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 48 CC 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x5887bba1
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
        ; Exact mapped bytes 0F 84 43 01 00 00: je 0x5887bd04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        cmp dword ptr [eax + 0b4h], 10000000h
        ; Exact mapped bytes 0F 85 25 01 00 00: jne 0x5887bcf9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [eax + 62h]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 EC CE EF FF: call 0x58778ad0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xce
        __asm _emit 0xef
        __asm _emit 0xff
        mov ebx, eax
        lea eax, [esp + 10h]
        push 5898c922h
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 8
        test ebx, ebx
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x5887bcf9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        mov edx, dword ptr [ecx + 50h]
        mov ecx, dword ptr [esi + 244h]
        push 0ffffffh
        push edx
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 B3 CC 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        mov ecx, dword ptr [esi + 248h]
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        movzx eax, dl
        push 0ffffffh
        push ebp
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 4E CF 08 00: call 0x58908b90
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        push 0ffffffh
        push 0
        lea ecx, [ebx + 33ch]
        push ecx
        mov ecx, dword ptr [esi + 250h]
        inc ebp
        ; Exact mapped bytes E8 74 CC 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 1c0h]
        push 0ffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 04: jne 0x5887bc73
        __asm _emit 0x75
        __asm _emit 0x04
        push 8
        ; Exact mapped bytes EB 1B: jmp 0x5887bc8e
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x5887bc86
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 23ch]
        mov edx, dword ptr [ecx + 6ch]
        push 9
        push edx
        ; Exact mapped bytes EB 12: jmp 0x5887bc98
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx ecx, word ptr [eax + 5eh]
        and ecx, 0fh
        push ecx
        mov edx, dword ptr [eax + 23ch]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [esi + 24ch]
        ; Exact mapped bytes E8 2D CC 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        cmp byte ptr [ebx + 35ch], 0
        ; Exact mapped bytes 75 0E: jne 0x5887bcba
        __asm _emit 0x75
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f1d8h
        ; Exact mapped bytes EB 26: jmp 0x5887bce0
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 0ch]
        cmp dword ptr [ecx + 0b8h], -1
        ; Exact mapped bytes 74 0E: je 0x5887bcd4
        __asm _emit 0x74
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f1c8h
        ; Exact mapped bytes EB 0C: jmp 0x5887bce0
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 0ffffffh
        push 1
        push 5899f1b4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 254h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 DB CB 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 46 78: inc word ptr [esi + 0x78]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x46
        __asm _emit 0x78
        mov edi, dword ptr [edi + 8]
        test edi, edi
        ; Exact mapped bytes 0F 85 BD FE FF FF: jne 0x5887bbc1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 35 F5 FF FF: call 0x5887b240
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 110h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 BD 0E 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x0e
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 104h
        ret
    }
}
