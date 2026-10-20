// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58779CB0 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58779cb0() {
    __asm {
        ; Exact mapped bytes C7 01 8C 68 99 58: mov dword ptr [ecx], 0x5899688c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x8c
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
