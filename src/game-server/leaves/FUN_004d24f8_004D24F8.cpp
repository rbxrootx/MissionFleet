// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D24F8 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_004d24f8_004D24F8() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 84 EB 5D 00: mov ecx, 0x5deb84
        __asm _emit 0xb9
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 7B 6A 07 00: call 0x548f80
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6a
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
