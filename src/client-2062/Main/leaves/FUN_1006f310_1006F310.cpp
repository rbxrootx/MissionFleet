// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006F310 .. +0x31D bytes.
extern "C" __declspec(naked) void FUN_1006f310_1006F310() {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, 19h
        mov eax, dword ptr [esi + 104cch]
        cdq
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 FE 02 00 00: jne 0x1006f629
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2170ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 E0 01 00 00: jne 0x1006f519
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20c40h]
        test ecx, ecx
        ; Exact mapped bytes 74 66: je 0x1006f3a9
        __asm _emit 0x74
        __asm _emit 0x66
        mov eax, dword ptr [esi + 20c38h]
        cmp eax, ecx
        ; Exact mapped bytes 7C 5C: jl 0x1006f3a9
        __asm _emit 0x7c
        __asm _emit 0x5c
        mov ecx, dword ptr [esi + 20c3ch]
        push edx
        add ecx, eax
        mov eax, dword ptr [esi + 20c28h]
        mov dword ptr [esi + 20c3ch], ecx
        push edx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, esi
        test eax, eax
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes 74 1B: je 0x1006f38e
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes E8 88 B0 FF FF: call 0x1006a400
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10464h]
        pop edi
        and cl, 10h
        or ecx, 10h
        mov dword ptr [esi + 10464h], ecx
        pop esi
        pop ebp
        ret
        ; Exact mapped bytes E8 6D B0 FF FF: call 0x1006a400
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10464h]
        pop edi
        and cl, 20h
        or ecx, 20h
        mov dword ptr [esi + 10464h], ecx
        pop esi
        pop ebp
        ret
        mov eax, dword ptr [esi + 20c38h]
        inc eax
        mov dword ptr [esi + 20c38h], eax
        mov ecx, eax
        mov eax, 88888889h
        imul ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 20c30h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 49 03 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20c38h]
        mov ecx, 3ch
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 20c34h]
        push edx
        ; Exact mapped bytes E8 2F 03 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20c38h]
        mov eax, dword ptr [esi + 20bc8h]
        cmp ecx, eax
        mov edi, 1
        ; Exact mapped bytes 7D 41: jge 0x1006f447
        __asm _emit 0x7d
        __asm _emit 0x41
        mov edx, dword ptr [esi + 20bcch]
        mov ebp, dword ptr [esi + 20be8h]
        xor eax, eax
        cmp edx, ebp
        ; Exact mapped bytes 7F 02: jg 0x1006f41a
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, edi
        mov edx, dword ptr [esi + 20bd0h]
        mov ebp, dword ptr [esi + 20bech]
        cmp edx, ebp
        ; Exact mapped bytes 7F 01: jg 0x1006f42b
        __asm _emit 0x7f
        __asm _emit 0x01
        inc eax
        mov edx, dword ptr [esi + 20bd4h]
        mov ebp, dword ptr [esi + 20bf0h]
        cmp edx, ebp
        ; Exact mapped bytes 7F 01: jg 0x1006f43c
        __asm _emit 0x7f
        __asm _emit 0x01
        inc eax
        cmp eax, 3
        ; Exact mapped bytes 75 06: jne 0x1006f447
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 20c28h], edi
        cmp ecx, dword ptr [esi + 20bd8h]
        ; Exact mapped bytes 7D 41: jge 0x1006f490
        __asm _emit 0x7d
        __asm _emit 0x41
        mov ecx, dword ptr [esi + 20bdch]
        mov edx, dword ptr [esi + 20be8h]
        xor eax, eax
        cmp ecx, edx
        ; Exact mapped bytes 7F 02: jg 0x1006f463
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, edi
        mov edx, dword ptr [esi + 20be0h]
        mov ecx, dword ptr [esi + 20bech]
        cmp edx, ecx
        ; Exact mapped bytes 7F 01: jg 0x1006f474
        __asm _emit 0x7f
        __asm _emit 0x01
        inc eax
        mov ecx, dword ptr [esi + 20be4h]
        mov edx, dword ptr [esi + 20bf0h]
        cmp ecx, edx
        ; Exact mapped bytes 7F 01: jg 0x1006f485
        __asm _emit 0x7f
        __asm _emit 0x01
        inc eax
        cmp eax, 3
        ; Exact mapped bytes 75 06: jne 0x1006f490
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 20c2ch], edi
        mov eax, dword ptr [esi + 20c2ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 8B 01 00 00: je 0x1006f629
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20c44h]
        mov ecx, esi
        inc eax
        mov dword ptr [esi + 20c2ch], 0
        mov dword ptr [esi + 20c28h], 0
        mov dword ptr [esi + 20c44h], eax
        ; Exact mapped bytes E8 1A 1F 00 00: call 0x100713e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 63h
        ; Exact mapped bytes E8 D7 E5 FA FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes A1 44 57 1C 10: mov eax, dword ptr [0x101c5744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 48h
        ; Exact mapped bytes 7E 20: jle 0x1006f507
        __asm _emit 0x7e
        __asm _emit 0x20
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x1006f507
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [eax + 120h]
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 CD DF FA FF: call 0x1001d4d0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xdf
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ret
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 BB DF FA FF: call 0x1001d4d0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xdf
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ret
        mov edi, 1
        cmp eax, edi
        ; Exact mapped bytes 74 09: je 0x1006f52b
        __asm _emit 0x74
        __asm _emit 0x09
        cmp eax, 2
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x1006f629
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20c40h]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1006f541
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [esi + 20c38h], eax
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x1006f5cd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20c38h]
        mov eax, 88888889h
        inc ecx
        imul ecx
        add edx, ecx
        mov dword ptr [esi + 20c38h], ecx
        sar edx, 5
        mov ecx, dword ptr [esi + 20c30h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 B3 01 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20c38h]
        mov ecx, 3ch
        cdq
        idiv ecx
        mov ecx, dword ptr [esi + 20c34h]
        push edx
        ; Exact mapped bytes E8 99 01 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x09
        __asm _emit 0x00
        xor eax, eax
        lea ecx, [esi + 20be8h]
        mov edx, dword ptr [ecx]
        mov ebp, dword ptr [ecx + 508h]
        cmp edx, ebp
        ; Exact mapped bytes 7E 0B: jle 0x1006f5a6
        __asm _emit 0x7e
        __asm _emit 0x0b
        inc eax
        add ecx, 4
        cmp eax, 8
        ; Exact mapped bytes 7C EB: jl 0x1006f58f
        __asm _emit 0x7c
        __asm _emit 0xeb
        ; Exact mapped bytes EB 02: jmp 0x1006f5a8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        cmp eax, 10h
        ; Exact mapped bytes 7D 1C: jge 0x1006f5c9
        __asm _emit 0x7d
        __asm _emit 0x1c
        lea ecx, [esi + eax*4 + 20be8h]
        mov edx, dword ptr [ecx]
        mov ebp, dword ptr [ecx + 508h]
        cmp edx, ebp
        ; Exact mapped bytes 7F 0D: jg 0x1006f5cd
        __asm _emit 0x7f
        __asm _emit 0x0d
        inc eax
        add ecx, 4
        cmp eax, 10h
        ; Exact mapped bytes 7C EB: jl 0x1006f5b4
        __asm _emit 0x7c
        __asm _emit 0xeb
        test edi, edi
        ; Exact mapped bytes 74 5C: je 0x1006f629
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [esi + 20c38h]
        mov ecx, dword ptr [esi + 20c3ch]
        add ecx, eax
        mov eax, dword ptr [esi + 20c28h]
        mov dword ptr [esi + 20c3ch], ecx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        mov edx, dword ptr [ecx + 4]
        mov ecx, esi
        test eax, eax
        push edx
        ; Exact mapped bytes 74 19: je 0x1006f614
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 00 AE FF FF: call 0x1006a400
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 10464h]
        pop edi
        and al, 10h
        or al, 10h
        mov dword ptr [esi + 10464h], eax
        pop esi
        pop ebp
        ret
        ; Exact mapped bytes E8 E7 AD FF FF: call 0x1006a400
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 10464h]
        and al, 20h
        or al, 20h
        mov dword ptr [esi + 10464h], eax
        pop edi
        pop esi
        pop ebp
        ret
    }
}
