// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435CB3 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_00435cb3_00435CB3() {
    __asm {
        push 435d3bh
        mov ecx, 44dcc0h
        ; Exact mapped bytes E8 F1 10 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x435cd8
        __asm _emit 0x75
        __asm _emit 0x0f
        push 435d54h
        mov ecx, 44dcbch
        ; Exact mapped bytes E8 70 11 00 00: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
