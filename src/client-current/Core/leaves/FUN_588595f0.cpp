// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588595F0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_588595f0() {
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
        ; Exact mapped bytes E9 15 5C 01 00: jmp 0x5886f210
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
