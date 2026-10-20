// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10082200 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_10082200_10082200() {
    __asm {
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov eax, dword ptr [eax + 0d8h]
        ; Exact mapped bytes 66 8B 90 B4 00 00 00: mov dx, word ptr [eax + 0xb4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 94 0C 00 00: mov word ptr [ecx + 0xc94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D2: movsx edx, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd2
        cmp edx, 3
        ; Exact mapped bytes 77 51: ja 0x10082273
        __asm _emit 0x77
        __asm _emit 0x51
        ; Exact mapped bytes FF 24 95 78 22 08 10: jmp dword ptr [edx*4 + 0x10082278]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0x22
        __asm _emit 0x08
        __asm _emit 0x10
        mov esi, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        add esi, 0c3h
        mov dword ptr [ecx + 54h], edx
        mov dword ptr [ecx + 50h], esi
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push edx
        add eax, 0c3h
        push eax
        ; Exact mapped bytes E8 83 CA 07 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0x00
        pop esi
        ret
        mov esi, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        sub esi, 1f4h
        mov dword ptr [ecx + 54h], edx
        mov dword ptr [ecx + 50h], esi
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push edx
        sub eax, 1f4h
        push eax
        ; Exact mapped bytes E8 5D CA 07 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0x00
        pop esi
        ret
    }
}
