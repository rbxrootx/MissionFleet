// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F5845B .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58f5845b() {
    __asm {
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 34 44 D8 FF: jmp 0x58cdc897
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x44
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
    }
}
