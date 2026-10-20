// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AD5E0 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_588ad5e0() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes BA FF E4 00 00: mov edx, 0xe4ff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes BA 00 04 00 00: mov edx, 0x400
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes C7 41 58 00 00 00 00: mov dword ptr [ecx + 0x58], 0
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
