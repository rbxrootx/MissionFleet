// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049FF36 .. +0x2EC bytes.
extern "C" __declspec(naked) void FUN_0049ff36_0049FF36() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 1D C8 7E 58 00: fcomp qword ptr [0x587ec8]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 74 10: je 0x49ff5c
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 1D C0 7E 58 00: fcomp qword ptr [0x587ec0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 07: je 0x49ff63
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B9 02 00 00: jmp 0x4a021c
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 7E 95 00 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 1D 18 11 58 00: fcomp qword ptr [0x581118]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 10: jne 0x49ffa1
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 38h], 0a0ce5129h
        mov dword ptr [ebp - 34h], 3ed845c8h
        ; Exact mapped bytes EB 0E: jmp 0x49ffaf
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 38h], 0a0ce5129h
        mov dword ptr [ebp - 34h], 0bed845c8h
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes DC 45 C8: fadd qword ptr [ebp - 0x38]
        __asm _emit 0xdc
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes DD 55 F8: fst qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes E8 3F 95 00 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0a96c7h
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 9E 19 01 00: call 0x4b1970
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 4B 18 01 00: call 0x4b1830
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC 6D F8: fsubr qword ptr [ebp - 8]
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0xf8
        ; Exact mapped bytes DC 0D B8 7E 58 00: fmul qword ptr [0x587eb8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 06 95 00 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 1ch]
        sub eax, 1
        cdq
        mov ecx, 7
        idiv ecx
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 18h], edx
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 23ab1h
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 23ab1h
        idiv ecx
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        sub eax, 1
        cdq
        mov ecx, 8each
        idiv ecx
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 4A: je 0x4a008d
        __asm _emit 0x74
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 1ch]
        sub eax, 1
        cdq
        mov ecx, 8each
        idiv ecx
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        cdq
        mov ecx, 5b5h
        idiv ecx
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 13: je 0x4a007e
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        cdq
        mov ecx, 5b5h
        idiv ecx
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 0D: jmp 0x4a008b
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 1C: jmp 0x4a00a9
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 5b5h
        idiv ecx
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 5b5h
        idiv ecx
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 2A: je 0x4a00d9
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 28h]
        sub eax, 1
        cdq
        mov ecx, 16dh
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 11: je 0x4a00d7
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 28h]
        sub eax, 1
        cdq
        mov ecx, 16dh
        idiv ecx
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 1C: jmp 0x4a00f5
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 28h]
        cdq
        mov ecx, 16dh
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 28h]
        cdq
        mov ecx, 16dh
        idiv ecx
        mov dword ptr [ebp - 28h], edx
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 190h
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 64h
        add edx, dword ptr [ebp - 18h]
        add edx, ecx
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [edx + eax*4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 14h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 34: jne 0x4a015b
        __asm _emit 0x75
        __asm _emit 0x34
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 2E: je 0x4a015b
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dword ptr [ebp - 28h], 3bh
        ; Exact mapped bytes 75 19: jne 0x4a014c
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 10h], 2
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 0ch], 1dh
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x4a021a
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 3ch
        ; Exact mapped bytes 7C 09: jl 0x4a015b
        __asm _emit 0x7c
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        sub edx, 1
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        sar ecx, 5
        add ecx, 1
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 10h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x4a0184
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 1
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 10h], ecx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ecx*4 + 5cbe4ch]
        ; Exact mapped bytes 7E 02: jle 0x4a0198
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB DD: jmp 0x4a0175
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 28h]
        sub edx, dword ptr [ecx*4 + 5cbe48h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 0ch], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 1F: jne 0x4a01d3
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 8], 0
        ; Exact mapped bytes EB 40: jmp 0x4a0213
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 24h]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 24h]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 2ch]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 8], eax
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4a021c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 92: jmp 0x4a01ae
        __asm _emit 0xeb
        __asm _emit 0x92
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
