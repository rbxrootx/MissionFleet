// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F4030 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_100f4030_100F4030() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 14h]
        mov dword ptr [esi], 101765f0h
        push eax
        ; Exact mapped bytes E8 42 87 07 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x00
        mov al, byte ptr [esp + 0ch]
        add esp, 4
        test al, 1
        ; Exact mapped bytes 74 09: je 0x100f4056
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 31 87 07 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x87
        __asm _emit 0x07
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
