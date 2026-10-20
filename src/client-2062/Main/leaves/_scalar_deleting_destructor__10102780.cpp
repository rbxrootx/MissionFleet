// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10102780 .. +0x2F bytes.
extern "C" __declspec(naked) void _scalar_deleting_destructor__10102780() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 10176774h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10102799
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 AE A5 06 00: call 0x1016cd44
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x101027a9
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 DE 9F 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9f
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
