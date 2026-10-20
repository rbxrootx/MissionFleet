// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DAC20 .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_588dac20() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        push edi
        mov edi, dword ptr [ecx + 4]
        mov edx, edi
        sar eax, 3
        sar edx, 3
        cmp dword ptr [ecx + 1684h], eax
        ; Exact mapped bytes 75 0C: jne 0x588dac43
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [ecx + 1688h], eax
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x588dad1d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 1688h], eax
        mov eax, dword ptr [ecx + 6028h]
        mov dword ptr [ecx + 1684h], edx
        push esi
        mov esi, dword ptr [eax + 0ach]
        mov eax, 88888889h
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cdq
        mov esi, 78h
        idiv esi
        mov eax, dword ptr [ecx + 1478h]
        mov edx, dword ptr [ecx + edx*8 + 18dch]
        add edx, edi
        and eax, 8000003fh
        ; Exact mapped bytes 79 05: jns 0x588dac92
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0ffffffc0h
        inc eax
        mov dword ptr [ecx + eax*8 + 1484h], edx
        mov edx, dword ptr [ecx + 6028h]
        mov esi, dword ptr [edx + 0ach]
        mov eax, 88888889h
        imul esi
        add edx, esi
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cdq
        mov esi, 78h
        idiv esi
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [ecx + edx*8 + 18e0h]
        mov edx, dword ptr [ecx + 1478h]
        and edx, 8000003fh
        ; Exact mapped bytes 79 05: jns 0x588dacdd
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0ffffffc0h
        inc edx
        mov dword ptr [ecx + edx*8 + 1488h], eax
        inc dword ptr [ecx + 1478h]
        cmp dword ptr [esp + 0ch], 0
        mov eax, dword ptr [ecx + 1478h]
        mov edx, dword ptr [ecx + 1480h]
        pop esi
        ; Exact mapped bytes 74 08: je 0x588dad06
        __asm _emit 0x74
        __asm _emit 0x08
        cmp edx, 3fh
        ; Exact mapped bytes 7D 0E: jge 0x588dad11
        __asm _emit 0x7d
        __asm _emit 0x0e
        inc edx
        ; Exact mapped bytes EB 05: jmp 0x588dad0b
        __asm _emit 0xeb
        __asm _emit 0x05
        test edx, edx
        ; Exact mapped bytes 7E 07: jle 0x588dad11
        __asm _emit 0x7e
        __asm _emit 0x07
        dec edx
        mov dword ptr [ecx + 1480h], edx
        sub eax, dword ptr [ecx + 1480h]
        mov dword ptr [ecx + 147ch], eax
        pop edi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
