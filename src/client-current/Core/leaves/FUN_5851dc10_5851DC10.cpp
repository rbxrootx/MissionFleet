// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851DC10 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5851dc10_5851DC10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 1E FD FF FF: call 0x5851d940
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 23 92 FE FF: call 0x58506e50
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
