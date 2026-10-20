// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851781 .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_58851781_58851781() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 474h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 18h], 0
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 1ch]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 460h], eax
        ; Exact mapped bytes 75 23: jne 0x588517d0
        __asm _emit 0x75
        __asm _emit 0x23
        push ecx
        xor ebx, ebx
        mov byte ptr [ecx + 1ch], 1
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov dword ptr [ecx + 18h], 16h
        ; Exact mapped bytes E8 69 F7 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 26 01 00 00: jmp 0x588518f6
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x588517d8
        __asm _emit 0x74
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 74 D5: je 0x588517ad
        __asm _emit 0x74
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        push edi
        lea edi, [ebp - 470h]
        xor ebx, ebx
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        mov eax, edx
        mov edi, dword ptr [ebp - 460h]
        and eax, 2
        mov dword ptr [ebp - 474h], eax
        or eax, ebx
        mov dword ptr [ebp - 470h], edi
        mov dword ptr [ebp - 46ch], esi
        mov dword ptr [ebp - 468h], ebx
        ; Exact mapped bytes 75 0A: jne 0x5885181b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov byte ptr [ebp - 464h], bl
        test edi, edi
        ; Exact mapped bytes 75 07: jne 0x58851822
        __asm _emit 0x75
        __asm _emit 0x07
        mov byte ptr [ebp - 464h], 1
        push dword ptr [ebp + 20h]
        lea eax, [ebp - 470h]
        push ecx
        push dword ptr [ebp + 18h]
        mov dword ptr [ebp - 460h], eax
        lea ecx, [ebp - 45ch]
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 460h]
        push edx
        push eax
        ; Exact mapped bytes E8 70 1D 00 00: call 0x588535bb
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 45ch]
        mov dword ptr [ebp - 0ch], ebx
        ; Exact mapped bytes E8 7E 29 00 00: call 0x588541d7
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 460h], eax
        test edi, edi
        ; Exact mapped bytes 74 7F: je 0x588518e2
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1
        or ecx, ebx
        ; Exact mapped bytes 74 24: je 0x58851891
        __asm _emit 0x74
        __asm _emit 0x24
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x58851875
        __asm _emit 0x75
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 75 4C: jne 0x588518c1
        __asm _emit 0x75
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 468h]
        cmp ecx, esi
        ; Exact mapped bytes 74 08: je 0x58851887
        __asm _emit 0x74
        __asm _emit 0x08
        xor eax, eax
        ; Exact mapped bytes 66 89 04 4F: mov word ptr [edi + ecx*2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x4f
        ; Exact mapped bytes EB 5B: jmp 0x588518e2
        __asm _emit 0xeb
        __asm _emit 0x5b
        test eax, eax
        ; Exact mapped bytes 78 57: js 0x588518e2
        __asm _emit 0x78
        __asm _emit 0x57
        cmp eax, esi
        ; Exact mapped bytes 77 32: ja 0x588518c1
        __asm _emit 0x77
        __asm _emit 0x32
        ; Exact mapped bytes EB 51: jmp 0x588518e2
        __asm _emit 0xeb
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 474h]
        or ecx, ebx
        ; Exact mapped bytes 74 22: je 0x588518bd
        __asm _emit 0x74
        __asm _emit 0x22
        test esi, esi
        ; Exact mapped bytes 74 43: je 0x588518e2
        __asm _emit 0x74
        __asm _emit 0x43
        test eax, eax
        ; Exact mapped bytes 79 07: jns 0x588518aa
        __asm _emit 0x79
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes EB 38: jmp 0x588518e2
        __asm _emit 0xeb
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 468h]
        cmp eax, esi
        ; Exact mapped bytes 75 28: jne 0x588518dc
        __asm _emit 0x75
        __asm _emit 0x28
        xor eax, eax
        ; Exact mapped bytes 66 89 44 77 FE: mov word ptr [edi + esi*2 - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x77
        __asm _emit 0xfe
        ; Exact mapped bytes EB 25: jmp 0x588518e2
        __asm _emit 0xeb
        __asm _emit 0x25
        test esi, esi
        ; Exact mapped bytes 75 05: jne 0x588518c6
        __asm _emit 0x75
        __asm _emit 0x05
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 22: jmp 0x588518e8
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 468h]
        cmp eax, esi
        ; Exact mapped bytes 75 0C: jne 0x588518dc
        __asm _emit 0x75
        __asm _emit 0x0c
        xor eax, eax
        push -2
        ; Exact mapped bytes 66 89 44 77 FE: mov word ptr [edi + esi*2 - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x77
        __asm _emit 0xfe
        pop esi
        ; Exact mapped bytes EB 0C: jmp 0x588518e8
        __asm _emit 0xeb
        __asm _emit 0x0c
        xor ecx, ecx
        ; Exact mapped bytes 66 89 0C 47: mov word ptr [edi + eax*2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x47
        mov esi, dword ptr [ebp - 460h]
        lea ecx, [ebp - 420h]
        ; Exact mapped bytes E8 34 1D 00 00: call 0x58853627
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        mov ecx, dword ptr [ebp - 4]
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 4E F7 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
