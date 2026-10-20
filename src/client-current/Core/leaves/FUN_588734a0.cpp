// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588734A0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_588734a0() {
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
        ; Exact mapped bytes E9 B5 FF FF FF: jmp 0x58873460
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
