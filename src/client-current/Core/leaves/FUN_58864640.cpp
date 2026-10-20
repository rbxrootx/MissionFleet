// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864640 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58864640() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 65 EE 00 00: jmp 0x588734b0
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
