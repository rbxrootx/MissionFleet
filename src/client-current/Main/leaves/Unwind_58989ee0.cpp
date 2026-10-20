// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989EE0 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58989ee0() {
    __asm {
        ; Exact mapped bytes 8B 45 D4: mov eax, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 59 2D FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
