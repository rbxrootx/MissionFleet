// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58E75A1D .. +0x17 bytes.
extern "C" __declspec(naked) void entry() {
    __asm {
        ; Exact mapped bytes 68 02 E7 DD C0: push 0xc0dde702
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0xe7
        __asm _emit 0xdd
        __asm _emit 0xc0
        ; Exact mapped bytes E8 3E 96 02 00: call 0x58e9f065
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes 66 81 FE 66 1D: cmp si, 0x1d66
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0x66
        __asm _emit 0x1d
        ; Exact mapped bytes 33 C3: xor eax, ebx
        __asm _emit 0x33
        __asm _emit 0xc3
        ; Exact mapped bytes E9 C5 47 0D 00: jmp 0x58f4a1f9
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x00
    }
}
