// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432140 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_00432140_00432140() {
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
        ; Exact mapped bytes 76 0D: jbe 0x432164
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 3F 3C 00 00: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [esp + 18h]
        sub eax, edx
        sar eax, 1
        sub eax, esi
        mov dword ptr [esp + 14h], eax
        cmp eax, ecx
        lea eax, [esp + 14h]
        ; Exact mapped bytes 72 04: jb 0x432183
        __asm _emit 0x72
        __asm _emit 0x04
        lea eax, [esp + 18h]
        mov ecx, dword ptr [eax]
        lea edi, [edx + esi*2]
        add ecx, esi
        shl ecx, 1
        sub ecx, edi
        add ecx, edx
        mov edx, dword ptr [esp + 20h]
        sar ecx, 1
        lea esi, [edx + edx]
        mov dword ptr [esp + 14h], ecx
        sar esi, 1
        cmp esi, ecx
        mov dword ptr [esp + 18h], esi
        lea edx, [esp + 18h]
        ; Exact mapped bytes 7C 04: jl 0x4321af
        __asm _emit 0x7c
        __asm _emit 0x04
        lea edx, [esp + 14h]
        mov ebx, dword ptr [edx]
        xor eax, eax
        test ebx, ebx
        ; Exact mapped bytes 76 3A: jbe 0x4321f1
        __asm _emit 0x76
        __asm _emit 0x3a
        mov edx, dword ptr [esp + 1ch]
        mov ebp, edi
        sub ebp, edx
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes EB 04: jmp 0x4321c9
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
        ; Exact mapped bytes 75 0A: jne 0x4321dc
        __asm _emit 0x75
        __asm _emit 0x0a
        inc eax
        add edx, 2
        cmp eax, ebx
        ; Exact mapped bytes 72 EB: jb 0x4321c5
        __asm _emit 0x72
        __asm _emit 0xeb
        ; Exact mapped bytes EB 15: jmp 0x4321f1
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 14 47: mov dx, word ptr [edi + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x47
        mov edi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 3B 14 47: cmp dx, word ptr [edi + eax*2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x14
        __asm _emit 0x47
        sbb eax, eax
        and al, 0feh
        inc eax
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x432206
        __asm _emit 0x75
        __asm _emit 0x15
        cmp ecx, esi
        ; Exact mapped bytes 7D 0A: jge 0x4321ff
        __asm _emit 0x7d
        __asm _emit 0x0a
        pop edi
        pop esi
        pop ebp
        or eax, 0ffffffffh
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        xor eax, eax
        cmp ecx, esi
        setg al
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
