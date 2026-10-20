// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887598F .. +0x1C3 bytes.
extern "C" __declspec(naked) void FUN_5887598f_5887598F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [ebp + 14h]
        test edi, edi
        ; Exact mapped bytes 75 0D: jne 0x588759b0
        __asm _emit 0x75
        __asm _emit 0x0d
        test esi, esi
        ; Exact mapped bytes 75 0D: jne 0x588759b4
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 75 20: jne 0x588759cc
        __asm _emit 0x75
        __asm _emit 0x20
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x588759dd
        __asm _emit 0xeb
        __asm _emit 0x2d
        test esi, esi
        ; Exact mapped bytes 74 18: je 0x588759cc
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 12: jbe 0x588759cc
        __asm _emit 0x76
        __asm _emit 0x12
        test edi, edi
        ; Exact mapped bytes 75 05: jne 0x588759c3
        __asm _emit 0x75
        __asm _emit 0x05
        mov byte ptr [esi], 0
        ; Exact mapped bytes EB E9: jmp 0x588759ac
        __asm _emit 0xeb
        __asm _emit 0xe9
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 18: jne 0x588759e1
        __asm _emit 0x75
        __asm _emit 0x18
        mov byte ptr [esi], 0
        ; Exact mapped bytes E8 9E CA FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 D0 B5 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        pop edi
        pop esi
        leave
        ret
        push ebx
        push dword ptr [ebp + 18h]
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 EA 22 FE FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        xor ebx, ebx
        cmp dword ptr [eax + 8], ebx
        ; Exact mapped bytes 75 17: jne 0x58875a0e
        __asm _emit 0x75
        __asm _emit 0x17
        push edi
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 2C 07 FF FF: call 0x58866130
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov ebx, eax
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x58875b3a
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, esi
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        cmp edi, -1
        ; Exact mapped bytes 75 1B: jne 0x58875a39
        __asm _emit 0x75
        __asm _emit 0x1b
        mov al, byte ptr [edx]
        inc edx
        mov byte ptr [ecx], al
        inc ecx
        test al, al
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x58875b00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 E7: jne 0x58875a1e
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 32: jmp 0x58875a6b
        __asm _emit 0xeb
        __asm _emit 0x32
        mov al, byte ptr [edx]
        inc edx
        mov byte ptr [ecx], al
        inc ecx
        mov dword ptr [ebp - 8], edi
        test al, al
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x58875b00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 05: je 0x58875a5a
        __asm _emit 0x74
        __asm _emit 0x05
        sub edi, 1
        ; Exact mapped bytes 75 DF: jne 0x58875a39
        __asm _emit 0x75
        __asm _emit 0xdf
        mov edi, dword ptr [ebp - 8]
        dec edi
        test eax, eax
        cmove edi, dword ptr [ebp - 8]
        test edi, edi
        ; Exact mapped bytes 75 03: jne 0x58875a6b
        __asm _emit 0x75
        __asm _emit 0x03
        mov byte ptr [ecx], bl
        inc ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x58875b00
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edx], bl
        ; Exact mapped bytes 74 05: je 0x58875a7c
        __asm _emit 0x74
        __asm _emit 0x05
        cmp edi, 1
        ; Exact mapped bytes 75 2C: jne 0x58875aa8
        __asm _emit 0x75
        __asm _emit 0x2c
        lea edx, [ecx - 1]
        mov ecx, edx
        cmp edx, esi
        ; Exact mapped bytes 72 14: jb 0x58875a99
        __asm _emit 0x72
        __asm _emit 0x14
        mov ebx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [ecx]
        test byte ptr [eax + ebx + 19h], 4
        ; Exact mapped bytes 74 05: je 0x58875a97
        __asm _emit 0x74
        __asm _emit 0x05
        dec ecx
        cmp ecx, esi
        ; Exact mapped bytes 73 F1: jae 0x58875a88
        __asm _emit 0x73
        __asm _emit 0xf1
        xor ebx, ebx
        mov eax, edx
        sub eax, ecx
        test al, 1
        ; Exact mapped bytes 74 07: je 0x58875aa8
        __asm _emit 0x74
        __asm _emit 0x07
        mov byte ptr [edx], bl
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x58875b30
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, -1
        ; Exact mapped bytes 75 40: jne 0x58875aed
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, 1
        ; Exact mapped bytes 76 2D: jbe 0x58875ae2
        __asm _emit 0x76
        __asm _emit 0x2d
        lea edi, [esi + eax]
        lea edx, [edi - 2]
        mov ecx, edx
        cmp edx, esi
        ; Exact mapped bytes 72 15: jb 0x58875ad6
        __asm _emit 0x72
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [ecx]
        test byte ptr [eax + edx + 19h], 4
        ; Exact mapped bytes 74 05: je 0x58875ad3
        __asm _emit 0x74
        __asm _emit 0x05
        dec ecx
        cmp ecx, esi
        ; Exact mapped bytes 73 F1: jae 0x58875ac4
        __asm _emit 0x73
        __asm _emit 0xf1
        lea edx, [edi - 2]
        mov eax, edx
        sub eax, ecx
        test al, 1
        ; Exact mapped bytes 74 07: je 0x58875ae5
        __asm _emit 0x74
        __asm _emit 0x07
        mov byte ptr [edx], bl
        ; Exact mapped bytes EB 06: jmp 0x58875ae8
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edi, [eax + esi]
        mov byte ptr [edi - 1], bl
        push 50h
        pop ebx
        ; Exact mapped bytes EB 4D: jmp 0x58875b3a
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov byte ptr [esi], bl
        ; Exact mapped bytes E8 7B C9 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        push 22h
        pop ebx
        mov dword ptr [eax], ebx
        ; Exact mapped bytes E8 AD B4 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 3A: jmp 0x58875b3a
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, ecx
        sub eax, esi
        cmp eax, 2
        ; Exact mapped bytes 7C 31: jl 0x58875b3a
        __asm _emit 0x7c
        __asm _emit 0x31
        lea eax, [ecx - 2]
        mov edx, eax
        cmp eax, esi
        ; Exact mapped bytes 72 15: jb 0x58875b27
        __asm _emit 0x72
        __asm _emit 0x15
        mov edi, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx]
        test byte ptr [eax + edi + 19h], 4
        ; Exact mapped bytes 74 05: je 0x58875b24
        __asm _emit 0x74
        __asm _emit 0x05
        dec edx
        cmp edx, esi
        ; Exact mapped bytes 73 F1: jae 0x58875b15
        __asm _emit 0x73
        __asm _emit 0xf1
        lea eax, [ecx - 2]
        sub eax, edx
        test al, 1
        ; Exact mapped bytes 74 0D: je 0x58875b3a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov byte ptr [ecx - 2], bl
        ; Exact mapped bytes E8 3A C9 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        push 2ah
        pop ebx
        mov dword ptr [eax], ebx
        cmp byte ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x58875b4a
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 18h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov eax, ebx
        pop ebx
        ; Exact mapped bytes E9 8B FE FF FF: jmp 0x588759dd
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
