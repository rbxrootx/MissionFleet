// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849F9D0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5849f9d0_5849F9D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A0 1D FF FF: call 0x58491780
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 07 73 FE FF: call 0x58486cf0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x73
        __asm _emit 0xfe
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
