// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589824F0 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_589824f0() {
    __asm {
        ; Exact mapped bytes 8B 85 E0 F6 FF FF: mov eax, dword ptr [ebp - 0x920]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 46 A7 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
