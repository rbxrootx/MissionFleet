// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BCEB0 .. +0x252 bytes.
extern "C" __declspec(naked) void FUN_100bceb0_100BCEB0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, 2
        mov eax, dword ptr [esi + 0ach]
        cmp eax, edi
        ; Exact mapped bytes A1 3C 57 1C 10: mov eax, dword ptr [0x101c573c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 164h]
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x100bcfbd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 74h
        ; Exact mapped bytes 7E 12: jle 0x100bcee9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100bcee9
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1d0h]
        ; Exact mapped bytes EB 02: jmp 0x100bceeb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 15ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100bcf20
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 3C 57 1C 10: mov eax, dword ptr [0x101c573c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 75h
        ; Exact mapped bytes 7E 12: jle 0x100bcf40
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100bcf40
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1d4h]
        ; Exact mapped bytes EB 02: jmp 0x100bcf42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 164h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100bcf77
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 4]
        add ecx, 24ch
        push ecx
        mov ecx, dword ptr [esi + 16ch]
        ; Exact mapped bytes E8 C4 1D 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 170h]
        add edx, 271h
        push edx
        ; Exact mapped bytes E8 AF 1D 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 174h]
        push 0
        or byte ptr [eax + 24h], 1
        mov ecx, dword ptr [esi + 174h]
        ; Exact mapped bytes E8 68 27 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x100bd098
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 5ah
        ; Exact mapped bytes 7E 12: jle 0x100bcfd4
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100bcfd4
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 168h]
        ; Exact mapped bytes EB 02: jmp 0x100bcfd6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 15ch]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100bd00b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 3C 57 1C 10: mov eax, dword ptr [0x101c573c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5ch
        ; Exact mapped bytes 7E 12: jle 0x100bd02b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100bd02b
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 170h]
        ; Exact mapped bytes EB 02: jmp 0x100bd02d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 164h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100bd062
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 4]
        add ecx, 2b2h
        push ecx
        mov ecx, dword ptr [esi + 16ch]
        ; Exact mapped bytes E8 D9 1C 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 170h]
        add edx, 2e4h
        push edx
        ; Exact mapped bytes E8 C4 1C 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 174h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        push 120000h
        mov ecx, esi
        mov dword ptr [esi + 0ach], 0ffffffffh
        ; Exact mapped bytes E8 62 F0 FF FF: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 148h]
        mov dword ptr [esi + 74h], 0
        lea edx, [esi + 0bch]
        xor ecx, ecx
        mov dword ptr [eax + 50h], 1
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 114h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov dword ptr [edx], ecx
        mov dword ptr [edx + 4], ecx
        mov dword ptr [edx + 8], ecx
        mov dword ptr [edx + 0ch], ecx
        mov dword ptr [esi + 0b8h], edi
        mov dword ptr [esi + 0b4h], 20000h
        mov dword ptr [esi + 180h], ecx
        pop edi
        pop esi
        ret
    }
}
