// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536E48 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_00536e48_00536E48() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 EA E6 FF FF: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe6
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
        ; Exact mapped bytes E8 A2 CE FC FF: call 0x503d0a
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xce
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
