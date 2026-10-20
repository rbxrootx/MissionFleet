// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EDBE0 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_584edbe0_584EDBE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 00 1C 00 00: call 0x584ef7f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 1C 00 00: call 0x584ef880
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 100h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 74 65 2C 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x65
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov esp, ebp
        pop ebp
        ret
    }
}
