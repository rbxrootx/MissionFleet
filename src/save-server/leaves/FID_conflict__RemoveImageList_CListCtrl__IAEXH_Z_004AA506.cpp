// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AA506 .. +0x45 bytes.
extern "C" __declspec(naked) void FID_conflict__RemoveImageList_CListCtrl__IAEXH_Z_004AA506() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 1002h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 17 11 08 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 DB 16 00 00: call 0x4abc09
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x4aa545
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 1003h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F4 10 08 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
