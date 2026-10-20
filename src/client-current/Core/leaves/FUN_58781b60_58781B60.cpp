// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781B60 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58781b60_58781B60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 60 EC FF FF: call 0x587807d0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 77 51 D0 FF: call 0x58486cf0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x51
        __asm _emit 0xd0
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
