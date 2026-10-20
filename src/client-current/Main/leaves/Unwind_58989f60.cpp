// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989F60 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58989f60() {
    __asm {
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D9 2C FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
