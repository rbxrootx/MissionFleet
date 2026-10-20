// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006E2D0 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_1006e2d0_1006E2D0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push ebp
        push esi
        mov esi, dword ptr [esp + 14h]
        mov ebp, ecx
        cmp esi, ebx
        ; Exact mapped bytes 7E 02: jle 0x1006e2e3
        __asm _emit 0x7e
        __asm _emit 0x02
        mov esi, ebx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 10h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 46: jne 0x1006e337
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes 66 83 7C 24 1C 0B: cmp word ptr [esp + 0x1c], 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x0b
        ; Exact mapped bytes 75 28: jne 0x1006e321
        __asm _emit 0x75
        __asm _emit 0x28
        lea eax, [esi + esi*4]
        mov ecx, dword ptr [ebp + 10a40h]
        push edi
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv ebx
        mov edi, eax
        push edi
        ; Exact mapped bytes E8 0C 14 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10a54h]
        push edi
        ; Exact mapped bytes E8 00 14 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        pop edi
        lea eax, [esi + esi*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv ebx
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [edx + 0ec0h], eax
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
