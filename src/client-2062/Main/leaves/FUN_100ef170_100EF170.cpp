// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EF170 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_100ef170_100EF170() {
    __asm {
        sub esp, 8
        push ebx
        mov ebx, dword ptr [ecx + 8]
        push ebp
        mov eax, dword ptr [ecx + 0ach]
        push esi
        mov esi, dword ptr [ecx + 90h]
        push edi
        mov edi, dword ptr [ecx + 4]
        add esi, edi
        mov edi, dword ptr [ecx + 94h]
        add edi, ebx
        mov ebp, dword ptr [ecx + 0a8h]
        add eax, edi
        add ebp, esi
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 20h]
        sub eax, ebx
        lea edx, [eax + eax*2]
        lea eax, [eax + edx*4]
        lea edx, [eax + eax*8]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add edx, ebx
        mov ebx, dword ptr [esp + 1ch]
        cmp esi, ebx
        ; Exact mapped bytes 7D 5F: jge 0x100ef22a
        __asm _emit 0x7d
        __asm _emit 0x5f
        cmp ebp, ebx
        ; Exact mapped bytes 7E 5B: jle 0x100ef22a
        __asm _emit 0x7e
        __asm _emit 0x5b
        cmp edi, edx
        ; Exact mapped bytes 7D 57: jge 0x100ef22a
        __asm _emit 0x7d
        __asm _emit 0x57
        cmp dword ptr [esp + 14h], edx
        ; Exact mapped bytes 7E 51: jle 0x100ef22a
        __asm _emit 0x7e
        __asm _emit 0x51
        mov eax, edx
        mov ebp, dword ptr [ecx + 0b4h]
        sub eax, edi
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        mov eax, ebx
        sub eax, esi
        cdq
        and edx, 3
        sar edi, 2
        add eax, edx
        imul edi, ebp
        mov edx, ebp
        imul edx, ebp
        sar eax, 2
        add edi, eax
        cmp edi, edx
        ; Exact mapped bytes 7D 21: jge 0x100ef22a
        __asm _emit 0x7d
        __asm _emit 0x21
        mov eax, dword ptr [ecx + 5c40h]
        mov ecx, dword ptr [ecx + eax*4 + 0b8h]
        xor eax, eax
        mov dl, byte ptr [ecx + edi]
        pop edi
        test dl, dl
        pop esi
        pop ebp
        setne al
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
