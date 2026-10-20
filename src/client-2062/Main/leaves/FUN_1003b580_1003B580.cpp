// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003B580 .. +0x241 bytes.
extern "C" __declspec(naked) void FUN_1003b580_1003B580() {
    __asm {
        sub esp, 8
        mov eax, dword ptr [ecx + 1d4h]
        push ebx
        mov ebx, dword ptr [ecx + 304h]
        push ebp
        mov eax, dword ptr [eax + 80h]
        push esi
        mov esi, dword ptr [ebx + 8]
        push edi
        mov edi, dword ptr [ecx + 298h]
        mov edx, eax
        imul edx, dword ptr [esi + 24h]
        cmp eax, edi
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes 7E 06: jle 0x1003b5b6
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ebp, eax
        sub ebp, edi
        ; Exact mapped bytes EB 02: jmp 0x1003b5b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        xor edi, edi
        ; Exact mapped bytes 66 8B 7E 1E: mov di, word ptr [esi + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x1e
        imul edi, ebp
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 66 8B B9 88 02 00 00: mov di, word ptr [ecx + 0x288]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb9
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 3E: cmp di, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x3e
        ; Exact mapped bytes 75 48: jne 0x1003b619
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 66 8B B1 94 02 00 00: mov si, word ptr [ecx + 0x294]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F6 AA 00: xor si, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf6
        __asm _emit 0xaa
        __asm _emit 0x00
        sub eax, esi
        xor eax, 0aah
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 81 B0 02 00 00: mov word ptr [ecx + 0x2b0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0F: jle 0x1003b5ff
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 0F BF F8: movsx edi, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf8
        xor edi, 0aah
        imul edi, dword ptr [ebx + 0ch]
        ; Exact mapped bytes EB 51: jmp 0x1003b650
        __asm _emit 0xeb
        __asm _emit 0x51
        mov esi, dword ptr [ecx + 2ach]
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        mov edi, dword ptr [ecx + esi*4 + 2b4h]
        xor eax, 0aah
        imul edi, eax
        ; Exact mapped bytes EB 37: jmp 0x1003b650
        __asm _emit 0xeb
        __asm _emit 0x37
        mov esi, dword ptr [ecx + 2ach]
        mov edi, dword ptr [ecx + 294h]
        xor eax, 0aah
        xor edi, 0aah
        ; Exact mapped bytes 66 89 81 B0 02 00 00: mov word ptr [ecx + 0x2b0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + esi*4 + 2b4h]
        imul esi, edi
        ; Exact mapped bytes 0F BF F8: movsx edi, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xf8
        xor edi, 0aah
        imul edi, dword ptr [ebx + 0ch]
        sub edi, esi
        mov eax, dword ptr [ecx + 290h]
        mov ebx, dword ptr [ecx + 28ch]
        mov ebp, dword ptr [esp + 14h]
        mov esi, eax
        sub ebx, ebp
        sub esi, edx
        ; Exact mapped bytes 66 83 B9 A4 02 00 00 0D: cmp word ptr [ecx + 0x2a4], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        mov dword ptr [esp + 14h], ebx
        mov ebx, 7fffffffh
        ; Exact mapped bytes 75 18: jne 0x1003b691
        __asm _emit 0x75
        __asm _emit 0x18
        mov esi, dword ptr [ecx + 294h]
        mov ebp, dword ptr [esp + 10h]
        xor esi, 0aah
        imul esi, dword ptr [ebp + 24h]
        sub esi, edx
        add esi, eax
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 8B 6A 1E: mov bp, word ptr [edx + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6a
        __asm _emit 0x1e
        ; Exact mapped bytes 66 85 ED: test bp, bp
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 1E: je 0x1003b6bc
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ecx + 28ch]
        and ebp, 0ffffh
        cdq
        idiv ebp
        add eax, dword ptr [ecx + 298h]
        cmp eax, 7fffffffh
        ; Exact mapped bytes 7D 02: jge 0x1003b6bc
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ebx, eax
        mov eax, dword ptr [esp + 10h]
        mov ebp, dword ptr [eax + 24h]
        test ebp, ebp
        ; Exact mapped bytes 74 1E: je 0x1003b6e5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ecx + 290h]
        xor edx, edx
        div ebp
        mov edx, dword ptr [ecx + 294h]
        xor edx, 0aah
        add eax, edx
        cmp eax, ebx
        ; Exact mapped bytes 7D 02: jge 0x1003b6e5
        __asm _emit 0x7d
        __asm _emit 0x02
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 7D 04: jge 0x1003b6ed
        __asm _emit 0x7d
        __asm _emit 0x04
        xor ebx, ebx
        ; Exact mapped bytes EB 0D: jmp 0x1003b6fa
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ebx, 0ffh
        ; Exact mapped bytes 7E 05: jle 0x1003b6fa
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ebx, 0ffh
        mov eax, dword ptr [ecx + 1d4h]
        mov edx, 0eeh
        mov dword ptr [eax + 74h], ebx
        xor eax, eax
        test esi, esi
        mov ebx, 0eeeeeeh
        ; Exact mapped bytes 7C 0B: jl 0x1003b71e
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov esi, dword ptr [ecx + 174h]
        mov dword ptr [esi + 60h], ebx
        ; Exact mapped bytes EB 0E: jmp 0x1003b72c
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 174h]
        mov dword ptr [eax + 60h], edx
        mov eax, 1
        mov esi, dword ptr [esp + 14h]
        test esi, esi
        ; Exact mapped bytes 7C 0B: jl 0x1003b73f
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov esi, dword ptr [ecx + 178h]
        mov dword ptr [esi + 60h], ebx
        ; Exact mapped bytes EB 0E: jmp 0x1003b74d
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 178h]
        mov dword ptr [eax + 60h], edx
        mov eax, 2
        ; Exact mapped bytes 8B 35 00 D1 1A 10: mov esi, dword ptr [0x101ad100]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        xor esi, 0aaaaaaaah
        cmp edi, esi
        ; Exact mapped bytes 7F 0B: jg 0x1003b768
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov edx, dword ptr [ecx + 17ch]
        mov dword ptr [edx + 60h], ebx
        ; Exact mapped bytes EB 09: jmp 0x1003b771
        __asm _emit 0xeb
        __asm _emit 0x09
        mov esi, dword ptr [ecx + 17ch]
        mov dword ptr [esi + 60h], edx
        ; Exact mapped bytes 66 8B 91 B0 02 00 00: mov dx, word ptr [ecx + 0x2b0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        pop ebx
        ; Exact mapped bytes 7D 13: jge 0x1003b794
        __asm _emit 0x7d
        __asm _emit 0x13
        xor eax, eax
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [edx + 50h], 1
        add esp, 8
        ret
        ; Exact mapped bytes 75 16: jne 0x1003b7ac
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ecx + 0c0h]
        mov eax, 3
        mov dword ptr [ecx + 50h], 0
        add esp, 8
        ret
        test eax, eax
        ; Exact mapped bytes 74 D3: je 0x1003b783
        __asm _emit 0x74
        __asm _emit 0xd3
        mov ecx, dword ptr [ecx + 0c0h]
        mov dword ptr [ecx + 50h], 0
        add esp, 8
        ret
    }
}
