// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10106690 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_10106690_10106690() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 10176990h
        ; Exact mapped bytes E8 52 2E 00 00: call 0x101094f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x101066ae
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 D9 60 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x60
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
