// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B723F7 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58b723f7() {
    __asm {
        ; Exact mapped bytes 89 55 08: mov dword ptr [ebp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes E9 07 4E F9 FF: jmp 0x58b07209
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
    }
}
