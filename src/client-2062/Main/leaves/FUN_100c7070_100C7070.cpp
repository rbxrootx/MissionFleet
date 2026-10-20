// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C7070 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_100c7070_100C7070() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        and eax, 0e1ffh
        or ah, 1
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 16h
        ; Exact mapped bytes 7E 0F: jle 0x100c709d
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100c709d
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 58h]
        ; Exact mapped bytes EB 02: jmp 0x100c709f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0a4h]
        push esi
        test eax, eax
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100c70d5
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edx + 0ch], esi
        mov esi, dword ptr [eax - 4]
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
        ; Exact mapped bytes A1 30 58 1C 10: mov eax, dword ptr [0x101c5830]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 12h
        ; Exact mapped bytes 7E 0F: jle 0x100c70f2
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100c70f2
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 48h]
        ; Exact mapped bytes EB 02: jmp 0x100c70f4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0a8h]
        test eax, eax
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100c7129
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [edx + 0ch], esi
        mov esi, dword ptr [eax - 4]
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
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 0ach]
        pop esi
        mov eax, dword ptr [edx + 21a44h]
        dec eax
        mov dword ptr [ecx + 50h], eax
        ret
    }
}
