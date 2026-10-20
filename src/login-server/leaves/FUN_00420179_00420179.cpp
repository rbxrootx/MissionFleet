// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420179 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_00420179_00420179() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        push edi
        mov esi, dword ptr [eax]
        xor ebx, ebx
        ; Exact mapped bytes E8 3A 23 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        mov edi, eax
        ; Exact mapped bytes 7D 07: jge 0x420196
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x42027f
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 40h], 0
        ; Exact mapped bytes 75 14: jne 0x4201b0
        __asm _emit 0x75
        __asm _emit 0x14
        push 24h
        ; Exact mapped bytes E8 41 F2 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [edi + 40h], eax
        test eax, eax
        mov ecx, 44fc90h
        ; Exact mapped bytes 74 03: je 0x4201b3
        __asm _emit 0x74
        __asm _emit 0x03
        mov ecx, dword ptr [edi + 40h]
        mov eax, esi
        mov edi, 7861f80h
        cdq
        idiv edi
        mov edx, eax
        imul edx, edx, 0f879e080h
        add esi, edx
        lea edx, [eax*4 + 46h]
        mov eax, 1e13380h
        cmp esi, eax
        ; Exact mapped bytes 7C 1B: jl 0x4201f2
        __asm _emit 0x7c
        __asm _emit 0x1b
        sub esi, eax
        inc edx
        cmp esi, eax
        ; Exact mapped bytes 7C 14: jl 0x4201f2
        __asm _emit 0x7c
        __asm _emit 0x14
        sub esi, eax
        mov eax, 1e28500h
        inc edx
        cmp esi, eax
        ; Exact mapped bytes 7C 05: jl 0x4201ef
        __asm _emit 0x7c
        __asm _emit 0x05
        inc edx
        sub esi, eax
        ; Exact mapped bytes EB 03: jmp 0x4201f2
        __asm _emit 0xeb
        __asm _emit 0x03
        push 1
        pop ebx
        mov eax, esi
        mov dword ptr [ecx + 14h], edx
        cdq
        mov edi, 15180h
        idiv edi
        mov edi, 44d11ch
        mov dword ptr [ecx + 1ch], eax
        imul eax, eax, 0fffeae80h
        add esi, eax
        test ebx, ebx
        ; Exact mapped bytes 75 05: jne 0x420218
        __asm _emit 0x75
        __asm _emit 0x05
        mov edi, 44d150h
        mov edx, dword ptr [ecx + 1ch]
        push 1
        pop eax
        lea ebx, [edi + 4]
        cmp dword ptr [ebx], edx
        ; Exact mapped bytes 7D 06: jge 0x42022b
        __asm _emit 0x7d
        __asm _emit 0x06
        inc eax
        add ebx, 4
        ; Exact mapped bytes EB F6: jmp 0x420221
        __asm _emit 0xeb
        __asm _emit 0xf6
        mov edx, dword ptr [ecx + 1ch]
        dec eax
        mov dword ptr [ecx + 10h], eax
        push 7
        sub edx, dword ptr [edi + eax*4]
        mov eax, dword ptr [esp + 14h]
        mov edi, 15180h
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [eax]
        cdq
        idiv edi
        pop edi
        push 3ch
        add eax, 4
        cdq
        idiv edi
        mov eax, esi
        mov edi, 0e10h
        mov dword ptr [ecx + 18h], edx
        cdq
        idiv edi
        pop edi
        mov dword ptr [ecx + 8], eax
        imul eax, eax, 0fffff1f0h
        add esi, eax
        mov eax, esi
        cdq
        idiv edi
        mov dword ptr [ecx + 4], eax
        imul eax, eax, 3ch
        sub esi, eax
        and dword ptr [ecx + 20h], 0
        mov dword ptr [ecx], esi
        mov eax, ecx
        pop edi
        pop esi
        pop ebx
        ret
    }
}
