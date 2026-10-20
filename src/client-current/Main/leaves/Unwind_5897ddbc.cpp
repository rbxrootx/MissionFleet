// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897DDBC .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_5897ddbc() {
    __asm {
        ; Exact mapped bytes 8B 85 C8 FE FF FF: mov eax, dword ptr [ebp - 0x138]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7A EE FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
