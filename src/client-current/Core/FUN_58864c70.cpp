// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864C70 .. +0x311 bytes.
extern "C" __declspec(naked) void FUN_58864c70() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        push ebx
        push esi
        mov dword ptr [eax + 4], 0
        mov eax, dword ptr [ebp + 8]
        push edi
        mov edi, 0c000000dh
        mov dword ptr [eax + 8], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], 0
        test cl, 10h
        ; Exact mapped bytes 74 0C: je 0x58864caf
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov edi, 0c000008fh
        or dword ptr [eax + 4], 1
        test cl, 2
        ; Exact mapped bytes 74 0C: je 0x58864cc0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov edi, 0c0000093h
        or dword ptr [eax + 4], 2
        test cl, 1
        ; Exact mapped bytes 74 0C: je 0x58864cd1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov edi, 0c0000091h
        or dword ptr [eax + 4], 4
        test cl, 4
        ; Exact mapped bytes 74 0C: je 0x58864ce2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov edi, 0c000008eh
        or dword ptr [eax + 4], 8
        test cl, 8
        ; Exact mapped bytes 74 0C: je 0x58864cf3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov edi, 0c0000090h
        or dword ptr [eax + 4], 10h
        mov esi, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [esi]
        shl eax, 4
        not eax
        xor eax, dword ptr [edx + 8]
        and eax, 10h
        xor dword ptr [edx + 8], eax
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi]
        add ecx, ecx
        not ecx
        xor ecx, dword ptr [edx + 8]
        and ecx, 8
        xor dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi]
        shr ecx, 1
        not ecx
        xor ecx, dword ptr [edx + 8]
        and ecx, 4
        xor dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [esi]
        shr ecx, 3
        not ecx
        xor ecx, dword ptr [edx + 8]
        and ecx, 2
        xor dword ptr [edx + 8], ecx
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [ebp + 8]
        shr ecx, 5
        not ecx
        xor ecx, dword ptr [edx + 8]
        and ecx, 1
        xor dword ptr [edx + 8], ecx
        ; Exact mapped bytes E8 68 B4 00 00: call 0x588701c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, eax
        test dl, 1
        ; Exact mapped bytes 74 07: je 0x58864d66
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, dword ptr [ebp + 8]
        or dword ptr [ecx + 0ch], 10h
        test dl, 4
        ; Exact mapped bytes 74 07: je 0x58864d72
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ebp + 8]
        or dword ptr [eax + 0ch], 8
        test dl, 8
        ; Exact mapped bytes 74 07: je 0x58864d7e
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ebp + 8]
        or dword ptr [eax + 0ch], 4
        test dl, 10h
        ; Exact mapped bytes 74 07: je 0x58864d8a
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ebp + 8]
        or dword ptr [eax + 0ch], 2
        test dl, 20h
        ; Exact mapped bytes 74 07: je 0x58864d96
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ebp + 8]
        or dword ptr [eax + 0ch], 1
        mov eax, dword ptr [esi]
        and eax, 0c00h
        cmp eax, 800h
        ; Exact mapped bytes 77 33: ja 0x58864dd7
        __asm _emit 0x77
        __asm _emit 0x33
        ; Exact mapped bytes 74 22: je 0x58864dc8
        __asm _emit 0x74
        __asm _emit 0x22
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x58864dc0
        __asm _emit 0x74
        __asm _emit 0x16
        cmp eax, 400h
        ; Exact mapped bytes 75 33: jne 0x58864de4
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx]
        and eax, 0fffffffdh
        or eax, 1
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 24: jmp 0x58864de4
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 8]
        and dword ptr [eax], 0fffffffch
        ; Exact mapped bytes EB 1C: jmp 0x58864de4
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx]
        and eax, 0fffffffeh
        or eax, 2
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 0D: jmp 0x58864de4
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp eax, 0c00h
        ; Exact mapped bytes 75 06: jne 0x58864de4
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        or dword ptr [eax], 3
        mov eax, dword ptr [esi]
        and eax, 300h
        ; Exact mapped bytes 74 23: je 0x58864e10
        __asm _emit 0x74
        __asm _emit 0x23
        cmp eax, 200h
        ; Exact mapped bytes 74 0F: je 0x58864e03
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp eax, 300h
        ; Exact mapped bytes 75 22: jne 0x58864e1d
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        and dword ptr [eax], 0ffffffe3h
        ; Exact mapped bytes EB 1A: jmp 0x58864e1d
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx]
        and eax, 0ffffffe7h
        or eax, 4
        ; Exact mapped bytes EB 0B: jmp 0x58864e1b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx]
        and eax, 0ffffffebh
        or eax, 8
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 14h]
        mov ebx, dword ptr [ebp + 1ch]
        shl ecx, 5
        xor ecx, dword ptr [edx]
        and ecx, 1ffe0h
        xor dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        or dword ptr [eax + 20h], 1
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 2A: je 0x58864e6a
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        and dword ptr [eax + 20h], 0ffffffe1h
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 10h], ecx
        mov eax, dword ptr [ebp + 8]
        or dword ptr [eax + 60h], 1
        mov eax, dword ptr [ebp + 8]
        and dword ptr [eax + 60h], 0ffffffe1h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebx]
        mov dword ptr [eax + 50h], ecx
        ; Exact mapped bytes EB 40: jmp 0x58864eaa
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 20h]
        and eax, 0ffffffe3h
        or eax, 2
        mov dword ptr [ecx + 20h], eax
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes F2 0F 10 00: movsd xmm0, qword ptr [eax]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes F2 0F 11 40 10: movsd qword ptr [eax + 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x40
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        or dword ptr [eax + 60h], 1
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 60h]
        and eax, 0ffffffe3h
        or eax, 2
        mov dword ptr [ecx + 60h], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes F2 0F 10 03: movsd xmm0, qword ptr [ebx]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x03
        ; Exact mapped bytes F2 0F 11 40 50: movsd qword ptr [eax + 0x50], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x40
        __asm _emit 0x50
        ; Exact mapped bytes E8 61 B2 00 00: call 0x58870110
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 8]
        push eax
        push 1
        push 0
        push edi
        ; Exact mapped bytes FF 15 9C 43 89 58: call dword ptr [0x5889439c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        test byte ptr [ecx + 8], 10h
        ; Exact mapped bytes 74 03: je 0x58864eca
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [esi], 0fffffffeh
        test byte ptr [ecx + 8], 8
        ; Exact mapped bytes 74 03: je 0x58864ed3
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [esi], 0fffffffbh
        test byte ptr [ecx + 8], 4
        ; Exact mapped bytes 74 03: je 0x58864edc
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [esi], 0fffffff7h
        test byte ptr [ecx + 8], 2
        ; Exact mapped bytes 74 03: je 0x58864ee5
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [esi], 0ffffffefh
        test byte ptr [ecx + 8], 1
        ; Exact mapped bytes 74 03: je 0x58864eee
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [esi], 0ffffffdfh
        mov eax, dword ptr [ecx]
        and eax, 3
        ; Exact mapped bytes FF 24 85 84 4F 86 58: jmp dword ptr [eax*4 + 0x58864f84]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x86
        __asm _emit 0x58
        or dword ptr [esi], 0c00h
        ; Exact mapped bytes EB 26: jmp 0x58864f28
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [esi]
        and eax, 0fffffbffh
        or eax, 800h
        mov dword ptr [esi], eax
        ; Exact mapped bytes EB 16: jmp 0x58864f28
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [esi]
        and eax, 0fffff7ffh
        or eax, 400h
        mov dword ptr [esi], eax
        ; Exact mapped bytes EB 06: jmp 0x58864f28
        __asm _emit 0xeb
        __asm _emit 0x06
        and dword ptr [esi], 0fffff3ffh
        mov eax, dword ptr [ecx]
        shr eax, 2
        and eax, 7
        sub eax, 0
        ; Exact mapped bytes 74 20: je 0x58864f55
        __asm _emit 0x74
        __asm _emit 0x20
        sub eax, 1
        ; Exact mapped bytes 74 0D: je 0x58864f47
        __asm _emit 0x74
        __asm _emit 0x0d
        sub eax, 1
        ; Exact mapped bytes 75 24: jne 0x58864f63
        __asm _emit 0x75
        __asm _emit 0x24
        and dword ptr [esi], 0fffff3ffh
        ; Exact mapped bytes EB 1C: jmp 0x58864f63
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [esi]
        and eax, 0fffff3ffh
        or eax, 200h
        ; Exact mapped bytes EB 0C: jmp 0x58864f61
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [esi]
        and eax, 0fffff3ffh
        or eax, 300h
        mov dword ptr [esi], eax
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 0A: je 0x58864f73
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx + 50h]
        pop edi
        pop esi
        mov dword ptr [ebx], eax
        pop ebx
        pop ebp
        ret
        ; Exact mapped bytes F2 0F 10 41 50: movsd xmm0, qword ptr [ecx + 0x50]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0x50
        pop edi
        pop esi
        ; Exact mapped bytes F2 0F 11 03: movsd qword ptr [ebx], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x03
        pop ebx
        pop ebp
        ret
    }
}
