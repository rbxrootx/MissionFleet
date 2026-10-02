// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Appends one parsed line string to the selected per-resource vector.
// Indexed function extent: 0x5850BB30 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5850bb30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 70 B7 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb7
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 90 FF FF: call 0x58504c30
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x90
        __asm _emit 0xff
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
