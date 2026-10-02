// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859610 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58859610() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        pop ebp
        ; Exact mapped bytes E9 B5 38 01 00: jmp 0x5886ced0
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
