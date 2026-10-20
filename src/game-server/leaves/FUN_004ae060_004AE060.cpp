// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AE060 .. +0x309 bytes.
extern "C" __declspec(naked) void FUN_004ae060_004AE060() {
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
        ; Exact mapped bytes 7C 09: jl 0x4ae080
        __asm _emit 0x7c
        __asm _emit 0x09
        cmp dword ptr [ebp - 0ch], 8bh
        ; Exact mapped bytes 7E 05: jle 0x4ae085
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 DB 02 00 00: jmp 0x4ae360
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 7C 09: jl 0x4ae097
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 0bh
        ; Exact mapped bytes 7E 5F: jle 0x4ae0f6
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
        ; Exact mapped bytes 7D 18: jge 0x4ae0e2
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
        ; Exact mapped bytes 7C 09: jl 0x4ae0f1
        __asm _emit 0x7c
        __asm _emit 0x09
        cmp dword ptr [ebp - 0ch], 8bh
        ; Exact mapped bytes 7E 05: jle 0x4ae0f6
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 6A 02 00 00: jmp 0x4ae360
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx*4 + 5d1eb4h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        and eax, 3
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4ae122
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 1
        ; Exact mapped bytes 7E 09: jle 0x4ae122
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
        ; Exact mapped bytes 7C 0C: jl 0x4ae16b
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7C 06: jl 0x4ae16b
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 12: jl 0x4ae17d
        __asm _emit 0x7c
        __asm _emit 0x12
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 11: jge 0x4ae182
        __asm _emit 0x7d
        __asm _emit 0x11
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 0B: jge 0x4ae182
        __asm _emit 0x7d
        __asm _emit 0x0b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 05: jl 0x4ae182
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 DE 01 00 00: jmp 0x4ae360
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 18h
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4ae1a5
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        cdq
        idiv dword ptr [ebp - 0ch]
        xor edx, edx
        cmp eax, 18h
        setne dl
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 07: jmp 0x4ae1ac
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 05: je 0x4ae1b7
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 A9 01 00 00: jmp 0x4ae360
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
        ; Exact mapped bytes 7C 0C: jl 0x4ae1db
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 06: jl 0x4ae1db
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 12: jl 0x4ae1ed
        __asm _emit 0x7c
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 11: jge 0x4ae1f2
        __asm _emit 0x7d
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0B: jge 0x4ae1f2
        __asm _emit 0x7d
        __asm _emit 0x0b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 05: jl 0x4ae1f2
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 6E 01 00 00: jmp 0x4ae360
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 3ch
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4ae215
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        cdq
        idiv dword ptr [ebp - 0ch]
        xor ecx, ecx
        cmp eax, 3ch
        setne cl
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 07: jmp 0x4ae21c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 05: je 0x4ae227
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x4ae360
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
        ; Exact mapped bytes 7C 0C: jl 0x4ae24b
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 06: jl 0x4ae24b
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 12: jl 0x4ae25d
        __asm _emit 0x7c
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 11: jge 0x4ae262
        __asm _emit 0x7d
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0B: jge 0x4ae262
        __asm _emit 0x7d
        __asm _emit 0x0b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 05: jl 0x4ae262
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x4ae360
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 3ch
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4ae285
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        cdq
        idiv dword ptr [ebp - 0ch]
        xor ecx, ecx
        cmp eax, 3ch
        setne cl
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x4ae28c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 05: je 0x4ae297
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x4ae360
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
        ; Exact mapped bytes 7C 0C: jl 0x4ae2ba
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 06: jl 0x4ae2ba
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 12: jl 0x4ae2cc
        __asm _emit 0x7c
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 11: jge 0x4ae2d1
        __asm _emit 0x7d
        __asm _emit 0x11
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 0B: jge 0x4ae2d1
        __asm _emit 0x7d
        __asm _emit 0x0b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 05: jl 0x4ae2d1
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x4ae360
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 60: je 0x4ae337
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes E8 E4 95 00 00: call 0x4b78c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 03 15 94 1A 5D 00: add edx, dword ptr [0x5d1a94]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 AF DE FF FF: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 02: jne 0x4ae2ff
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 61: jmp 0x4ae360
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 7F 12: jg 0x4ae31a
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 7D 24: jge 0x4ae335
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 7E 1B: jle 0x4ae335
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 03 0D 9C 1A 5D 00: add ecx, dword ptr [0x5d1a9c]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 71 DE FF FF: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 17: jmp 0x4ae34e
        __asm _emit 0xeb
        __asm _emit 0x17
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 30 00 00 00: call 0x4ae370
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 02: jne 0x4ae34e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 12: jmp 0x4ae360
        __asm _emit 0xeb
        __asm _emit 0x12
        mov esi, dword ptr [ebp - 4]
        mov ecx, 9
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 03: jmp 0x4ae363
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
