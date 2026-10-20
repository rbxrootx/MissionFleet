// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C5B0 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_0043c5b0_0043C5B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x43c5d8
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 CB 97 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 08: jae 0x43c5f9
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 4]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 06: jmp 0x43c5ff
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp + 0ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8], eax
        mov edi, dword ptr [ebp + 10h]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov edx, dword ptr [ebp + 10h]
        add edx, ecx
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        add ecx, dword ptr [edx]
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 24h]
        sub edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 28h]
        sub eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 08: jge 0x43c659
        __asm _emit 0x7d
        __asm _emit 0x08
        lea edx, [ebp - 10h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 06: jmp 0x43c65f
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edi, dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp - 20h]
        xor edx, edx
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes F3 A6: repe cmpsb byte ptr [esi], byte ptr es:[edi]
        __asm _emit 0xf3
        __asm _emit 0xa6
        ; Exact mapped bytes 74 08: je 0x43c687
        __asm _emit 0x74
        __asm _emit 0x08
        sbb eax, eax
        sbb eax, -1
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 08: je 0x43c6a1
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 25: jmp 0x43c6c6
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 09: jge 0x43c6b2
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 0ffffffffh
        ; Exact mapped bytes EB 0E: jmp 0x43c6c0
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        cmp edx, dword ptr [ebp - 10h]
        setg al
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp - 40h]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
