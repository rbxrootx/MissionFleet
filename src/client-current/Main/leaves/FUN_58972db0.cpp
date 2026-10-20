// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58972DB0 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58972db0() {
    __asm {
        ; Exact mapped bytes 8B 41 34: mov eax, dword ptr [ecx + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x34
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 89 9E 00 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
