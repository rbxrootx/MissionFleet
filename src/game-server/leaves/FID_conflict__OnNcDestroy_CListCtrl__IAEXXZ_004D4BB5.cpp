// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4BB5 .. +0x31 bytes.
extern "C" __declspec(naked) void FID_conflict__OnNcDestroy_CListCtrl__IAEXXZ_004D4BB5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA FF FF FF: call 0x4d4b70
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 FF FF FF: call 0x4d4b70
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 FF FF FF: call 0x4d4b70
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 DC 01 00: call 0x4f285b
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
