// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781C00 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_58781c00() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 69 45 10 88 01 00 00: imul eax, dword ptr [ebp + 0x10], 0x188
        __asm _emit 0x69
        __asm _emit 0x45
        __asm _emit 0x10
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 9C 52 D0 FF: call 0x58486eb0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x52
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
