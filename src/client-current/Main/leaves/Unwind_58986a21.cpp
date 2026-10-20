// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58986A21 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58986a21() {
    __asm {
        ; Exact mapped bytes 8B 45 D8: mov eax, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 18 62 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
