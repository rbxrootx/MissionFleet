// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10091B50 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_10091b50_10091B50() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        lea edi, [ecx + 0b8h]
        xor esi, esi
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 88h]
        test eax, eax
        ; Exact mapped bytes 7E 3D: jle 0x10091ba5
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 2D A0 50 17 10: mov ebp, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push ebx
        push esi
        ; Exact mapped bytes E8 37 22 07 00: call 0x10103db0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x10091b92
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [edi]
        inc esi
        cmp esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7C E7: jl 0x10091b72
        __asm _emit 0x7c
        __asm _emit 0xe7
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ebx, 4
        mov ecx, dword ptr [edi]
        push esi
        ; Exact mapped bytes E8 11 23 07 00: call 0x10103eb0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x23
        __asm _emit 0x07
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F2: jne 0x10091b97
        __asm _emit 0x75
        __asm _emit 0xf2
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
