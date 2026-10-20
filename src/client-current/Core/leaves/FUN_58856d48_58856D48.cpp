// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856D48 .. +0x623 bytes.
extern "C" __declspec(naked) void FUN_58856d48_58856D48() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 A2 F1 FF FF: call 0x58855efb
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 2F: je 0x58856d8c
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x58856da1
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp eax, 2
        ; Exact mapped bytes 7C 05: jl 0x58856d6e
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp eax, 24h
        ; Exact mapped bytes 7E 33: jle 0x58856da1
        __asm _emit 0x7e
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        push eax
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 A5 A1 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [ebp + 10h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 67 05 00 00: je 0x588572fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 5D 05 00 00: jmp 0x588572fe
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        and dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], eax
        movzx esi, word ptr [eax]
        add eax, 2
        cmp byte ptr [ecx + 14h], 0
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 13: jne 0x58856dd0
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 DE F0 FF FF: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x58856dd0
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        movzx esi, word ptr [eax]
        add eax, 2
        mov dword ptr [ebp + 0ch], eax
        push 8
        push esi
        ; Exact mapped bytes E8 71 82 01 00: call 0x5886f049
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 E6: jne 0x58856dc4
        __asm _emit 0x75
        __asm _emit 0xe6
        movzx eax, byte ptr [ebp + 18h]
        push edi
        push 2dh
        mov ebx, eax
        or ebx, 2
        pop ecx
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        cmovne ebx, eax
        ; Exact mapped bytes 74 0B: je 0x58856dfe
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 FE 2B: cmp si, 0x2b
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x2b
        ; Exact mapped bytes 74 05: je 0x58856dfe
        __asm _emit 0x74
        __asm _emit 0x05
        mov edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 0C: jmp 0x58856e0a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edi, dword ptr [ebp + 0ch]
        movzx esi, word ptr [edi]
        add edi, 2
        mov dword ptr [ebp + 0ch], edi
        mov ecx, dword ptr [ebp + 14h]
        push 30h
        pop eax
        push 10h
        pop edx
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58856e1f
        __asm _emit 0x74
        __asm _emit 0x08
        cmp ecx, edx
        ; Exact mapped bytes 0F 85 C9 02 00 00: jne 0x588570e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 4C 02 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 3ah
        pop eax
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0B: jae 0x58856e3b
        __asm _emit 0x73
        __asm _emit 0x0b
        movzx eax, si
        sub eax, 30h
        ; Exact mapped bytes E9 34 02 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ff10h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 83 14 02 00 00: jae 0x5885705d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 660h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 1D 02 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856e6c
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 660h
        ; Exact mapped bytes E9 03 02 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 6f0h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 FA 01 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856e8f
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 6f0h
        ; Exact mapped bytes E9 E0 01 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 966h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 D7 01 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856eb2
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 966h
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 9e6h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 B4 01 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856ed5
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 9e6h
        ; Exact mapped bytes E9 9A 01 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0a66h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 91 01 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856ef8
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 0a66h
        ; Exact mapped bytes E9 77 01 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ae6h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 6E 01 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856f1b
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 0ae6h
        ; Exact mapped bytes E9 54 01 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0b66h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 4B 01 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856f3e
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 0b66h
        ; Exact mapped bytes E9 31 01 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0c66h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 28 01 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856f61
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 0c66h
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ce6h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 05 01 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856f84
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 0ce6h
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0d66h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 E2 00 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856fa7
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 0d66h
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0e50h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 BF 00 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856fca
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 0e50h
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ed0h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 9C 00 00 00: jb 0x58857074
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58856fed
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 0ed0h
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x5885706f
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0f20h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 7D: jb 0x58857074
        __asm _emit 0x72
        __asm _emit 0x7d
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0A: jae 0x58857009
        __asm _emit 0x73
        __asm _emit 0x0a
        movzx eax, si
        sub eax, 0f20h
        ; Exact mapped bytes EB 66: jmp 0x5885706f
        __asm _emit 0xeb
        __asm _emit 0x66
        mov eax, 1040h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 61: jb 0x58857074
        __asm _emit 0x72
        __asm _emit 0x61
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0A: jae 0x58857025
        __asm _emit 0x73
        __asm _emit 0x0a
        movzx eax, si
        sub eax, 1040h
        ; Exact mapped bytes EB 4A: jmp 0x5885706f
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, 17e0h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 45: jb 0x58857074
        __asm _emit 0x72
        __asm _emit 0x45
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0A: jae 0x58857041
        __asm _emit 0x73
        __asm _emit 0x0a
        movzx eax, si
        sub eax, 17e0h
        ; Exact mapped bytes EB 2E: jmp 0x5885706f
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, 1810h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 29: jb 0x58857074
        __asm _emit 0x72
        __asm _emit 0x29
        add eax, 0ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 21: jae 0x58857074
        __asm _emit 0x73
        __asm _emit 0x21
        movzx eax, si
        sub eax, 1810h
        ; Exact mapped bytes EB 12: jmp 0x5885706f
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, 0ff1ah
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 73 0D: jae 0x58857074
        __asm _emit 0x73
        __asm _emit 0x0d
        movzx eax, si
        sub eax, 0ff10h
        cmp eax, -1
        ; Exact mapped bytes 75 28: jne 0x5885709c
        __asm _emit 0x75
        __asm _emit 0x28
        movzx eax, si
        cmp eax, 41h
        ; Exact mapped bytes 72 0A: jb 0x58857086
        __asm _emit 0x72
        __asm _emit 0x0a
        cmp eax, 5ah
        ; Exact mapped bytes 77 05: ja 0x58857086
        __asm _emit 0x77
        __asm _emit 0x05
        lea ecx, [eax - 61h]
        ; Exact mapped bytes EB 08: jmp 0x5885708e
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [eax - 61h]
        cmp ecx, 19h
        ; Exact mapped bytes 77 4A: ja 0x588570d8
        __asm _emit 0x77
        __asm _emit 0x4a
        cmp ecx, 19h
        ; Exact mapped bytes 77 03: ja 0x58857096
        __asm _emit 0x77
        __asm _emit 0x03
        add eax, -20h
        mov ecx, dword ptr [ebp + 14h]
        add eax, -37h
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x588570db
        __asm _emit 0x75
        __asm _emit 0x3b
        movzx eax, word ptr [edi]
        lea ecx, [edi + 2]
        mov dword ptr [ebp + 0ch], ecx
        cmp eax, 78h
        ; Exact mapped bytes 74 15: je 0x588570c3
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 58h
        ; Exact mapped bytes 74 10: je 0x588570c3
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 AD ED FF FF: call 0x58855e69
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        push 8
        ; Exact mapped bytes EB 1A: jmp 0x588570dd
        __asm _emit 0xeb
        __asm _emit 0x1a
        movzx esi, word ptr [ecx]
        lea edi, [ecx + 2]
        mov ecx, dword ptr [ebp + 14h]
        test ecx, ecx
        mov dword ptr [ebp + 0ch], edi
        cmovne edx, ecx
        mov ecx, edx
        ; Exact mapped bytes EB 0D: jmp 0x588570e5
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 14h]
        push 0ah
        test ecx, ecx
        pop eax
        cmovne eax, ecx
        mov ecx, eax
        mov dword ptr [ebp + 14h], ecx
        or eax, 0ffffffffh
        xor edx, edx
        div ecx
        mov edi, eax
        push 30h
        pop eax
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 7D 01 00 00: jb 0x5885727a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 3ah
        pop ecx
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 82 67 01 00 00: jb 0x58857270
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0ff10h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 83 4F 01 00 00: jae 0x58857266
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 660h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 55 01 00 00: jb 0x5885727a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 82 3F 01 00 00: jb 0x58857270
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 6f0h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 3B 01 00 00: jb 0x5885727a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 82 25 01 00 00: jb 0x58857270
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 966h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 21 01 00 00: jb 0x5885727a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 82 0B 01 00 00: jb 0x58857270
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + 76h]
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 09 01 00 00: jb 0x5885727a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 82 F3 00 00 00: jb 0x58857270
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + 76h]
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 F1 00 00 00: jb 0x5885727a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 82 DB 00 00 00: jb 0x58857270
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + 76h]
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 D9 00 00 00: jb 0x5885727a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 82 C3 00 00 00: jb 0x58857270
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + 76h]
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 C1 00 00 00: jb 0x5885727a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 82 AB 00 00 00: jb 0x58857270
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0c66h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 A7 00 00 00: jb 0x5885727a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F 82 91 00 00 00: jb 0x58857270
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + 76h]
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F 82 8F 00 00 00: jb 0x5885727a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 72 7D: jb 0x58857270
        __asm _emit 0x72
        __asm _emit 0x7d
        lea eax, [ecx + 76h]
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 7F: jb 0x5885727a
        __asm _emit 0x72
        __asm _emit 0x7f
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 72 6D: jb 0x58857270
        __asm _emit 0x72
        __asm _emit 0x6d
        mov eax, 0e50h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 6D: jb 0x5885727a
        __asm _emit 0x72
        __asm _emit 0x6d
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 72 5B: jb 0x58857270
        __asm _emit 0x72
        __asm _emit 0x5b
        lea eax, [ecx + 76h]
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 5D: jb 0x5885727a
        __asm _emit 0x72
        __asm _emit 0x5d
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 72 4B: jb 0x58857270
        __asm _emit 0x72
        __asm _emit 0x4b
        add eax, 50h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 4D: jb 0x5885727a
        __asm _emit 0x72
        __asm _emit 0x4d
        add ecx, 50h
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 72 3B: jb 0x58857270
        __asm _emit 0x72
        __asm _emit 0x3b
        mov eax, 1040h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 3B: jb 0x5885727a
        __asm _emit 0x72
        __asm _emit 0x3b
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 72 29: jb 0x58857270
        __asm _emit 0x72
        __asm _emit 0x29
        mov eax, 17e0h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 29: jb 0x5885727a
        __asm _emit 0x72
        __asm _emit 0x29
        lea ecx, [eax + 0ah]
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 72 17: jb 0x58857270
        __asm _emit 0x72
        __asm _emit 0x17
        add eax, 30h
        ; Exact mapped bytes 66 3B F0: cmp si, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 72 19: jb 0x5885727a
        __asm _emit 0x72
        __asm _emit 0x19
        add ecx, 30h
        ; Exact mapped bytes EB 05: jmp 0x5885726b
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ecx, 0ff1ah
        ; Exact mapped bytes 66 3B F1: cmp si, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf1
        ; Exact mapped bytes 73 0A: jae 0x5885727a
        __asm _emit 0x73
        __asm _emit 0x0a
        movzx ecx, si
        sub ecx, eax
        cmp ecx, -1
        ; Exact mapped bytes 75 2E: jne 0x588572a8
        __asm _emit 0x75
        __asm _emit 0x2e
        movzx ecx, si
        cmp ecx, 41h
        ; Exact mapped bytes 72 05: jb 0x58857287
        __asm _emit 0x72
        __asm _emit 0x05
        cmp ecx, 5ah
        ; Exact mapped bytes 76 0B: jbe 0x58857292
        __asm _emit 0x76
        __asm _emit 0x0b
        cmp ecx, 61h
        ; Exact mapped bytes 72 19: jb 0x588572a5
        __asm _emit 0x72
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 FE 7A: cmp si, 0x7a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x7a
        ; Exact mapped bytes 77 13: ja 0x588572a5
        __asm _emit 0x77
        __asm _emit 0x13
        push 19h
        lea eax, [esi - 61h]
        pop edx
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 77 03: ja 0x588572a0
        __asm _emit 0x77
        __asm _emit 0x03
        add ecx, -20h
        add ecx, -37h
        ; Exact mapped bytes EB 03: jmp 0x588572a8
        __asm _emit 0xeb
        __asm _emit 0x03
        or ecx, 0ffffffffh
        mov edx, dword ptr [ebp + 14h]
        cmp ecx, edx
        ; Exact mapped bytes 73 34: jae 0x588572e3
        __asm _emit 0x73
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        imul eax, edx
        lea edx, [eax + ecx]
        cmp edx, eax
        sbb ecx, ecx
        neg ecx
        cmp edi, dword ptr [ebp - 4]
        mov dword ptr [ebp - 4], edx
        sbb eax, eax
        neg eax
        or ecx, eax
        shl ecx, 2
        or ecx, 8
        or ebx, ecx
        mov ecx, dword ptr [ebp + 0ch]
        movzx esi, word ptr [ecx]
        add ecx, 2
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes E9 0E FE FF FF: jmp 0x588570f1
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 7D EB FF FF: call 0x58855e69
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        test bl, 8
        ; Exact mapped bytes 75 10: jne 0x58857302
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x588572fe
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        xor eax, eax
        ; Exact mapped bytes EB 65: jmp 0x58857367
        __asm _emit 0xeb
        __asm _emit 0x65
        mov esi, dword ptr [ebp - 4]
        push esi
        push ebx
        ; Exact mapped bytes E8 D7 A9 FF FF: call 0x58851ce3
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 40: je 0x58857352
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 22h
        test bl, 1
        ; Exact mapped bytes 75 05: jne 0x5885732a
        __asm _emit 0x75
        __asm _emit 0x05
        or esi, 0ffffffffh
        ; Exact mapped bytes EB 2F: jmp 0x58857359
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 10h]
        test bl, 2
        ; Exact mapped bytes 74 10: je 0x58857342
        __asm _emit 0x74
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5885733b
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov eax, 80000000h
        ; Exact mapped bytes EB 25: jmp 0x58857367
        __asm _emit 0xeb
        __asm _emit 0x25
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5885734b
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov eax, 7fffffffh
        ; Exact mapped bytes EB 15: jmp 0x58857367
        __asm _emit 0xeb
        __asm _emit 0x15
        test bl, 2
        ; Exact mapped bytes 74 02: je 0x58857359
        __asm _emit 0x74
        __asm _emit 0x02
        neg esi
        mov edx, dword ptr [ebp + 10h]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x58857365
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
    }
}
