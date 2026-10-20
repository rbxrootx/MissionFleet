// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416D28 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_00416d28_00416D28() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x416d3a
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes FF 15 78 C2 43 00: call dword ptr [0x43c278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, dword ptr [esi + 4]
        test esi, esi
        ; Exact mapped bytes 74 07: je 0x416d48
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes E8 D7 87 00 00: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
