// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FF4ED .. +0x9 bytes.
extern "C" __declspec(naked) void Catch_All_587ff4ed() {
    __asm {
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 4C D7 17 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd7
        __asm _emit 0x17
        __asm _emit 0x00
    }
}
