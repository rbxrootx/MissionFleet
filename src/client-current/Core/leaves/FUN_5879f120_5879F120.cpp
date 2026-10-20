// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F120 .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_5879f120_5879F120() {
    __asm {
        sub esp, 0c8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 0c4h], eax
        mov edx, dword ptr [esp + 0cch]
        xor eax, eax
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0d8h]
        push esi
        mov esi, dword ptr [esp + 0e0h]
        push edi
        mov dword ptr [esp + 10h], edx
        mov cl, byte ptr [esi]
        test cl, cl
        ; Exact mapped bytes 74 79: je 0x5879f1d2
        __asm _emit 0x74
        __asm _emit 0x79
        test ebp, ebp
        ; Exact mapped bytes 74 62: je 0x5879f1bf
        __asm _emit 0x74
        __asm _emit 0x62
        cmp cl, 40h
        ; Exact mapped bytes 75 5D: jne 0x5879f1bf
        __asm _emit 0x75
        __asm _emit 0x5d
        mov bl, byte ptr [esi + 1]
        test bl, bl
        ; Exact mapped bytes 74 56: je 0x5879f1bf
        __asm _emit 0x74
        __asm _emit 0x56
        inc esi
        xor ecx, ecx
        cmp bl, 31h
        ; Exact mapped bytes 74 16: je 0x5879f187
        __asm _emit 0x74
        __asm _emit 0x16
        mov dl, 31h
        test dl, dl
        ; Exact mapped bytes 74 0B: je 0x5879f182
        __asm _emit 0x74
        __asm _emit 0x0b
        mov dl, byte ptr [ecx + 588b76b5h]
        inc ecx
        cmp dl, bl
        ; Exact mapped bytes 75 F1: jne 0x5879f173
        __asm _emit 0x75
        __asm _emit 0xf1
        cmp ecx, 8
        ; Exact mapped bytes 7D 38: jge 0x5879f1bf
        __asm _emit 0x7d
        __asm _emit 0x38
        shl ecx, 5
        add ecx, ebp
        lea edi, [ecx + 20h]
        cmp eax, 0bfh
        ; Exact mapped bytes 73 30: jae 0x5879f1c6
        __asm _emit 0x73
        __asm _emit 0x30
        mov dl, byte ptr [ecx]
        test dl, dl
        ; Exact mapped bytes 74 2A: je 0x5879f1c6
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp ecx, edi
        ; Exact mapped bytes 73 26: jae 0x5879f1c6
        __asm _emit 0x73
        __asm _emit 0x26
        mov byte ptr [esp + eax + 14h], dl
        inc ecx
        inc eax
        cmp eax, 0bfh
        ; Exact mapped bytes 72 E9: jb 0x5879f196
        __asm _emit 0x72
        __asm _emit 0xe9
        mov ecx, eax
        mov eax, ecx
        cmp ecx, 0c0h
        ; Exact mapped bytes 0F 83 81 00 00 00: jae 0x5879f23e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x5879f1d2
        __asm _emit 0xeb
        __asm _emit 0x13
        mov cl, byte ptr [esi]
        mov byte ptr [esp + eax + 14h], cl
        inc eax
        inc esi
        mov ecx, eax
        cmp eax, 0bfh
        ; Exact mapped bytes 72 83: jb 0x5879f153
        __asm _emit 0x72
        __asm _emit 0x83
        ; Exact mapped bytes EB DD: jmp 0x5879f1af
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov edx, dword ptr [esp + 10h]
        mov byte ptr [esp + eax + 14h], 0
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x5879f1f0
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [edx + 50h]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5879f1f0
        __asm _emit 0x74
        __asm _emit 0x0a
        lea ecx, [esp + 14h]
        push ecx
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 32: jmp 0x5879f222
        __asm _emit 0xeb
        __asm _emit 0x32
        lea eax, [esp + 14h]
        push eax
        push 588b7734h
        push 2
        ; Exact mapped bytes E8 5F AA 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xaa
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 A6 23 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x23
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        push 588b70a8h
        push 2
        ; Exact mapped bytes E8 47 AA 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xaa
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 8E 23 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x23
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0dch]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 19 1E 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0c8h
        ret
        ; Exact mapped bytes E8 66 1F 09 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1f
        __asm _emit 0x09
        __asm _emit 0x00
    }
}
