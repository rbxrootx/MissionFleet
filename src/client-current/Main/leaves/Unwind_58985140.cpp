// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58985140 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58985140() {
    __asm {
        ; Exact mapped bytes 8B 85 CC FE FF FF: mov eax, dword ptr [ebp - 0x134]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F6 7A FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
