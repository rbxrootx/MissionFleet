// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AAC78 .. +0x27 bytes.
extern "C" __declspec(naked) void FID_conflict__OnDestroy_CTreeView__QAEXXZ_004AAC78() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA FF FF FF: call 0x4aac33
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 FF FF FF: call 0x4aac33
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 5A 02 00: call 0x4d073e
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
