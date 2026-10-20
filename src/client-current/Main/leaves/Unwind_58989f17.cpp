// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989F17 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58989f17() {
    __asm {
        ; Exact mapped bytes 8B 45 CC: mov eax, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 22 2D FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
