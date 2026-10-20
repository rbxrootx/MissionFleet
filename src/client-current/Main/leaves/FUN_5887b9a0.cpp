// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B9A0 .. +0x1CB bytes.
extern "C" __declspec(naked) void FUN_5887b9a0() {
    __asm {
        sub esp, 108h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 104h], eax
        push ebx
        push ebp
        push esi
        xor eax, eax
        push edi
        mov edi, ecx
        xor ebp, ebp
        ; Exact mapped bytes 66 89 47 78: mov word ptr [edi + 0x78], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x78
        mov dword ptr [edi + 80h], ebp
        lea esi, [edi + 244h]
        lea ebx, [eax + 5]
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 18 CE 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x5887b9d1
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [esp + 11ch]
        xor ecx, ecx
        sub eax, ebp
        ; Exact mapped bytes 74 16: je 0x5887ba03
        __asm _emit 0x74
        __asm _emit 0x16
        sub eax, 1
        ; Exact mapped bytes 74 0A: je 0x5887b9fc
        __asm _emit 0x74
        __asm _emit 0x0a
        sub eax, 1
        ; Exact mapped bytes 75 11: jne 0x5887ba08
        __asm _emit 0x75
        __asm _emit 0x11
        lea ecx, [ebx + 1]
        ; Exact mapped bytes EB 0C: jmp 0x5887ba08
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, 64h
        ; Exact mapped bytes EB 05: jmp 0x5887ba08
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ecx, 0ah
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [edx + 14h]
        cmp esi, ebp
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x5887bb49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, cx
        mov dword ptr [esp + 10h], eax
        mov ecx, dword ptr [esi + 0ch]
        movzx ebx, word ptr [ecx + 58h]
        lea edx, [esp + 14h]
        push 5898c922h
        push edx
        xor ebx, 0aah
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [eax + 50h]
        add esp, 8
        push 0ffffffh
        push ecx
        mov ecx, dword ptr [edi + 244h]
        lea edx, [esp + 1ch]
        push edx
        ; Exact mapped bytes E8 74 CE 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
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
        mov ecx, dword ptr [edi + 248h]
        push 0ffffffh
        push ebp
        xor edx, 0aah
        push edx
        ; Exact mapped bytes E8 0E D1 08 00: call 0x58908b90
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd1
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ch]
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
        mov ecx, dword ptr [edi + 250h]
        inc ebp
        ; Exact mapped bytes E8 12 CE 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [eax + 1c0h]
        push 0ffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 04: jne 0x5887bad5
        __asm _emit 0x75
        __asm _emit 0x04
        push 8
        ; Exact mapped bytes EB 1B: jmp 0x5887baf0
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x5887bae8
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 23ch]
        mov edx, dword ptr [ecx + 6ch]
        push 9
        push edx
        ; Exact mapped bytes EB 12: jmp 0x5887bafa
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx ecx, word ptr [eax + 5eh]
        and ecx, 0fh
        push ecx
        mov edx, dword ptr [eax + 23ch]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [edi + 24ch]
        ; Exact mapped bytes E8 CB CD 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebx, dword ptr [esp + 10h]
        ; Exact mapped bytes 73 0E: jae 0x5887bb19
        __asm _emit 0x73
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f198h
        ; Exact mapped bytes EB 0C: jmp 0x5887bb25
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 0ffffffh
        push 1
        push 5899f104h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 254h]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 96 CD 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xcd
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 47 78: inc word ptr [edi + 0x78]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x47
        __asm _emit 0x78
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 0F 85 D7 FE FF FF: jne 0x5887ba20
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        ; Exact mapped bytes E8 F0 F6 FF FF: call 0x5887b240
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 114h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 78 10 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 108h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
