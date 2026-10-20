// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AA54B .. +0x31 bytes.
extern "C" __declspec(naked) void FID_conflict__OnNcDestroy_CListCtrl__IAEXXZ_004AA54B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA FF FF FF: call 0x4aa506
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 FF FF FF: call 0x4aa506
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 FF FF FF: call 0x4aa506
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 62 02 00: call 0x4d078b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
