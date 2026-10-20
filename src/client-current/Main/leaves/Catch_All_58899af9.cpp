// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58899AF9 .. +0x9 bytes.
extern "C" __declspec(naked) void Catch_All_58899af9() {
    __asm {
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 40 31 0E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x31
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}
