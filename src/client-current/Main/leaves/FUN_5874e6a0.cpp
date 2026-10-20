// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874E6A0 .. +0x223 bytes.
extern "C" __declspec(naked) void FUN_5874e6a0() {
    __asm {
        ; Exact mapped bytes A1 4C 47 A2 58: mov eax, dword ptr [0x58a2474c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 14h
        ; Exact mapped bytes 7E 14: jle 0x5874e6c2
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5874e6c2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 50h]
        ; Exact mapped bytes EB 02: jmp 0x5874e6c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0b8h]
        push esi
        push edi
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874e6fb
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
        ; Exact mapped bytes A1 4C 47 A2 58: mov eax, dword ptr [0x58a2474c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, 1
        cmp dword ptr [eax + 160h], esi
        ; Exact mapped bytes 7E 14: jle 0x5874e721
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x5874e721
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 190h]
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x5874e723
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [edx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874e758
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [edx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
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
        ; Exact mapped bytes A1 4C 47 A2 58: mov eax, dword ptr [0x58a2474c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 18h
        ; Exact mapped bytes 7E 14: jle 0x5874e77a
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5874e77a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 60h]
        ; Exact mapped bytes EB 02: jmp 0x5874e77c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874e7b1
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
        movzx eax, word ptr [ecx + 16ch]
        cmp eax, 5
        ; Exact mapped bytes 0F 87 FF 00 00 00: ja 0x5874e8c0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes FF 24 85 C4 E8 74 58: jmp dword ptr [eax*4 + 0x5874e8c4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x58
        mov al, 1eh
        mov bl, 1fh
        ; Exact mapped bytes EB 1C: jmp 0x5874e7eb
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov al, 20h
        mov bl, 21h
        ; Exact mapped bytes EB 16: jmp 0x5874e7eb
        __asm _emit 0xeb
        __asm _emit 0x16
        mov al, 22h
        mov bl, 23h
        ; Exact mapped bytes EB 10: jmp 0x5874e7eb
        __asm _emit 0xeb
        __asm _emit 0x10
        mov al, 24h
        mov bl, 25h
        ; Exact mapped bytes EB 0A: jmp 0x5874e7eb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov al, 26h
        mov bl, 27h
        ; Exact mapped bytes EB 04: jmp 0x5874e7eb
        __asm _emit 0xeb
        __asm _emit 0x04
        mov al, 28h
        mov bl, 29h
        ; Exact mapped bytes 8B 15 4C 47 A2 58: mov edx, dword ptr [0x58a2474c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, al
        cmp dword ptr [edx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x5874e814
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5874e814
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [edx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5874e814
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [edx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5874e816
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 1e8h]
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874e84b
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
        ; Exact mapped bytes 8B 15 4C 47 A2 58: mov edx, dword ptr [0x58a2474c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, bl
        cmp dword ptr [edx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x5874e87e
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5874e87e
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [edx + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5874e87e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [edx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5874e880
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 1ech]
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874e8b5
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
        pop ebx
        pop edi
        pop esi
        ret
    }
}
