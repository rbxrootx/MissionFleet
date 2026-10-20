// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006C7A0 .. +0x2A0 bytes.
extern "C" __declspec(naked) void FUN_1006c7a0_1006C7A0() {
    __asm {
        push -1
        push 1016f62bh
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
        sub esp, 20h
        mov dword ptr [esp + 0ch], ecx
        mov ecx, dword ptr [ecx + 104e0h]
        push ebx
        push esi
        mov eax, dword ptr [ecx + 0b0h]
        xor ebx, ebx
        imul eax, dword ptr [ecx + 0a8h]
        cdq
        and edx, 3ffh
        mov dword ptr [esp + 8], ebx
        add eax, edx
        mov esi, eax
        mov eax, dword ptr [ecx + 0b4h]
        imul eax, dword ptr [ecx + 0ach]
        cdq
        and edx, 1ffh
        add eax, edx
        sar eax, 9
        sar esi, 0ah
        cmp eax, ebx
        mov dword ptr [esp + 20h], esi
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 0F 8E 21 02 00 00: jle 0x1006ca2f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        ; Exact mapped bytes 8B 2D 20 51 17 10: mov ebp, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push edi
        xor edi, edi
        cmp esi, ebx
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes 0F 8E F8 01 00 00: jle 0x1006ca1c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        lea esi, [edi + eax]
        mov ecx, esi
        imul ecx, esi
        push ecx
        ; Exact mapped bytes FF 15 40 51 17 10: call dword ptr [0x10175140]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 4
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x1006c848
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        ; Exact mapped bytes 0F 84 B7 01 00 00: je 0x1006ca05
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        cdq
        mov ecx, 6
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 8E A1 01 00 00: jle 0x1006ca05
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes EB 08: jmp 0x1006c872
        __asm _emit 0xeb
        __asm _emit 0x08
        mov esi, dword ptr [esp + 14h]
        mov edi, dword ptr [esp + 18h]
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 43 F9 FB FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        imul eax, esi
        imul eax, esi
        push eax
        ; Exact mapped bytes FF 15 40 51 17 10: call dword ptr [0x10175140]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push 94h
        ; Exact mapped bytes E8 0C FF 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, eax
        add esp, 8
        mov dword ptr [esp + 24h], esi
        cmp esi, ebx
        mov dword ptr [esp + 38h], ebx
        ; Exact mapped bytes 74 4C: je 0x1006c8f1
        __asm _emit 0x74
        __asm _emit 0x4c
        push 40h
        push ebx
        push ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        and eax, 800001ffh
        ; Exact mapped bytes 79 07: jns 0x1006c8b9
        __asm _emit 0x79
        __asm _emit 0x07
        dec eax
        or eax, 0fffffe00h
        inc eax
        mov edx, dword ptr [esp + 1ch]
        inc edx
        shl edx, 9
        sub edx, eax
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        and eax, 800003ffh
        ; Exact mapped bytes 79 07: jns 0x1006c8d4
        __asm _emit 0x79
        __asm _emit 0x07
        dec eax
        or eax, 0fffffc00h
        inc eax
        inc edi
        shl edi, 0ah
        sub edi, eax
        mov eax, dword ptr [esp + 2ch]
        push edi
        mov ecx, dword ptr [eax + 104e0h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 53 82 FA FF: call 0x10014b40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x1006c8f3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov cl, byte ptr [esi + 50h]
        mov dword ptr [esp + 38h], 0ffffffffh
        or cl, 2
        ; Exact mapped bytes 66 C7 46 26 10 27: mov word ptr [esi + 0x26], 0x2710
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x27
        mov byte ptr [esi + 50h], cl
        mov ecx, dword ptr [esi + 40h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1006c917
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 89 26 09 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x1006c924
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 DC 25 09 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x25
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        cdq
        mov ecx, 18h
        idiv ecx
        mov ecx, esi
        add edx, 8
        push edx
        ; Exact mapped bytes E8 57 80 FC FF: call 0x10034990
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edi, 12ch
        push 6
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        cdq
        mov ecx, 6
        idiv ecx
        mov ecx, esi
        push edx
        ; Exact mapped bytes E8 5B 83 FA FF: call 0x10014cb0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [esi + 88h], edi
        push 14h
        mov edi, dword ptr [edx + 20bb8h]
        cmp dword ptr [edi + 8], ebx
        ; Exact mapped bytes 75 30: jne 0x1006c99c
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes E8 2F FE 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebx
        ; Exact mapped bytes 74 1A: je 0x1006c992
        __asm _emit 0x74
        __asm _emit 0x1a
        mov dword ptr [eax], 10175cb0h
        mov dword ptr [eax + 10h], ebx
        mov dword ptr [eax + 0ch], esi
        mov dword ptr [eax + 8], ebx
        mov dword ptr [eax + 4], ebx
        mov dword ptr [edi + 8], eax
        mov dword ptr [edi + 4], eax
        ; Exact mapped bytes EB 44: jmp 0x1006c9d6
        __asm _emit 0xeb
        __asm _emit 0x44
        xor eax, eax
        mov dword ptr [edi + 8], eax
        mov dword ptr [edi + 4], eax
        ; Exact mapped bytes EB 3A: jmp 0x1006c9d6
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes E8 FF FD 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        cmp eax, ebx
        ; Exact mapped bytes 74 14: je 0x1006c9bc
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [eax], 10175cb0h
        mov dword ptr [eax + 10h], ebx
        mov dword ptr [eax + 0ch], esi
        mov dword ptr [eax + 8], ebx
        mov dword ptr [eax + 4], ebx
        ; Exact mapped bytes EB 02: jmp 0x1006c9be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [ecx + 8], eax
        mov eax, dword ptr [edi + 8]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 8], ecx
        mov esi, dword ptr [edi + 0ch]
        mov ecx, dword ptr [esp + 14h]
        inc esi
        mov dword ptr [edi + 0ch], esi
        mov esi, dword ptr [esp + 20h]
        inc esi
        inc ecx
        mov dword ptr [esp + 20h], esi
        mov dword ptr [esp + 14h], ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        cdq
        mov ecx, 6
        idiv ecx
        cmp esi, edx
        ; Exact mapped bytes 0F 8C 69 FE FF FF: jl 0x1006c86a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 28h]
        inc edi
        cmp edi, eax
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes 0F 8C 0E FE FF FF: jl 0x1006c824
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 10h]
        inc ecx
        cmp ecx, eax
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 8C E9 FD FF FF: jl 0x1006c816
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebp
        mov ecx, dword ptr [esp + 28h]
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ret
    }
}
