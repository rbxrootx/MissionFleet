// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050942D .. +0x2B5 bytes.
extern "C" __declspec(naked) void FUN_0050942d_0050942D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e7dch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 06: jl 0x50945a
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 14: jge 0x50946e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0dch
        push 5cb450h
        ; Exact mapped bytes E8 97 B5 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50946e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x50944e
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7F 14: jg 0x50948e
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0ddh
        push 5cb450h
        ; Exact mapped bytes E8 77 B5 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50948e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x509474
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 7
        ; Exact mapped bytes 74 06: je 0x5094a0
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 14: jne 0x5094b4
        __asm _emit 0x75
        __asm _emit 0x14
        push 0deh
        push 5cb450h
        ; Exact mapped bytes E8 51 B5 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5094b4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x509494
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 40h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 85 C1 02 00: call 0x535661
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 44h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 48h], edx
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 B0 A2 FF FF: call 0x5037a5
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 7F 14: jg 0x509519
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0e7h
        push 5cb450h
        ; Exact mapped bytes E8 EC B4 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509519
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5094fc
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 40h]
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 CE 83 FF FF: call 0x5018fc
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [ecx + 48h]
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 4ch], edx
        mov dword ptr [ecx + 50h], eax
        push 1
        mov edx, dword ptr [ebp - 40h]
        add edx, 4ch
        push edx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 97 EE 02 00: call 0x5383e8
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 FE C0 02 00: call 0x535661
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 58h], edx
        push 1
        mov eax, dword ptr [ebp - 40h]
        add eax, 54h
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 65 EE 02 00: call 0x5383e8
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 CC C0 02 00: call 0x535661
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 60h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 5ch
        push ecx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 33 EE 02 00: call 0x5383e8
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 7D 0E: jge 0x5095cc
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 50h]
        neg ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 7D 0E: jge 0x5095e3
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 58h]
        neg edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [eax + 58h], edx
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 7D 0E: jge 0x5095fa
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 60h]
        neg eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 60h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 4E A2 FF FF: call 0x503857
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 7C 09: jl 0x50961b
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 7D 14: jge 0x50962f
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0fah
        push 5cb450h
        ; Exact mapped bytes E8 D6 B3 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50962f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x509609
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 75 14: jne 0x509652
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 40h]
        mov eax, dword ptr [eax + 4ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx + 54h], eax
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 75 14: jne 0x50966f
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ecx + 50h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx + 58h], eax
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 75 14: jne 0x50968c
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ecx + 54h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx + 5ch], eax
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 75 14: jne 0x5096a9
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ecx + 58h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx + 60h], eax
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 1D: je 0x5096cf
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 89 0B 00 00: call 0x50a243
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 40h]
        ; Exact mapped bytes 74 0A: je 0x5096cf
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 80 2E 03 00: call 0x53c54f
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
