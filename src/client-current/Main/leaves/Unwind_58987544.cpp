// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58987544 .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58987544() {
    __asm {
        ; Exact mapped bytes 8B 45 A4: mov eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F5 56 FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
