// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041FEB9 .. +0x1E4 bytes.
extern "C" __declspec(naked) void FUN_0041feb9_0041FEB9() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov ecx, dword ptr [edi + 14h]
        cmp ecx, 45h
        ; Exact mapped bytes 0F 8C C9 01 00 00: jl 0x420096
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 8bh
        ; Exact mapped bytes 0F 8F BD 01 00 00: jg 0x420096
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 10h]
        test esi, esi
        ; Exact mapped bytes 7C 05: jl 0x41fee5
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp esi, 0bh
        ; Exact mapped bytes 7E 36: jle 0x41ff1b
        __asm _emit 0x7e
        __asm _emit 0x36
        push ebx
        mov eax, esi
        push 0ch
        cdq
        pop ebx
        idiv ebx
        push ebx
        add ecx, eax
        mov eax, esi
        cdq
        pop esi
        pop ebx
        idiv esi
        test edx, edx
        mov dword ptr [edi + 10h], edx
        ; Exact mapped bytes 7D 07: jge 0x41ff06
        __asm _emit 0x7d
        __asm _emit 0x07
        add edx, 0ch
        dec ecx
        mov dword ptr [edi + 10h], edx
        cmp ecx, 45h
        ; Exact mapped bytes 0F 8C 87 01 00 00: jl 0x420096
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 8bh
        ; Exact mapped bytes 0F 8F 7B 01 00 00: jg 0x420096
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 10h]
        test cl, 3
        mov eax, dword ptr [edx*4 + 44d150h]
        ; Exact mapped bytes 75 06: jne 0x41ff30
        __asm _emit 0x75
        __asm _emit 0x06
        cmp edx, 1
        ; Exact mapped bytes 7E 01: jle 0x41ff30
        __asm _emit 0x7e
        __asm _emit 0x01
        inc eax
        lea edx, [ecx - 1]
        imul ecx, ecx, 16dh
        sar edx, 2
        add eax, edx
        lea eax, [ecx + eax - 63dfh]
        mov ecx, dword ptr [edi + 0ch]
        test eax, eax
        lea esi, [eax + ecx]
        ; Exact mapped bytes 7C 0E: jl 0x41ff5d
        __asm _emit 0x7c
        __asm _emit 0x0e
        test ecx, ecx
        ; Exact mapped bytes 7C 16: jl 0x41ff69
        __asm _emit 0x7c
        __asm _emit 0x16
        test esi, esi
        ; Exact mapped bytes 0F 8C 3B 01 00 00: jl 0x420096
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x41ff69
        __asm _emit 0xeb
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 7D 08: jge 0x41ff69
        __asm _emit 0x7d
        __asm _emit 0x08
        test esi, esi
        ; Exact mapped bytes 0F 8D 2D 01 00 00: jge 0x420096
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + esi*2]
        shl ecx, 3
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x41ff84
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, ecx
        cdq
        idiv esi
        xor edx, edx
        cmp eax, 18h
        setne dl
        mov eax, edx
        ; Exact mapped bytes EB 02: jmp 0x41ff86
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 0F 85 08 01 00 00: jne 0x420096
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        test ecx, ecx
        lea esi, [eax + ecx]
        ; Exact mapped bytes 7C 0E: jl 0x41ffa6
        __asm _emit 0x7c
        __asm _emit 0x0e
        test eax, eax
        ; Exact mapped bytes 7C 16: jl 0x41ffb2
        __asm _emit 0x7c
        __asm _emit 0x16
        test esi, esi
        ; Exact mapped bytes 0F 8C F2 00 00 00: jl 0x420096
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x41ffb2
        __asm _emit 0xeb
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 7D 08: jge 0x41ffb2
        __asm _emit 0x7d
        __asm _emit 0x08
        test esi, esi
        ; Exact mapped bytes 0F 8D E4 00 00 00: jge 0x420096
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        imul ecx, ecx, 3ch
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x41ffcc
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, ecx
        cdq
        idiv esi
        xor edx, edx
        cmp eax, 3ch
        setne dl
        mov eax, edx
        ; Exact mapped bytes EB 02: jmp 0x41ffce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x420096
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        test ecx, ecx
        lea esi, [eax + ecx]
        ; Exact mapped bytes 7C 0E: jl 0x41ffee
        __asm _emit 0x7c
        __asm _emit 0x0e
        test eax, eax
        ; Exact mapped bytes 7C 16: jl 0x41fffa
        __asm _emit 0x7c
        __asm _emit 0x16
        test esi, esi
        ; Exact mapped bytes 0F 8C AA 00 00 00: jl 0x420096
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x41fffa
        __asm _emit 0xeb
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 7D 08: jge 0x41fffa
        __asm _emit 0x7d
        __asm _emit 0x08
        test esi, esi
        ; Exact mapped bytes 0F 8D 9C 00 00 00: jge 0x420096
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        imul ecx, ecx, 3ch
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x420014
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, ecx
        cdq
        idiv esi
        xor edx, edx
        cmp eax, 3ch
        setne dl
        mov eax, edx
        ; Exact mapped bytes EB 02: jmp 0x420016
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 7C: jne 0x420096
        __asm _emit 0x75
        __asm _emit 0x7c
        mov eax, dword ptr [edi]
        test ecx, ecx
        lea edx, [eax + ecx]
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes 7C 0A: jl 0x420030
        __asm _emit 0x7c
        __asm _emit 0x0a
        test eax, eax
        ; Exact mapped bytes 7C 0E: jl 0x420038
        __asm _emit 0x7c
        __asm _emit 0x0e
        test edx, edx
        ; Exact mapped bytes 7C 68: jl 0x420096
        __asm _emit 0x7c
        __asm _emit 0x68
        ; Exact mapped bytes EB 08: jmp 0x420038
        __asm _emit 0xeb
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 7D 04: jge 0x420038
        __asm _emit 0x7d
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 7D 5E: jge 0x420096
        __asm _emit 0x7d
        __asm _emit 0x5e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 3E: je 0x42007c
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes E8 AD 5A 00 00: call 0x425af0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 68 D0 44 00: mov eax, dword ptr [0x44d068]
        __asm _emit 0xa1
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        add dword ptr [ebp + 8], eax
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2F 02 00 00: call 0x420283
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 3D: je 0x420096
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [edi + 20h]
        test ecx, ecx
        ; Exact mapped bytes 7F 08: jg 0x420068
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 7D 28: jge 0x42008a
        __asm _emit 0x7d
        __asm _emit 0x28
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 7E 22: jle 0x42008a
        __asm _emit 0x7e
        __asm _emit 0x22
        ; Exact mapped bytes A1 70 D0 44 00: mov eax, dword ptr [0x44d070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        add dword ptr [ebp + 8], eax
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 0A 02 00 00: call 0x420283
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB 0E: jmp 0x42008a
        __asm _emit 0xeb
        __asm _emit 0x0e
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F4 00 00 00: call 0x420179
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 0C: je 0x420096
        __asm _emit 0x74
        __asm _emit 0x0c
        push 9
        mov esi, eax
        mov eax, dword ptr [ebp + 8]
        pop ecx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes EB 03: jmp 0x420099
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebp
        ret
    }
}
