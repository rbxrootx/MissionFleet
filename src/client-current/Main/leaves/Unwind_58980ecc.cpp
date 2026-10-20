// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58980ECC .. +0x9 bytes.
extern "C" __declspec(naked) void Unwind_58980ecc() {
    __asm {
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6D BD FF FF: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
