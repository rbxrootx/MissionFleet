// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58888F90 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_58888f90() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0b0h]
        push eax
        mov dword ptr [esi + 0c0h], eax
        ; Exact mapped bytes E8 B7 E3 07 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe3
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [esi + 0c0h], 0
        mov esi, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 74 09: je 0x58888fc1
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
