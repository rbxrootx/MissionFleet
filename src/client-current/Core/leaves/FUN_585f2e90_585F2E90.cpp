// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F2E90 .. +0x20A bytes.
extern "C" __declspec(naked) void FUN_585f2e90_585F2E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 64h], 40000000h
        ; Exact mapped bytes 0F 85 EB 01 00 00: jne 0x585f3095
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 0f8h]
        mov edx, dword ptr [ebp - 4]
        add esi, dword ptr [edx + 0b0h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 F6 1A E9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x1a
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 28: jne 0x585f2ef6
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 0fch]
        mov edx, dword ptr [ebp - 4]
        add esi, dword ptr [edx + 0b4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 42 28 EA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x28
        __asm _emit 0xea
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x585f3043
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 0f8h]
        mov edx, dword ptr [ebp - 4]
        add esi, dword ptr [edx + 0b0h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 AA 1A E9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x1a
        __asm _emit 0xe9
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 0ch], esi
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 0fch]
        mov edx, dword ptr [ebp - 4]
        add esi, dword ptr [edx + 0b4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 F5 27 EA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x27
        __asm _emit 0xea
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x585f2f9e
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x585f2f9e
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x585f2f8b
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x585f2f8b
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x585f2f67
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x585f2f83
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x585f2f76
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x585f2f7d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 0B: jmp 0x585f2f96
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x585f2fad
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x585f3011
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x585f3011
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x585f2ffe
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x585f2ffe
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x585f2fda
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x585f2ff6
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x585f2fe9
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 07: jmp 0x585f2ff0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 0B: jmp 0x585f3009
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 0F: jmp 0x585f3020
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4E 1E FF FF: call 0x585e4e90
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 0f8h]
        mov edx, dword ptr [ebp - 4]
        add esi, dword ptr [edx + 0b0h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 5D 19 E9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x19
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 2E: jne 0x585f3095
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 0fch]
        mov edx, dword ptr [ebp - 4]
        add esi, dword ptr [edx + 0b4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes E8 A9 26 EA FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x26
        __asm _emit 0xea
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 0A: jne 0x585f3095
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], 0
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
