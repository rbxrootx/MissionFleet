// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857FD80 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5857fd80_5857FD80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 20 75 F0 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x75
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 10 FF FF: call 0x58570df0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x10
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
