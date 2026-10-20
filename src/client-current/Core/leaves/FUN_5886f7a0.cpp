// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F7A0 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_5886f7a0() {
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
        ; Exact mapped bytes FF 25 C0 41 89 58: jmp dword ptr [0x588941c0]
        __asm _emit 0xff
        __asm _emit 0x25
        __asm _emit 0xc0
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
    }
}
