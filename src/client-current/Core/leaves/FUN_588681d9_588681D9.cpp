// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588681D9 .. +0x292 bytes.
extern "C" __declspec(naked) void FUN_588681d9_588681D9() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 26 92 00 00: call 0x5887140f
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        mov dword ptr [ebp - 10h], ebx
        ; Exact mapped bytes E8 22 92 00 00: call 0x58871415
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        xor esi, esi
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 18h], esi
        push eax
        mov dword ptr [ebp - 4], esi
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes E8 69 92 00 00: call 0x58871473
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 4E 02 00 00: jne 0x58868461
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 FF 91 00 00: call 0x5887141b
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 3C 02 00 00: jne 0x58868461
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 98 96 58: mov eax, dword ptr [0x589698c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        mov edi, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x58868262
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, edi
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 3B 10: cmp dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x10
        ; Exact mapped bytes 75 1E: jne 0x58868259
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 15: je 0x58868255
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 50 02: cmp dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x58868259
        __asm _emit 0x75
        __asm _emit 0x0f
        add ecx, 4
        add eax, 4
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 DE: jne 0x58868233
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, esi
        ; Exact mapped bytes EB 05: jmp 0x5886825e
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        or eax, 1
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x58868293
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, edi
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B C6: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 75 F5: jne 0x58868267
        __asm _emit 0x75
        __asm _emit 0xf5
        sub ecx, edx
        sar ecx, 1
        lea eax, [ecx*2 + 2]
        push eax
        ; Exact mapped bytes E8 4D 4C 00 00: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 0E: jne 0x58868298
        __asm _emit 0x75
        __asm _emit 0x0e
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 7E 49 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
        ; Exact mapped bytes FF 35 C0 98 96 58: push dword ptr [0x589698c0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 49 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, edi
        ; Exact mapped bytes 89 35 C0 98 96 58: mov dword ptr [0x589698c0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 45 E8: cmp ax, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 75 F4: jne 0x588682af
        __asm _emit 0x75
        __asm _emit 0xf4
        sub ecx, edx
        sar ecx, 1
        push edi
        lea eax, [ecx + 1]
        push eax
        push esi
        ; Exact mapped bytes E8 B6 EC FF FF: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 8A 01 00 00: jne 0x5886845f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 14h]
        push 80h
        push eax
        push dword ptr [esi]
        ; Exact mapped bytes E8 2B 4B FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 80h
        xor eax, eax
        push eax
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 1B 4B FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 40h
        xor eax, eax
        push eax
        push dword ptr [ebx]
        ; Exact mapped bytes E8 0F 4B FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 40h
        xor eax, eax
        push eax
        push dword ptr [ebx + 4]
        ; Exact mapped bytes E8 02 4B FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 3
        push dword ptr [ebx]
        push dword ptr [esi]
        push edi
        ; Exact mapped bytes E8 78 FE FF FF: call 0x58868192
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 40h
        xor ecx, ecx
        push 3
        pop eax
        ; Exact mapped bytes 66 39 0F: cmp word ptr [edi], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x0f
        ; Exact mapped bytes 74 03: je 0x5886832a
        __asm _emit 0x74
        __asm _emit 0x03
        add edi, 2
        sub eax, 1
        ; Exact mapped bytes 75 F3: jne 0x58868322
        __asm _emit 0x75
        __asm _emit 0xf3
        movzx eax, word ptr [edi]
        lea esi, [edi + 2]
        mov ecx, eax
        push 2dh
        mov dword ptr [ebp - 1ch], ecx
        pop ecx
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        lea eax, [ebp - 0ch]
        push 0ah
        cmovne esi, edi
        push eax
        push esi
        ; Exact mapped bytes E8 FB F3 FE FF: call 0x5885774a
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        imul edi, eax, 0e10h
        mov dword ptr [ebp - 4], edi
        movzx ecx, word ptr [esi]
        cmp ecx, 2bh
        ; Exact mapped bytes 74 09: je 0x5886836c
        __asm _emit 0x74
        __asm _emit 0x09
        lea eax, [ecx - 30h]
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 77 05: ja 0x58868371
        __asm _emit 0x77
        __asm _emit 0x05
        add esi, 2
        ; Exact mapped bytes EB EA: jmp 0x5886835b
        __asm _emit 0xeb
        __asm _emit 0xea
        push 3ah
        pop eax
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x58868411
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        lea eax, [ebp - 0ch]
        add esi, 2
        push eax
        push esi
        ; Exact mapped bytes E8 BE F3 FE FF: call 0x5885774a
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 4]
        add esp, 0ch
        imul eax, eax, 3ch
        push 30h
        pop ecx
        add edi, eax
        mov dword ptr [ebp - 18h], ecx
        movzx eax, word ptr [esi]
        mov dword ptr [ebp - 4], edi
        mov edx, eax
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 72 20: jb 0x588683ca
        __asm _emit 0x72
        __asm _emit 0x20
        push 39h
        mov ecx, eax
        pop ebx
        movzx edx, cx
        ; Exact mapped bytes 66 3B CB: cmp cx, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 77 10: ja 0x588683c7
        __asm _emit 0x77
        __asm _emit 0x10
        add esi, 2
        movzx eax, word ptr [esi]
        mov ecx, eax
        mov edx, eax
        ; Exact mapped bytes 66 3B 45 E8: cmp ax, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 73 E8: jae 0x588683af
        __asm _emit 0x73
        __asm _emit 0xe8
        mov ebx, dword ptr [ebp - 10h]
        push 3ah
        pop eax
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 75 3F: jne 0x58868411
        __asm _emit 0x75
        __asm _emit 0x3f
        push 0ah
        lea eax, [ebp - 0ch]
        add esi, 2
        push eax
        push esi
        ; Exact mapped bytes E8 69 F3 FE FF: call 0x5885774a
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 4]
        add esp, 0ch
        add edi, eax
        movzx eax, word ptr [esi]
        mov dword ptr [ebp - 4], edi
        push 30h
        pop edx
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 72 1A: jb 0x58868411
        __asm _emit 0x72
        __asm _emit 0x1a
        push 39h
        mov ecx, eax
        pop ebx
        ; Exact mapped bytes 66 3B CB: cmp cx, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 77 0D: ja 0x5886840e
        __asm _emit 0x77
        __asm _emit 0x0d
        add esi, 2
        movzx eax, word ptr [esi]
        mov ecx, eax
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 73 EE: jae 0x588683fc
        __asm _emit 0x73
        __asm _emit 0xee
        mov ebx, dword ptr [ebp - 10h]
        push 2dh
        pop eax
        ; Exact mapped bytes 66 39 45 E4: cmp word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 75 05: jne 0x5886841f
        __asm _emit 0x75
        __asm _emit 0x05
        neg edi
        mov dword ptr [ebp - 4], edi
        movzx ecx, word ptr [esi]
        xor eax, eax
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        setne al
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 17: je 0x58868449
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        push 3
        push dword ptr [ebx + 4]
        push dword ptr [eax + 4]
        push esi
        ; Exact mapped bytes E8 4F FD FF FF: call 0x58868192
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 4]
        add esp, 10h
        ; Exact mapped bytes E8 BB 8F 00 00: call 0x58871409
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], edi
        mov esi, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A5 8F 00 00: call 0x588713fd
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        ; Exact mapped bytes E9 2B FE FF FF: jmp 0x5886828a
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
        push esi
        push esi
        push esi
        push esi
        push esi
        ; Exact mapped bytes E8 6E 8B FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
