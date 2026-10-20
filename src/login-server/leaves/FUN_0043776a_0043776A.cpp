// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043776A .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_0043776a_0043776A() {
    __asm {
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C7 00 9C F9 43 00: mov dword ptr [eax], 0x43f99c
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x9c
        __asm _emit 0xf9
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
