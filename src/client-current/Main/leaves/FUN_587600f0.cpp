// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587600F0 .. +0x2C1 bytes.
extern "C" __declspec(naked) void FUN_587600f0() {
    __asm {
        sub esp, 10h
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0f8h]
        push edi
        mov edi, dword ptr [esi + 0fch]
        cmp eax, edi
        ; Exact mapped bytes 0F 84 9E 02 00 00: je 0x587603a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes 7E 06: jle 0x58760114
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ebx, edi
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58760116
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ebx, eax
        mov edx, dword ptr [esp + 3ch]
        push ebp
        mov ebp, dword ptr [esp + 44h]
        mov eax, dword ptr [ebp]
        cmp ebx, eax
        ; Exact mapped bytes 0F 8C 50 01 00 00: jl 0x5876027a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx]
        add ecx, eax
        cmp ebx, ecx
        ; Exact mapped bytes 0F 8D 3C 01 00 00: jge 0x58760272
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, ecx
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 0F 8D 92 00 00 00: jge 0x587601d5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edx + 4]
        lea ecx, [esp + 10h]
        push ecx
        mov ecx, ebx
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esi + 80h]
        add ecx, eax
        push ecx
        mov ecx, dword ptr [esi + 50h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ebp, dword ptr [ebp]
        mov ecx, dword ptr [esi + 50h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 4]
        lea edx, [esp + 18h]
        push edx
        mov edx, edi
        sub edx, ebp
        push edx
        mov edx, dword ptr [esi + 80h]
        add edx, ebp
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        movzx ecx, word ptr [esi + 9ch]
        mov ebp, dword ptr [esp + 28h]
        inc ecx
        push ecx
        push 0
        push ebp
        ; Exact mapped bytes E8 B5 CA 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xca
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [esp + 30h]
        sub edi, ebx
        push edi
        add ebx, edx
        push ebx
        push ebp
        ; Exact mapped bytes E8 A9 CB 21 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xcb
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [esp + 44h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esp + 48h]
        add esp, 18h
        add eax, dword ptr [esp + 10h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 34h]
        mov eax, dword ptr [eax + 4]
        mov edi, dword ptr [ecx]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [esp + 3ch]
        mov dword ptr [eax], edi
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [edx]
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x587602fa
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esp + 18h]
        push edi
        mov edi, ebx
        sub edi, eax
        push edi
        mov edi, dword ptr [esi + 80h]
        add edi, eax
        mov eax, dword ptr [edx + 4]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 4]
        lea eax, [esp + 10h]
        push eax
        mov eax, dword ptr [esp + 44h]
        mov eax, dword ptr [eax]
        push eax
        mov eax, dword ptr [esi + 80h]
        add eax, dword ptr [ebp]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        movzx eax, word ptr [esi + 9ch]
        mov edi, dword ptr [esp + 28h]
        inc eax
        push eax
        push 0
        push edi
        ; Exact mapped bytes E8 26 CA 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xca
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 4ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esp + 30h]
        sub edx, ebx
        add edx, dword ptr [ebp]
        add ebx, eax
        push edx
        push ebx
        push edi
        ; Exact mapped bytes E8 11 CB 21 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xcb
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 44h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 48h]
        mov eax, dword ptr [esp + 4ch]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ecx + 4]
        mov edx, dword ptr [esp + 50h]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx]
        add ecx, dword ptr [esp + 28h]
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x58760395
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 0F 8D 2D 01 00 00: jge 0x587603a7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 0F 8E 95 00 00 00: jle 0x58760317
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx]
        add ecx, eax
        cmp edi, ecx
        ; Exact mapped bytes 0F 8D 89 00 00 00: jge 0x58760317
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        lea ebx, [esp + 18h]
        push ebx
        mov ebx, edi
        sub ebx, eax
        push ebx
        mov ebx, dword ptr [esi + 80h]
        add ebx, eax
        mov eax, dword ptr [edx + 4]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        movzx ecx, word ptr [esi + 9ch]
        mov ebx, dword ptr [esp + 28h]
        inc ecx
        push ecx
        push 0
        push ebx
        ; Exact mapped bytes E8 88 C9 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc9
        __asm _emit 0x21
        __asm _emit 0x00
        mov ebp, dword ptr [ebp]
        mov edx, dword ptr [esp + 30h]
        sub edi, ebp
        push edi
        add ebp, edx
        push ebp
        push ebx
        ; Exact mapped bytes E8 79 CA 21 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xca
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [esp + 44h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [esp + 48h]
        mov eax, dword ptr [esp + 4ch]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ecx + 4]
        add esp, 18h
        mov dword ptr [eax + 4], ecx
        add edx, dword ptr [esp + 18h]
        pop ebp
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx + 8]
        add edx, dword ptr [eax + 4]
        pop ebx
        pop edi
        mov dword ptr [eax + 0ch], edx
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
        mov edx, dword ptr [edx]
        lea ecx, [edx + eax]
        cmp edi, ecx
        ; Exact mapped bytes 0F 8C 83 00 00 00: jl 0x587603a7
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        mov edi, dword ptr [ecx]
        lea ebx, [esp + 18h]
        push ebx
        push edx
        mov edx, dword ptr [esi + 80h]
        add edx, eax
        mov eax, dword ptr [edi + 4]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        movzx ecx, word ptr [esi + 9ch]
        mov edi, dword ptr [esp + 28h]
        inc ecx
        push ecx
        push 0
        push edi
        ; Exact mapped bytes E8 F6 C8 21 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc8
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [esp + 4ch]
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [edx]
        add ecx, dword ptr [esp + 30h]
        push eax
        push ecx
        push edi
        ; Exact mapped bytes E8 E5 C9 21 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc9
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [esp + 44h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esp + 48h]
        mov edx, dword ptr [esp + 4ch]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [esp + 54h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ecx + 4]
        mov edx, dword ptr [esp + 50h]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx]
        add ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [esi + 50h]
        mov ecx, dword ptr [edx + 8]
        add esp, 18h
        add ecx, dword ptr [eax + 4]
        mov dword ptr [eax + 0ch], ecx
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
