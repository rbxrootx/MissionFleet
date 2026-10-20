// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058552C .. +0x24 bytes.
extern "C" __declspec(naked) void _OnCancel_CPrintingDialog__UAEXXZ_0058552C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, 686a34h
        ; Exact mapped bytes E8 A3 0E 00 00: call 0x5863e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 0ch], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD 96 F4 FF: call 0x4cec09
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
