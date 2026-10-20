// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589898BB .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_589898bb() {
    __asm {
        ; Exact mapped bytes 8B 85 DC FE FF FF: mov eax, dword ptr [ebp - 0x124]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7B 33 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
