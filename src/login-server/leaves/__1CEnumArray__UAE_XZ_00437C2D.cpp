// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437C2D .. +0x4E bytes.
extern "C" __declspec(naked) void __1CEnumArray__UAE_XZ_00437C2D() {
    __asm {
        mov eax, 43b1dch
        ; Exact mapped bytes E8 D1 79 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43f2a0h
        mov ecx, dword ptr [esi + 20h]
        and dword ptr [ebp - 4], 0
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x437c54
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 3F FC FF FF: call 0x437893
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 30h], 0
        ; Exact mapped bytes 74 09: je 0x437c63
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 24h]
        ; Exact mapped bytes E8 B3 5C FF FF: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 D8 9C FF FF: call 0x431946
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
