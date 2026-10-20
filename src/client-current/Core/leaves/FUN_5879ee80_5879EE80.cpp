// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879EE80 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5879ee80_5879EE80() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x5879ee9a
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [esi + 4ch]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5879ee9a
        __asm _emit 0x74
        __asm _emit 0x0a
        push dword ptr [esp + 0ch]
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add esp, 8
        push dword ptr [esp + 0ch]
        push esi
        ; Exact mapped bytes E8 8C FF FF FF: call 0x5879ee30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
