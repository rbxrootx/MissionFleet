// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B22387 .. +0x7 bytes.
extern "C" __declspec(naked) void thunk_FUN_58cff7b4() {
    __asm {
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes E9 26 D4 1D 00: jmp 0x58cff7b4
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xd4
        __asm _emit 0x1d
        __asm _emit 0x00
    }
}
