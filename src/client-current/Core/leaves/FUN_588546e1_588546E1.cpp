// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588546E1 .. +0x18A bytes.
extern "C" __declspec(naked) void FUN_588546e1_588546E1() {
    __asm {
        mov edi, edi
        push esi
        movzx esi, word ptr [ecx + 2eh]
        mov eax, esi
        cmp esi, 46h
        ; Exact mapped bytes 75 18: jne 0x58854707
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ecx]
        and eax, 8
        or eax, 0
        ; Exact mapped bytes 0F 85 6A 01 00 00: jne 0x58854867
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ecx + 18h], 7
        pop esi
        ; Exact mapped bytes E9 9A 09 00 00: jmp 0x588550a1
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        cmp esi, 4eh
        ; Exact mapped bytes 75 35: jne 0x58854743
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ecx]
        and eax, 8
        or eax, edx
        ; Exact mapped bytes 0F 85 4C 01 00 00: jne 0x58854867
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ecx + 18h], 8
        mov eax, dword ptr [ecx + 8]
        add eax, 18h
        mov byte ptr [eax + 4], 1
        mov dword ptr [eax], 16h
        push dword ptr [ecx + 8]
        push edx
        push edx
        push edx
        push edx
        push edx
        ; Exact mapped bytes E8 F2 C7 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        xor al, al
        pop esi
        ret
        cmp dword ptr [ecx + 28h], edx
        ; Exact mapped bytes 75 D7: jne 0x5885471f
        __asm _emit 0x75
        __asm _emit 0xd7
        push 6ah
        pop edx
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 87 C9 00 00 00: ja 0x5885481d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x58854814
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 49h
        ; Exact mapped bytes 74 4B: je 0x588547aa
        __asm _emit 0x74
        __asm _emit 0x4b
        cmp eax, 4ch
        ; Exact mapped bytes 74 3A: je 0x5885479e
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp eax, 54h
        ; Exact mapped bytes 74 29: je 0x58854792
        __asm _emit 0x74
        __asm _emit 0x29
        push 68h
        pop edx
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 85 F2 00 00 00: jne 0x58854867
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 75 0E: jne 0x5885478b
        __asm _emit 0x75
        __asm _emit 0x0e
        add eax, 2
        mov dword ptr [ecx + 0ch], eax
        xor eax, eax
        inc eax
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x58854864
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x58854863
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 28h], 0dh
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x58854867
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 28h], 8
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x58854867
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 0ch]
        movzx eax, word ptr [esi]
        cmp eax, 33h
        ; Exact mapped bytes 75 19: jne 0x588547ce
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 7E 02 32: cmp word ptr [esi + 2], 0x32
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x32
        ; Exact mapped bytes 75 12: jne 0x588547ce
        __asm _emit 0x75
        __asm _emit 0x12
        lea eax, [esi + 4]
        mov dword ptr [ecx + 28h], 0ah
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x58854867
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 36h
        ; Exact mapped bytes 75 1A: jne 0x588547ed
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 66 83 7E 02 34: cmp word ptr [esi + 2], 0x34
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x34
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x58854867
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 4]
        mov dword ptr [ecx + 28h], 0bh
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 7A: jmp 0x58854867
        __asm _emit 0xeb
        __asm _emit 0x7a
        cmp eax, 64h
        ; Exact mapped bytes 74 19: je 0x5885480b
        __asm _emit 0x74
        __asm _emit 0x19
        cmp eax, 69h
        ; Exact mapped bytes 74 14: je 0x5885480b
        __asm _emit 0x74
        __asm _emit 0x14
        cmp eax, 6fh
        ; Exact mapped bytes 74 0F: je 0x5885480b
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp eax, 75h
        ; Exact mapped bytes 74 0A: je 0x5885480b
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 78h
        ; Exact mapped bytes 74 05: je 0x5885480b
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 58h
        ; Exact mapped bytes 75 5C: jne 0x58854867
        __asm _emit 0x75
        __asm _emit 0x5c
        mov dword ptr [ecx + 28h], 9
        ; Exact mapped bytes EB 53: jmp 0x58854867
        __asm _emit 0xeb
        __asm _emit 0x53
        mov dword ptr [ecx + 28h], 5
        ; Exact mapped bytes EB 4A: jmp 0x58854867
        __asm _emit 0xeb
        __asm _emit 0x4a
        push 6ch
        pop edx
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 2A: je 0x5885484f
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp eax, 74h
        ; Exact mapped bytes 74 1C: je 0x58854846
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 77h
        ; Exact mapped bytes 74 0E: je 0x5885483d
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp esi, 7ah
        ; Exact mapped bytes 75 33: jne 0x58854867
        __asm _emit 0x75
        __asm _emit 0x33
        mov dword ptr [ecx + 28h], 6
        ; Exact mapped bytes EB 2A: jmp 0x58854867
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov dword ptr [ecx + 28h], 0ch
        ; Exact mapped bytes EB 21: jmp 0x58854867
        __asm _emit 0xeb
        __asm _emit 0x21
        mov dword ptr [ecx + 28h], 7
        ; Exact mapped bytes EB 18: jmp 0x58854867
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 75 0A: jne 0x58854861
        __asm _emit 0x75
        __asm _emit 0x0a
        add eax, 2
        mov dword ptr [ecx + 0ch], eax
        push 4
        ; Exact mapped bytes EB 02: jmp 0x58854863
        __asm _emit 0xeb
        __asm _emit 0x02
        push 3
        pop eax
        mov dword ptr [ecx + 28h], eax
        mov al, 1
        pop esi
        ret
    }
}
