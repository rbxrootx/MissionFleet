// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B0B3D8 .. +0x7 bytes.
extern "C" __declspec(naked) void thunk_FUN_58d3d663() {
    __asm {
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes E9 84 22 23 00: jmp 0x58d3d663
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x23
        __asm _emit 0x00
    }
}
