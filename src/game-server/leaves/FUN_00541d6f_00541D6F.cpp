// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541D6F .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_00541d6f_00541D6F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 BE 37 FF FF: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 26 5E 00: call dword ptr [0x5e2664]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
