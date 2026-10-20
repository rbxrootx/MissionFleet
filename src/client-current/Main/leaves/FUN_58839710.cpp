// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58839710 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_58839710() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 81 0C 03 00 00: mov dword ptr [ecx + 0x30c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 89 D4 00 00 00: mov ecx, dword ptr [ecx + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 04: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes E9 37 DC 0C 00: jmp 0x58907360
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xdc
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
