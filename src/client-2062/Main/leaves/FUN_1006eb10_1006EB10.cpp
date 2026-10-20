// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006EB10 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_1006eb10_1006EB10() {
    __asm {
        sub esp, 10h
        mov edx, dword ptr [esp + 1ch]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        push ebx
        shr eax, 1fh
        push ebp
        push esi
        add edx, eax
        push edi
        mov edi, edx
        mov edx, dword ptr [esp + 30h]
        mov eax, 2fa0be83h
        mov esi, dword ptr [esp + 28h]
        imul edx
        sar edx, 4
        mov eax, edx
        mov dword ptr [esp + 10h], edi
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [ecx + 10508h]
        add edi, esi
        mov dword ptr [esp + 14h], edx
        cmp edi, eax
        lea ebp, [edx + esi]
        ; Exact mapped bytes 7C 08: jl 0x1006eb66
        __asm _emit 0x7c
        __asm _emit 0x08
        mov ebx, eax
        sub ebx, edi
        add ebx, esi
        ; Exact mapped bytes EB 02: jmp 0x1006eb68
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ebx, esi
        mov edi, dword ptr [ecx + 1050ch]
        cmp ebp, edi
        ; Exact mapped bytes 7C 0A: jl 0x1006eb7c
        __asm _emit 0x7c
        __asm _emit 0x0a
        sub edi, ebp
        add edi, esi
        mov dword ptr [esp + 1ch], edi
        ; Exact mapped bytes EB 04: jmp 0x1006eb80
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 1ch], esi
        imul eax, edx
        mov ebp, dword ptr [ecx + 10504h]
        mov edi, dword ptr [esp + 10h]
        mov esi, dword ptr [esp + 1ch]
        add eax, ebp
        add eax, edi
        xor edx, edx
        test esi, esi
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes 7E 49: jle 0x1006ebe8
        __asm _emit 0x7e
        __asm _emit 0x49
        mov ebp, dword ptr [esp + 24h]
        mov esi, dword ptr [esp + 14h]
        add esi, edx
        test esi, esi
        ; Exact mapped bytes 7C 24: jl 0x1006ebd1
        __asm _emit 0x7c
        __asm _emit 0x24
        xor esi, esi
        mov edi, eax
        test ebx, ebx
        ; Exact mapped bytes 7E 1E: jle 0x1006ebd3
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [esp + 10h]
        add edx, esi
        test edx, edx
        ; Exact mapped bytes 7C 05: jl 0x1006ebc4
        __asm _emit 0x7c
        __asm _emit 0x05
        mov dl, byte ptr [ebp]
        or byte ptr [edi], dl
        inc ebp
        inc edi
        inc esi
        cmp esi, ebx
        ; Exact mapped bytes 7C EA: jl 0x1006ebb5
        __asm _emit 0x7c
        __asm _emit 0xea
        mov edx, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x1006ebd3
        __asm _emit 0xeb
        __asm _emit 0x02
        add ebp, ebx
        mov esi, dword ptr [ecx + 10508h]
        add eax, esi
        mov esi, dword ptr [esp + 1ch]
        inc edx
        cmp edx, esi
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes 7C BB: jl 0x1006eba3
        __asm _emit 0x7c
        __asm _emit 0xbb
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
