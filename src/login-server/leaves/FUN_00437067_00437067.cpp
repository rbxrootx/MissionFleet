// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437067 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00437067_00437067() {
    __asm {
        mov eax, 43ac58h
        ; Exact mapped bytes E8 97 85 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43dee8h
        mov eax, dword ptr [esi + 10h]
        and dword ptr [ebp - 4], 0
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x43708d
        __asm _emit 0x74
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 74 07: je 0x43709b
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 D8 C1 43 00: call dword ptr [0x43c1d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
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
