// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874D9D0 .. +0x20B bytes.
extern "C" __declspec(naked) void FUN_5874d9d0() {
    __asm {
        ; Exact mapped bytes A1 50 47 A2 58: mov eax, dword ptr [0x58a24750]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 12h
        ; Exact mapped bytes 7E 14: jle 0x5874d9f2
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5874d9f2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 48h]
        ; Exact mapped bytes EB 02: jmp 0x5874d9f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0b8h]
        push ebx
        push esi
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874da2b
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
        ; Exact mapped bytes A1 50 47 A2 58: mov eax, dword ptr [0x58a24750]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 3
        ; Exact mapped bytes 7E 16: jle 0x5874da4f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5874da4f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x5874da51
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [edx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874da86
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
        ; Exact mapped bytes A1 50 47 A2 58: mov eax, dword ptr [0x58a24750]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 15h
        ; Exact mapped bytes 7E 14: jle 0x5874daa8
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5874daa8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 54h]
        ; Exact mapped bytes EB 02: jmp 0x5874daaa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874dadf
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
        movzx eax, word ptr [ecx + 16ch]
        sub eax, 0
        mov esi, 1
        ; Exact mapped bytes 74 0E: je 0x5874dafe
        __asm _emit 0x74
        __asm _emit 0x0e
        sub eax, esi
        ; Exact mapped bytes 0F 85 E0 00 00 00: jne 0x5874dbd8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, 10h
        mov bl, 11h
        ; Exact mapped bytes EB 04: jmp 0x5874db02
        __asm _emit 0xeb
        __asm _emit 0x04
        mov al, 0eh
        mov bl, 0fh
        ; Exact mapped bytes 8B 15 50 47 A2 58: mov edx, dword ptr [0x58a24750]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, al
        cmp dword ptr [edx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x5874db2b
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5874db2b
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [edx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5874db2b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [edx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5874db2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 1e8h]
        push edi
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874db63
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 10h]
        mov dword ptr [edx + 0ch], edi
        mov edi, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [edx + 10h], edi
        mov edi, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [edx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [edx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ecx + 1e8h]
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 50 47 A2 58: mov edx, dword ptr [0x58a24750]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, bl
        cmp dword ptr [edx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x5874db96
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5874db96
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [edx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5874db96
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [edx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5874db98
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 1ech]
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874dbcd
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 10h]
        mov dword ptr [edx + 0ch], edi
        mov edi, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [edx + 10h], edi
        mov edi, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [edx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [edx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ecx + 1ech]
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebx
        ret
    }
}
