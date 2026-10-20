// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58982660 .. +0xC bytes.
extern "C" __declspec(naked) void Unwind_58982660() {
    __asm {
        ; Exact mapped bytes 8B 85 D0 FB FF FF: mov eax, dword ptr [ebp - 0x430]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D6 A5 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
