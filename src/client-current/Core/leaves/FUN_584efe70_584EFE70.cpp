// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EFE70 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_584efe70_584EFE70() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 8B 0D C0 BF 90 58: mov ecx, dword ptr [0x5890bfc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 FF FF FF: call 0x584efd90
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 32h
        ; Exact mapped bytes FF 15 40 42 89 58: call dword ptr [0x58894240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 BF 90 58: mov ecx, dword ptr [0x5890bfc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F F4 FF FF: call 0x584ef2d0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
