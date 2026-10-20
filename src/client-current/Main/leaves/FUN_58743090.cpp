// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58743090 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58743090() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AA 9B 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x23
        __asm _emit 0x00
    }
}
