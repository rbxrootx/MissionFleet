// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CFA10 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_588cfa10() {
    __asm {
        ; Exact mapped bytes B8 F0 FF 00 00: mov eax, 0xfff0
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
