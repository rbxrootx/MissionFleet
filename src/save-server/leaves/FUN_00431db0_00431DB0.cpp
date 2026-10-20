// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431DB0 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_00431db0_00431DB0() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 4]
        mov esi, dword ptr [edi]
        sub eax, esi
        mov esi, dword ptr [esp + 14h]
        sar eax, 1
        cmp esi, eax
        ; Exact mapped bytes 76 0D: jbe 0x431dd4
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 CF 3F 00 00: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [edi + 4]
        mov edx, dword ptr [esp + 18h]
        sub eax, ecx
        sar eax, 1
        sub eax, esi
        cmp eax, edx
        mov dword ptr [esp + 14h], eax
        lea edx, [esp + 14h]
        ; Exact mapped bytes 72 04: jb 0x431df3
        __asm _emit 0x72
        __asm _emit 0x04
        lea edx, [esp + 18h]
        mov ebp, dword ptr [edx]
        mov eax, dword ptr [esp + 1ch]
        lea ebx, [ecx + esi*2]
        add esi, ebp
        mov edi, dword ptr [eax]
        lea edx, [esp + 18h]
        shl esi, 1
        sub esi, ebx
        add esi, ecx
        mov ecx, dword ptr [eax + 4]
        sub ecx, edi
        sar esi, 1
        sar ecx, 1
        cmp ecx, esi
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 7C 04: jl 0x431e23
        __asm _emit 0x7c
        __asm _emit 0x04
        lea edx, [esp + 14h]
        mov edx, dword ptr [edx]
        xor eax, eax
        test edx, edx
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 76 38: jbe 0x431e67
        __asm _emit 0x76
        __asm _emit 0x38
        mov ebp, ebx
        mov edx, edi
        sub ebp, edi
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes EB 04: jmp 0x431e3f
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 8B 2C 2A: mov bp, word ptr [edx + ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x2c
        __asm _emit 0x2a
        ; Exact mapped bytes 66 3B 2A: cmp bp, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x2a
        ; Exact mapped bytes 75 0E: jne 0x431e56
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ebp, dword ptr [esp + 14h]
        inc eax
        add edx, 2
        cmp eax, ebp
        ; Exact mapped bytes 72 E7: jb 0x431e3b
        __asm _emit 0x72
        __asm _emit 0xe7
        ; Exact mapped bytes EB 11: jmp 0x431e67
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 66 8B 14 43: mov dx, word ptr [ebx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x43
        ; Exact mapped bytes 66 3B 14 47: cmp dx, word ptr [edi + eax*2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x14
        __asm _emit 0x47
        sbb eax, eax
        and al, 0feh
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x431e7c
        __asm _emit 0x75
        __asm _emit 0x15
        cmp esi, ecx
        ; Exact mapped bytes 7D 0A: jge 0x431e75
        __asm _emit 0x7d
        __asm _emit 0x0a
        pop edi
        pop esi
        pop ebp
        or eax, 0ffffffffh
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        cmp esi, ecx
        setg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
