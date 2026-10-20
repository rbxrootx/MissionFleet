// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851FBE0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5851fbe0_5851FBE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 70h
        ; Exact mapped bytes E8 AE FE FF FF: call 0x5851faa0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 70h
        ; Exact mapped bytes E8 53 72 FE FF: call 0x58506e50
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
