// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3600 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_584a3600_584A3600() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 70 E4 FF FF: call 0x584a1a80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 D7 36 FE FF: call 0x58486cf0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x36
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
