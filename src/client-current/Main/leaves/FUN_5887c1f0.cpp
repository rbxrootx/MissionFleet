// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C1F0 .. +0x195 bytes.
extern "C" __declspec(naked) void FUN_5887c1f0() {
    __asm {
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
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 D9 C5 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x5887c210
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
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x5887c377
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        cmp dword ptr [eax + 0b4h], 10000000h
        ; Exact mapped bytes 0F 85 29 01 00 00: jne 0x5887c36c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
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
        ; Exact mapped bytes E8 7D C8 EF FF: call 0x58778ad0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc8
        __asm _emit 0xef
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x5887c36c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 50h]
        push 0ffffffh
        push ecx
        mov ecx, dword ptr [esi + 244h]
        push 5898c922h
        ; Exact mapped bytes E8 57 C6 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0ch]
        ; Exact mapped bytes 66 8B 42 5E: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        movzx ecx, al
        push 0ffffffh
        xor ecx, 0aah
        push ebp
        push ecx
        mov ecx, dword ptr [esi + 248h]
        ; Exact mapped bytes E8 F1 C8 08 00: call 0x58908b90
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 250h]
        push 0ffffffh
        push 0
        add ebx, 33ch
        push ebx
        inc ebp
        ; Exact mapped bytes E8 17 C6 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [eax + 1c0h]
        push 0ffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 04: jne 0x5887c2d0
        __asm _emit 0x75
        __asm _emit 0x04
        push 8
        ; Exact mapped bytes EB 1B: jmp 0x5887c2eb
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x5887c2e3
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 23ch]
        mov edx, dword ptr [ecx + 6ch]
        push 9
        push edx
        ; Exact mapped bytes EB 12: jmp 0x5887c2f5
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx ecx, word ptr [eax + 5eh]
        and ecx, 0fh
        push ecx
        mov edx, dword ptr [eax + 23ch]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [esi + 24ch]
        ; Exact mapped bytes E8 D0 C5 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        ; Exact mapped bytes 66 3B 4C 24 14: cmp cx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 74 35: je 0x5887c347
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [eax + 1c0h]
        cmp ecx, 1
        ; Exact mapped bytes 74 2A: je 0x5887c347
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp ecx, 2
        ; Exact mapped bytes 74 25: je 0x5887c347
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [eax + 0b8h], -1
        ; Exact mapped bytes 74 0E: je 0x5887c339
        __asm _emit 0x74
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f1c8h
        ; Exact mapped bytes EB 1A: jmp 0x5887c353
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0ffffffh
        push 1
        push 5899f1b4h
        ; Exact mapped bytes EB 0C: jmp 0x5887c353
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 4848ceh
        push -1
        push 5899f248h
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
        ; Exact mapped bytes E8 68 C5 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 46 78: inc word ptr [esi + 0x78]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x46
        __asm _emit 0x78
        mov edi, dword ptr [edi + 8]
        test edi, edi
        ; Exact mapped bytes 0F 85 B9 FE FF FF: jne 0x5887c230
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 C2 EE FF FF: call 0x5887b240
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
