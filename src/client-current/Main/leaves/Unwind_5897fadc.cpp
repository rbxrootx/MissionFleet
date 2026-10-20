// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897FADC .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_5897fadc() {
    __asm {
        ; Exact mapped bytes 8B 85 5C FF FF FF: mov eax, dword ptr [ebp - 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5A D1 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
