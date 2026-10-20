// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B810 .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_5887b810() {
    __asm {
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
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 B9 CF 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 F1: jne 0x5887b830
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [esp + 14h]
        xor ecx, ecx
        sub eax, 29h
        ; Exact mapped bytes 74 0A: je 0x5887b854
        __asm _emit 0x74
        __asm _emit 0x0a
        sub eax, 1
        ; Exact mapped bytes 75 0A: jne 0x5887b859
        __asm _emit 0x75
        __asm _emit 0x0a
        lea ecx, [ebx + 1]
        ; Exact mapped bytes EB 05: jmp 0x5887b859
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
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x5887b985
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, cx
        mov dword ptr [esp + 14h], eax
        mov ecx, dword ptr [esi + 0ch]
        movzx ebx, word ptr [ecx + 5ch]
        mov edx, ecx
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [edi + 244h]
        push 0ffffffh
        push eax
        push 5898c922h
        xor ebx, 0aah
        ; Exact mapped bytes E8 37 D0 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ch]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        mov ecx, dword ptr [edi + 248h]
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
        ; Exact mapped bytes E8 D2 D2 08 00: call 0x58908b90
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd2
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
        ; Exact mapped bytes E8 D6 CF 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [eax + 1c0h]
        push 0ffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 04: jne 0x5887b911
        __asm _emit 0x75
        __asm _emit 0x04
        push 8
        ; Exact mapped bytes EB 1B: jmp 0x5887b92c
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 2
        ; Exact mapped bytes 75 0E: jne 0x5887b924
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 23ch]
        mov edx, dword ptr [ecx + 6ch]
        push 9
        push edx
        ; Exact mapped bytes EB 12: jmp 0x5887b936
        __asm _emit 0xeb
        __asm _emit 0x12
        movzx ecx, word ptr [eax + 5eh]
        and ecx, 0fh
        push ecx
        mov edx, dword ptr [eax + 23ch]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [edi + 24ch]
        ; Exact mapped bytes E8 8F CF 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        cmp ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 73 0E: jae 0x5887b955
        __asm _emit 0x73
        __asm _emit 0x0e
        push 4848ceh
        push -1
        push 5899f120h
        ; Exact mapped bytes EB 0C: jmp 0x5887b961
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
        ; Exact mapped bytes E8 5A CF 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 47 78: inc word ptr [edi + 0x78]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x47
        __asm _emit 0x78
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 0F 85 EC FE FF FF: jne 0x5887b871
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        ; Exact mapped bytes E8 B4 F8 FF FF: call 0x5887b240
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf8
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
