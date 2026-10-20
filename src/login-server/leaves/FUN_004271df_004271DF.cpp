// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004271DF .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_004271df_004271DF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        movzx ecx, word ptr [eax + 0ah]
        mov ebx, ecx
        and ecx, 8000h
        mov dword ptr [ebp + 8], ecx
        mov ecx, dword ptr [eax + 6]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [eax + 2]
        movzx eax, word ptr [eax]
        mov edi, dword ptr [ebp + 10h]
        and ebx, 7fffh
        sub ebx, 3fffh
        mov dword ptr [ebp - 8], ecx
        shl eax, 10h
        cmp ebx, 0ffffc001h
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 26: jne 0x42724c
        __asm _emit 0x75
        __asm _emit 0x26
        lea eax, [ebp - 0ch]
        xor esi, esi
        push eax
        ; Exact mapped bytes E8 06 FF FF FF: call 0x427137
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        pop ecx
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x42730b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 E8 FE FF FF: call 0x42712b
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push 2
        pop eax
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x42730d
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 B7 FE FF FF: call 0x427110
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [edi + 8]
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 1F FE FF FF: call 0x427084
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x42726d
        __asm _emit 0x74
        __asm _emit 0x01
        inc ebx
        mov eax, dword ptr [edi + 4]
        mov ecx, eax
        sub ecx, dword ptr [edi + 8]
        cmp ebx, ecx
        ; Exact mapped bytes 7D 0C: jge 0x427285
        __asm _emit 0x7d
        __asm _emit 0x0c
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 A9 FE FF FF: call 0x42712b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 3C: jmp 0x4272c1
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp ebx, eax
        ; Exact mapped bytes 7F 3F: jg 0x4272c8
        __asm _emit 0x7f
        __asm _emit 0x3f
        sub eax, ebx
        mov esi, eax
        lea eax, [ebp - 18h]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 76 FE FF FF: call 0x427110
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 0ch]
        push esi
        push eax
        ; Exact mapped bytes E8 AE FE FF FF: call 0x427152
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [edi + 8]
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 D4 FD FF FF: call 0x427084
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 0ch]
        inc eax
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 94 FE FF FF: call 0x427152
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        xor esi, esi
        ; Exact mapped bytes E9 7C FF FF FF: jmp 0x427244
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ebx, dword ptr [edi]
        ; Exact mapped bytes 7C 28: jl 0x4272f4
        __asm _emit 0x7c
        __asm _emit 0x28
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 56 FE FF FF: call 0x42712b
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [edi + 0ch]
        or byte ptr [ebp - 9], 80h
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 6D FE FF FF: call 0x427152
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [edi + 14h]
        add esp, 0ch
        add esi, dword ptr [edi]
        push 1
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x427246
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [edi + 0ch]
        mov esi, dword ptr [edi + 14h]
        and byte ptr [ebp - 9], 7fh
        lea eax, [ebp - 0ch]
        push eax
        add esi, ebx
        ; Exact mapped bytes E8 49 FE FF FF: call 0x427152
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        xor eax, eax
        push 1fh
        pop ecx
        sub ecx, dword ptr [edi + 0ch]
        mov edi, dword ptr [edi + 10h]
        shl esi, cl
        mov ecx, dword ptr [ebp + 8]
        neg ecx
        sbb ecx, ecx
        and ecx, 80000000h
        or esi, ecx
        or esi, dword ptr [ebp - 0ch]
        cmp edi, 40h
        ; Exact mapped bytes 75 0D: jne 0x42733c
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], esi
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 0A: jmp 0x427346
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp edi, 20h
        ; Exact mapped bytes 75 05: jne 0x427346
        __asm _emit 0x75
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], esi
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
