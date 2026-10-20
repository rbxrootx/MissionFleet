// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004370DE .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_004370de_004370DE() {
    __asm {
        ; Exact mapped bytes 68 B6 5E 43 00: push 0x435eb6
        __asm _emit 0x68
        __asm _emit 0xb6
        __asm _emit 0x5e
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes B9 80 FB 44 00: mov ecx, 0x44fb80
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 5B FD FF FF: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
