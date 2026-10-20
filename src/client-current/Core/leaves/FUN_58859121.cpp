// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859121 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58859121() {
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
        ; Exact mapped bytes E9 BD FE FF FF: jmp 0x58858fe9
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
