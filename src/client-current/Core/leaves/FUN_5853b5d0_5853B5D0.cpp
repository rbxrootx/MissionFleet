// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853B5D0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_5853b5d0_5853B5D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 A8 56 31 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x56
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 7F 56 31 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x56
        __asm _emit 0x31
        __asm _emit 0x00
        cdq
        mov ecx, 0dh
        idiv ecx
        mov dword ptr [ebp - 4], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + edx*4 + 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
