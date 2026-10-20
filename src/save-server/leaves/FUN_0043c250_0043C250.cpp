// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C250 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_0043c250_0043C250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x43c278
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 2B 9B FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 08: jae 0x43c299
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 4]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes EB 06: jmp 0x43c29f
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp + 0ch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        sub edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 08: jge 0x43c2f3
        __asm _emit 0x7d
        __asm _emit 0x08
        lea ecx, [ebp - 10h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 06: jmp 0x43c2f9
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 0ch]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        mov ecx, dword ptr [ebp - 1ch]
        mov edi, dword ptr [ebp - 28h]
        mov esi, dword ptr [ebp - 20h]
        xor eax, eax
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes F3 A6: repe cmpsb byte ptr [esi], byte ptr es:[edi]
        __asm _emit 0xf3
        __asm _emit 0xa6
        ; Exact mapped bytes 74 08: je 0x43c321
        __asm _emit 0x74
        __asm _emit 0x08
        sbb ecx, ecx
        sbb ecx, -1
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 08: je 0x43c33b
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes EB 25: jmp 0x43c360
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 09: jge 0x43c34c
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 0ffffffffh
        ; Exact mapped bytes EB 0E: jmp 0x43c35a
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        cmp eax, dword ptr [ebp - 10h]
        setg cl
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
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
