// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58820560 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_58820560() {
    __asm {
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0d8h]
        movzx edx, word ptr [eax + 0c4h]
        ; Exact mapped bytes 66 89 91 A0 0C 00 00: mov word ptr [ecx + 0xca0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D2: movsx edx, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd2
        cmp edx, 3
        ; Exact mapped bytes 77 53: ja 0x588205d4
        __asm _emit 0x77
        __asm _emit 0x53
        push esi
        ; Exact mapped bytes FF 24 95 D8 05 82 58: jmp dword ptr [edx*4 + 0x588205d8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x82
        __asm _emit 0x58
        mov esi, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        add esi, 0c3h
        mov dword ptr [ecx + 50h], esi
        mov dword ptr [ecx + 54h], edx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        add eax, 0c3h
        push edx
        push eax
        ; Exact mapped bytes E8 E3 2C 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x00
        pop esi
        ret
        mov esi, dword ptr [eax + 4]
        mov edx, dword ptr [eax + 8]
        sub esi, 1f4h
        mov dword ptr [ecx + 50h], esi
        mov dword ptr [ecx + 54h], edx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        sub eax, 1f4h
        push edx
        push eax
        ; Exact mapped bytes E8 BD 2C 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x00
        pop esi
        ret
    }
}
