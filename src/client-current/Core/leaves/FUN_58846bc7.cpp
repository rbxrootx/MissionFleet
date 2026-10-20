// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846BC7 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58846bc7() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 7C FE 01 00: jmp 0x58866a4c
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
