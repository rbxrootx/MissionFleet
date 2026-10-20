// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874E380 .. +0x19A bytes.
extern "C" __declspec(naked) void FUN_5874e380() {
    __asm {
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0b7h
        ; Exact mapped bytes 7E 17: jle 0x5874e3a8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5874e3a8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 2dch]
        ; Exact mapped bytes EB 02: jmp 0x5874e3aa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0b8h]
        push esi
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874e3e0
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 10h]
        mov dword ptr [edx + 0ch], esi
        mov esi, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [edx + 10h], esi
        mov esi, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [edx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [edx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0bh
        ; Exact mapped bytes 7E 16: jle 0x5874e404
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5874e404
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x5874e406
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [edx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874e43b
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 18h]
        mov dword ptr [edx + 0ch], esi
        mov esi, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [edx + 10h], esi
        mov esi, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [edx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [edx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0b6h
        ; Exact mapped bytes 7E 17: jle 0x5874e463
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5874e463
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 2d8h]
        ; Exact mapped bytes EB 02: jmp 0x5874e465
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874e49a
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 10h]
        mov dword ptr [edx + 0ch], esi
        mov esi, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [edx + 10h], esi
        mov esi, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [edx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [edx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes A1 40 46 A2 58: mov eax, dword ptr [0x58a24640]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0ddh
        ; Exact mapped bytes 7E 17: jle 0x5874e4c2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x5874e4c2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 374h]
        ; Exact mapped bytes EB 02: jmp 0x5874e4c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 1e8h]
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874e4f9
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 10h]
        mov dword ptr [edx + 0ch], esi
        mov esi, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [edx + 10h], esi
        mov esi, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [edx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [edx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes 66 83 B9 6C 01 00 00 00: cmp word ptr [ecx + 0x16c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 1e8h]
        pop esi
        ; Exact mapped bytes 75 0A: jne 0x5874e514
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ret
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ret
    }
}
