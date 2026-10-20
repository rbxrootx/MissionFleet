// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58560930 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58560930_58560930() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 70 69 F2 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x69
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 66 F2 FF: call 0x58487000
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
