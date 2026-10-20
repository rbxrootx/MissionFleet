// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2AA7 .. +0x34 bytes.
extern "C" __declspec(naked) void _SetImageList_CReBarCtrl__QAEHPAVCImageList___Z_004B2AA7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0ch
        mov dword ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B DB FF FF: call 0x4b0601
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D4 1D 00 00: call 0x4b48a9
        __asm _emit 0xe8
        __asm _emit 0xd4
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
