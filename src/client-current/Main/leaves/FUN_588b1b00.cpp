// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B1B00 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_588b1b00() {
    __asm {
        ; Exact mapped bytes B8 FD FF 00 00: mov eax, 0xfffd
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes B8 FB FF 00 00: mov eax, 0xfffb
        __asm _emit 0xb8
        __asm _emit 0xfb
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
