// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FAC50 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_100fac50_100FAC50() {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        mov esi, dword ptr [ebx + 14h]
        xor edi, edi
        cmp esi, edi
        ; Exact mapped bytes 74 13: je 0x100fac71
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, esi
        mov esi, dword ptr [esi + 8]
        cmp ecx, edi
        ; Exact mapped bytes 74 06: je 0x100fac6d
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, edi
        ; Exact mapped bytes 75 ED: jne 0x100fac5e
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [ebx + 18h], edi
        cmp eax, 0ffh
        mov dword ptr [ebx + 14h], edi
        mov dword ptr [ebx + 1ch], edi
        ; Exact mapped bytes 7D 36: jge 0x100facbb
        __asm _emit 0x7d
        __asm _emit 0x36
        cmp eax, edi
        ; Exact mapped bytes 7E 32: jle 0x100facbb
        __asm _emit 0x7e
        __asm _emit 0x32
        mov edi, dword ptr [esp + 10h]
        lea esi, [eax*8]
        sub esi, eax
        push ebp
        shl esi, 5
        sub esi, eax
        mov ebp, eax
        shl esi, 2
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 87 00 00 00: call 0x100fad30
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, 37ch
        dec ebp
        ; Exact mapped bytes 75 EF: jne 0x100faca1
        __asm _emit 0x75
        __asm _emit 0xef
        pop ebp
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
