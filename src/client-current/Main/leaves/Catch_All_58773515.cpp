// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58773515 .. +0x9 bytes.
extern "C" __declspec(naked) void Catch_All_58773515() {
    __asm {
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 24 97 20 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x97
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
