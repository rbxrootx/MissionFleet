// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980280 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58980280() {
    __asm {
        ; Exact mapped bytes 8B 85 EC FE FF FF: mov eax, dword ptr [ebp - 0x114]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B6 C9 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
