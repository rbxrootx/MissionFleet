// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004CF80 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_1004cf80_1004CF80() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, ebx
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, 8
        push ecx
        ; Exact mapped bytes E8 02 F8 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf8
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, eax
        mov eax, dword ptr [esp + 18h]
        mov edi, ebx
        add esp, 4
        mov ecx, dword ptr [eax]
        lea esi, [edx + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [eax + 4]
        mov dword ptr [edx + 4], eax
        or ecx, 0ffffffffh
        xor eax, eax
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        push 0
        mov eax, ecx
        mov esi, edi
        mov edi, dword ptr [esp + 1ch]
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        xor eax, eax
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov edi, ebx
        or ecx, 0ffffffffh
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, 8
        push ecx
        ; Exact mapped bytes 8B 0D 3C D1 1A 10: mov ecx, dword ptr [0x101ad13c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        push edx
        push eax
        push ecx
        push 80010f0eh
        mov ecx, ebp
        ; Exact mapped bytes E8 51 EF 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xef
        __asm _emit 0x11
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
