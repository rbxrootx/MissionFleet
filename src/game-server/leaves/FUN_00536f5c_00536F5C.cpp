// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536F5C .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00536f5c_00536F5C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 D1 E5 FF FF: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 78 28 5E 00: call dword ptr [0x5e2878]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 CD FC FF: call 0x503d0a
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
