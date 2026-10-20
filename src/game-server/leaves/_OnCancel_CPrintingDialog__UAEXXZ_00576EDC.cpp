// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00576EDC .. +0x24 bytes.
extern "C" __declspec(naked) void _OnCancel_CPrintingDialog__UAEXXZ_00576EDC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, 5de520h
        ; Exact mapped bytes E8 A3 0E 00 00: call 0x577d90
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 0ch], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 9D F7 FF: call 0x4f0cd9
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
