// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043BE10 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_0043be10_0043BE10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push edi
        mov dword ptr [ebp - 48h], ecx
        mov edi, dword ptr [ebp + 8]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 73 0C: jae 0x43be52
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dword ptr [ebp - 44h], 0ffffffffh
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x43bf1e
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 73 08: jae 0x43be73
        __asm _emit 0x73
        __asm _emit 0x08
        lea edx, [ebp - 3ch]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes EB 06: jmp 0x43be79
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 14h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        push ecx
        push esp
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 0B B9 FF FF: call 0x4377c0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov ecx, esp
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 1F A3 00 00: call 0x4461e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 86 A4 00 00: call 0x446350
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        cmp ecx, dword ptr [ebp - 28h]
        sete dl
        and edx, 0ffh
        neg edx
        sbb edx, edx
        inc edx
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x43bf11
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        sub edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 50h], edx
        ; Exact mapped bytes EB 07: jmp 0x43bf18
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0ffffffffh
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        pop edi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
