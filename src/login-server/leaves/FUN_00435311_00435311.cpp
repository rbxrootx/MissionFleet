// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435311 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_00435311_00435311() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x43533b
        __asm _emit 0x74
        __asm _emit 0x20
        cmp eax, 3f107h
        ; Exact mapped bytes 74 20: je 0x435342
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes E8 8C 09 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        push 1
        push dword ptr [esi + 4ch]
        mov ecx, eax
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 2D FF FF FF: call 0x43526f
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
