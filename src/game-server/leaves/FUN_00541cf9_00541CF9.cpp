// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541CF9 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_00541cf9_00541CF9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 34 38 FF FF: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
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
