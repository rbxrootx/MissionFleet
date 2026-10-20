// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58888FD0 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58888fd0() {
    __asm {
        ; Exact mapped bytes 8B 81 84 00 00 00: mov eax, dword ptr [ecx + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 00 00 00 00: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 84 00 00 00: mov ecx, dword ptr [ecx + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA FD FF 00 00: mov edx, 0xfffd
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
