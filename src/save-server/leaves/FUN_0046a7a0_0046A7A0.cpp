// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046A7A0 .. +0x309 bytes.
extern "C" __declspec(naked) void FUN_0046a7a0_0046A7A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 45h
        ; Exact mapped bytes 7C 09: jl 0x46a7c0
        __asm _emit 0x7c
        __asm _emit 0x09
        cmp dword ptr [ebp - 0ch], 8bh
        ; Exact mapped bytes 7E 05: jle 0x46a7c5
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 DB 02 00 00: jmp 0x46aaa0
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 7C 09: jl 0x46a7d7
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 0bh
        ; Exact mapped bytes 7E 5F: jle 0x46a836
        __asm _emit 0x7e
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 10h]
        cdq
        mov ecx, 0ch
        idiv ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, eax
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 10h]
        cdq
        mov ecx, 0ch
        idiv ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 10h], edx
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 7D 18: jge 0x46a822
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        add eax, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 45h
        ; Exact mapped bytes 7C 09: jl 0x46a831
        __asm _emit 0x7c
        __asm _emit 0x09
        cmp dword ptr [ebp - 0ch], 8bh
        ; Exact mapped bytes 7E 05: jle 0x46a836
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 6A 02 00 00: jmp 0x46aaa0
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx*4 + 680358h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        and eax, 3
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x46a862
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 1
        ; Exact mapped bytes 7E 09: jle 0x46a862
        __asm _emit 0x7e
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 46h
        imul eax, eax, 16dh
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 1
        sar ecx, 2
        lea edx, [eax + ecx - 11h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 0C: jl 0x46a8ab
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7C 06: jl 0x46a8ab
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 12: jl 0x46a8bd
        __asm _emit 0x7c
        __asm _emit 0x12
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 11: jge 0x46a8c2
        __asm _emit 0x7d
        __asm _emit 0x11
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 0B: jge 0x46a8c2
        __asm _emit 0x7d
        __asm _emit 0x0b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 05: jl 0x46a8c2
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 DE 01 00 00: jmp 0x46aaa0
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 18h
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x46a8e5
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        cdq
        idiv dword ptr [ebp - 0ch]
        xor edx, edx
        cmp eax, 18h
        setne dl
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 07: jmp 0x46a8ec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 05: je 0x46a8f7
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 A9 01 00 00: jmp 0x46aaa0
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7C 0C: jl 0x46a91b
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 06: jl 0x46a91b
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 12: jl 0x46a92d
        __asm _emit 0x7c
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 11: jge 0x46a932
        __asm _emit 0x7d
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0B: jge 0x46a932
        __asm _emit 0x7d
        __asm _emit 0x0b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 05: jl 0x46a932
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 6E 01 00 00: jmp 0x46aaa0
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 3ch
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x46a955
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        cdq
        idiv dword ptr [ebp - 0ch]
        xor ecx, ecx
        cmp eax, 3ch
        setne cl
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 07: jmp 0x46a95c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 05: je 0x46a967
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x46aaa0
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7C 0C: jl 0x46a98b
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 06: jl 0x46a98b
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 12: jl 0x46a99d
        __asm _emit 0x7c
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 11: jge 0x46a9a2
        __asm _emit 0x7d
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0B: jge 0x46a9a2
        __asm _emit 0x7d
        __asm _emit 0x0b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 05: jl 0x46a9a2
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x46aaa0
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 3ch
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x46a9c5
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        cdq
        idiv dword ptr [ebp - 0ch]
        xor ecx, ecx
        cmp eax, 3ch
        setne cl
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x46a9cc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 05: je 0x46a9d7
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x46aaa0
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7C 0C: jl 0x46a9fa
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 06: jl 0x46a9fa
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 12: jl 0x46aa0c
        __asm _emit 0x7c
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 11: jge 0x46aa11
        __asm _emit 0x7d
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0B: jge 0x46aa11
        __asm _emit 0x7d
        __asm _emit 0x0b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 05: jl 0x46aa11
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x46aaa0
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 60: je 0x46aa77
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes E8 64 CB 00 00: call 0x477580
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 03 15 70 02 68 00: add edx, dword ptr [0x680270]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 0F 04 00 00: call 0x46ae40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 02: jne 0x46aa3f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 61: jmp 0x46aaa0
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 7F 12: jg 0x46aa5a
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 7D 24: jge 0x46aa75
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 7E 1B: jle 0x46aa75
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 03 0D 78 02 68 00: add ecx, dword ptr [0x680278]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 D1 03 00 00: call 0x46ae40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 17: jmp 0x46aa8e
        __asm _emit 0xeb
        __asm _emit 0x17
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 C0 01 00 00: call 0x46ac40
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 02: jne 0x46aa8e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 12: jmp 0x46aaa0
        __asm _emit 0xeb
        __asm _emit 0x12
        mov esi, dword ptr [ebp - 4]
        mov ecx, 9
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 03: jmp 0x46aaa3
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
