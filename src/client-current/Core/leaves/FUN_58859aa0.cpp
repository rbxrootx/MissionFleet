// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859AA0 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58859aa0() {
    __asm {
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 08: mov edi, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes EB 6E: jmp 0x58859b15
        __asm _emit 0xeb
        __asm _emit 0x6e
    }
}
