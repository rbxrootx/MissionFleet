// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980D1C .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58980d1c() {
    __asm {
        ; Exact mapped bytes 8B 85 A0 FE FF FF: mov eax, dword ptr [ebp - 0x160]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1A BF FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
