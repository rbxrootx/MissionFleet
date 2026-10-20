// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F6C40 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_588f6c40() {
    __asm {
        ; Exact mapped bytes 8B 41 74: mov eax, dword ptr [ecx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x74
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 49 74: mov ecx, dword ptr [ecx + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x74
        ; Exact mapped bytes E9 CC 01 00 00: jmp 0x588f6e20
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
