// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874C730 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_5874c730() {
    __asm {
        ; Exact mapped bytes A1 64 47 A2 58: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 6
        ; Exact mapped bytes 7E 14: jle 0x5874c752
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5874c752
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 18h]
        ; Exact mapped bytes EB 02: jmp 0x5874c754
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0b8h]
        push esi
        mov dword ptr [edx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874c78a
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
        ; Exact mapped bytes A1 64 47 A2 58: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 14: jle 0x5874c7ac
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x5874c7ac
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 190h]
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x5874c7ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [edx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874c7e3
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
        ; Exact mapped bytes A1 64 47 A2 58: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 9
        pop esi
        ; Exact mapped bytes 7E 14: jle 0x5874c806
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0B: je 0x5874c806
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 24h]
        ; Exact mapped bytes EB 02: jmp 0x5874c808
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ecx + 0c0h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5874c83d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
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
        ret
    }
}
