// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043190 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_10043190_10043190() {
    __asm {
        mov eax, dword ptr [ecx + 100h]
        push esi
        xor esi, esi
        push edi
        cmp eax, esi
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x10043285
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 5ch], esi
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x10043285
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 10ch]
        mov eax, 40000000h
        cmp edx, eax
        ; Exact mapped bytes 0F 85 C7 00 00 00: jne 0x10043285
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 11ch], eax
        ; Exact mapped bytes 75 0C: jne 0x100431d2
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ecx + 0d8h], 1
        ; Exact mapped bytes EB 28: jmp 0x100431fa
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp dword ptr [ecx + 114h], eax
        ; Exact mapped bytes 75 16: jne 0x100431f0
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ecx + 0cch]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 3
        mov dword ptr [ecx + 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x100431fa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ecx + 0d8h], 3
        mov eax, dword ptr [ecx + 128h]
        mov edx, dword ptr [ecx + 0ach]
        imul eax, dword ptr [ecx + 0d8h]
        add edx, eax
        mov eax, dword ptr [ecx + 0b8h]
        cmp edx, eax
        mov dword ptr [ecx + 0ach], edx
        ; Exact mapped bytes 7F 0C: jg 0x1004322b
        __asm _emit 0x7f
        __asm _emit 0x0c
        cmp edx, esi
        ; Exact mapped bytes 7D 20: jge 0x10043243
        __asm _emit 0x7d
        __asm _emit 0x20
        mov dword ptr [ecx + 0ach], esi
        ; Exact mapped bytes EB 12: jmp 0x1004323d
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp edx, esi
        ; Exact mapped bytes 7D 08: jge 0x10043237
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [ecx + 0ach], esi
        ; Exact mapped bytes EB 06: jmp 0x1004323d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [ecx + 0ach], eax
        mov dword ptr [ecx + 10ch], esi
        mov edi, dword ptr [ecx + 0ach]
        cmp edi, esi
        ; Exact mapped bytes 74 32: je 0x1004327f
        __asm _emit 0x74
        __asm _emit 0x32
        cdq
        and edx, 7
        add eax, edx
        mov esi, eax
        sar esi, 3
        ; Exact mapped bytes 74 2B: je 0x10043285
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, esi
        cdq
        sub eax, edx
        sar eax, 1
        add eax, edi
        cdq
        idiv esi
        cmp eax, 8
        mov dword ptr [ecx + 0a4h], eax
        ; Exact mapped bytes 75 05: jne 0x10043276
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 7
        pop edi
        mov dword ptr [ecx + 0a4h], eax
        pop esi
        ret
        mov dword ptr [ecx + 0a4h], esi
        pop edi
        pop esi
        ret
    }
}
