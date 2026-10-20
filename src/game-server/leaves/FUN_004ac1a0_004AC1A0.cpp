// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AC1A0 .. +0x260 bytes.
extern "C" __declspec(naked) void FUN_004ac1a0_004AC1A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7D 07: jge 0x4ac1b5
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 47 02 00 00: jmp 0x4ac3fc
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 06 B7 00 00: call 0x4b78c0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 3f480h
        ; Exact mapped bytes 7E 6B: jle 0x4ac230
        __asm _emit 0x7e
        __asm _emit 0x6b
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 7ffc0b7fh
        ; Exact mapped bytes 7D 60: jge 0x4ac230
        __asm _emit 0x7d
        __asm _emit 0x60
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 2B 0D 94 1A 5D 00: sub ecx, dword ptr [0x5d1a94]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 89 21 00 00: call 0x4ae370
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 83 3D 98 1A 5D 00 00: cmp dword ptr [0x5d1a98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 35: je 0x4ac22b
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D1 BA 00 00: call 0x4b7cd0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x4ac22b
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 2B 0D 9C 1A 5D 00: sub ecx, dword ptr [0x5d1a9c]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 55 21 00 00: call 0x4ae370
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 20h], 1
        ; Exact mapped bytes E9 C9 01 00 00: jmp 0x4ac3f9
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 37 21 00 00: call 0x4ae370
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 88 BA 00 00: call 0x4b7cd0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x4ac266
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes A1 94 1A 5D 00: mov eax, dword ptr [0x5d1a94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 03 05 9C 1A 5D 00: add eax, dword ptr [0x5d1a9c]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        sub edx, eax
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 0E: jmp 0x4ac274
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 2B 0D 94 1A 5D 00: sub ecx, dword ptr [0x5d1a94]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 7D 16: jge 0x4ac2a2
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        add eax, 3ch
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        sub edx, 3ch
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 7D 18: jge 0x4ac2ea
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        add eax, 3ch
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        sub edx, 3ch
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 8]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 18h
        idiv ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 7D 18: jge 0x4ac332
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        add eax, 18h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        sub edx, 18h
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 18h
        idiv ecx
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 37: jle 0x4ac37d
        __asm _emit 0x7e
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 18h]
        add eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 7
        idiv ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 18h], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1ch], edx
        ; Exact mapped bytes EB 7C: jmp 0x4ac3f9
        __asm _emit 0xeb
        __asm _emit 0x7c
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 76: jge 0x4ac3f9
        __asm _emit 0x7d
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 4]
        lea eax, [edx + eax + 7]
        cdq
        mov ecx, 7
        idiv ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 18h], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 7F 34: jg 0x4ac3ea
        __asm _emit 0x7f
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1fh
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 1ch], 16ch
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 10h], 0bh
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        sub edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 14h], edx
        ; Exact mapped bytes EB 0F: jmp 0x4ac3f9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1ch], edx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
