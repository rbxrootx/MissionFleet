// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A23E0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_584a23e0_584A23E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F 0E 00 00: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 5B FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1B F2 FF FF: call 0x584a1620
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
