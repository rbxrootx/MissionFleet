// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A30C0 .. +0x194 bytes.
extern "C" __declspec(naked) void FUN_587a30c0_587A30C0() {
    __asm {
        sub esp, 8
        push ebp
        mov ebp, dword ptr [esp + 18h]
        push esi
        mov esi, dword ptr [esp + 14h]
        push dword ptr [ebp + 4]
        push dword ptr [esp + 1ch]
        push esi
        ; Exact mapped bytes E8 06 F2 FF FF: call 0x587a22e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 2F 01 00 00: jne 0x587a3214
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        lea edx, [esi + 84h]
        push ebx
        mov ebx, dword ptr [ebp + 4]
        push edi
        mov dword ptr [edx], eax
        lea edi, [esi + 0bch]
        lea eax, [ebp + 0ch]
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 14h], eax
        mov ebp, 400h
        mov dword ptr [esi + 90h], eax
        mov dword ptr [esi + 94h], 400h
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        or eax, 0ffffffffh
        cmp ebx, -1
        cmovb eax, ebx
        sub ebx, eax
        mov dword ptr [esi + 88h], eax
        cmp dword ptr [esi + 94h], 0
        ; Exact mapped bytes 75 59: jne 0x587a3193
        __asm _emit 0x75
        __asm _emit 0x59
        mov eax, dword ptr [esp + 28h]
        add eax, ebp
        cmp eax, 7fffffffh
        ; Exact mapped bytes 0F 87 83 00 00 00: ja 0x587a31ce
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 75 27: jne 0x587a3178
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [esi + 0c0h]
        add eax, 4
        push eax
        push esi
        ; Exact mapped bytes E8 3F 39 00 00: call 0x587a6aa0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        add esp, 8
        test ecx, ecx
        ; Exact mapped bytes 74 64: je 0x587a31ce
        __asm _emit 0x74
        __asm _emit 0x64
        mov dword ptr [ecx], 0
        lea edx, [esi + 84h]
        mov dword ptr [edi], ecx
        lea eax, [ecx + 4]
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esi + 90h], eax
        mov eax, dword ptr [esi + 0c0h]
        add ebp, eax
        mov dword ptr [esi + 94h], eax
        xor eax, eax
        cmp eax, ebx
        sbb eax, eax
        and eax, 0fffffffch
        add eax, 4
        push eax
        push edx
        ; Exact mapped bytes E8 1A 93 00 00: call 0x587ac4c0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        add ebx, dword ptr [esi + 88h]
        mov edi, eax
        add esp, 8
        mov dword ptr [esi + 88h], 0
        test edi, edi
        ; Exact mapped bytes 75 14: jne 0x587a31d3
        __asm _emit 0x75
        __asm _emit 0x14
        mov edi, dword ptr [esp + 10h]
        lea edx, [esi + 84h]
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x587a3120
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 0fffffffch
        mov eax, dword ptr [esp + 24h]
        sub ebp, dword ptr [esi + 94h]
        mov dword ptr [esi + 94h], 0
        mov dword ptr [eax + 8], ebp
        mov eax, dword ptr [esp + 28h]
        add eax, ebp
        cmp eax, 7fffffffh
        ; Exact mapped bytes 72 23: jb 0x587a321a
        __asm _emit 0x72
        __asm _emit 0x23
        mov dword ptr [esi + 9ch], 588b8a0ch
        mov edi, 0fffffffch
        mov dword ptr [esi + 80h], 0
        mov eax, edi
        pop edi
        pop ebx
        pop esi
        pop ebp
        add esp, 8
        ret
        push edi
        push esi
        ; Exact mapped bytes E8 5F D8 FF FF: call 0x587a0a80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [esi + 80h], 0
        cmp edi, 1
        ; Exact mapped bytes 75 DD: jne 0x587a3210
        __asm _emit 0x75
        __asm _emit 0xdd
        test ebx, ebx
        ; Exact mapped bytes 75 D9: jne 0x587a3210
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [esp + 24h]
        push dword ptr [eax + 4]
        push dword ptr [esp + 18h]
        ; Exact mapped bytes E8 D9 EC FF FF: call 0x587a1f20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop edi
        pop ebx
        pop esi
        pop ebp
        add esp, 8
        ret
    }
}
