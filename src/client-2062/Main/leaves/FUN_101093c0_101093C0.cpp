// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101093C0 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_101093c0_101093C0() {
    __asm {
        mov edx, dword ptr [esp + 4]
        sub esp, 0f8h
        xor eax, eax
        push ebx
        push esi
        mov esi, dword ptr [esp + 108h]
        mov ebx, ecx
        cmp edx, eax
        push edi
        mov dword ptr [ebx + 1ch], edx
        mov dword ptr [ebx + 20h], esi
        mov dword ptr [ebx + 18h], 1000000h
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x101094cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x101094cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 1fh
        lea edi, [esp + 0ch]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [esp + 110h]
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esp + 74h], eax
        ; Exact mapped bytes A1 18 93 1C 10: mov eax, dword ptr [0x101c9318]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 18h], edx
        lea esi, [ebx + 4]
        push 0
        lea edx, [esp + 10h]
        mov dword ptr [esp + 10h], 7ch
        mov dword ptr [esp + 14h], 7
        mov ecx, dword ptr [eax]
        push esi
        push edx
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x10109451
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [esi], 0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0f8h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 54: je 0x101094aa
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, 1fh
        xor eax, eax
        lea edi, [esp + 88h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esp + 88h], 7ch
        mov eax, dword ptr [esi]
        push 0
        lea edx, [esp + 8ch]
        push 1
        mov ecx, dword ptr [eax]
        push edx
        push 0
        push eax
        ; Exact mapped bytes FF 51 64: call dword ptr [ecx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x10109496
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp eax, 8876021ch
        ; Exact mapped bytes 74 DF: je 0x10109471
        __asm _emit 0x74
        __asm _emit 0xdf
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x1010949d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [esp + 98h]
        mov dword ptr [ebx + 0ch], eax
        mov eax, dword ptr [esp + 0ach]
        mov dword ptr [ebx + 8], eax
        mov esi, dword ptr [esi]
        test esi, esi
        ; Exact mapped bytes 74 0B: je 0x101094bb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [esi]
        push 0
        push esi
        ; Exact mapped bytes FF 91 80 00 00 00: call dword ptr [ecx + 0x80]
        __asm _emit 0xff
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0f8h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        mov dword ptr [ebx + 4], eax
        mov dword ptr [ebx + 8], eax
        mov dword ptr [ebx + 0ch], eax
        mov dword ptr [ebx + 10h], eax
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0f8h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
