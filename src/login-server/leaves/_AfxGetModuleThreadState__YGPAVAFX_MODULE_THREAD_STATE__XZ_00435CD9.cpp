// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435CD9 .. +0x17 bytes.
extern "C" __declspec(naked) void _AfxGetModuleThreadState__YGPAVAFX_MODULE_THREAD_STATE__XZ_00435CD9() {
    __asm {
        ; Exact mapped bytes E8 D5 FF FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 05 70 10 00 00: add eax, 0x1070
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 25 5D 43 00: push 0x435d25
        __asm _emit 0x68
        __asm _emit 0x25
        __asm _emit 0x5d
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 C4 10 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
