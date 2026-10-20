// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DD117 .. +0x34 bytes.
extern "C" __declspec(naked) void _SetImageList_CReBarCtrl__QAEHPAVCImageList___Z_004DD117() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0ch
        mov dword ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 DB FF FF: call 0x4dac6b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E3 1D 00 00: call 0x4def28
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
