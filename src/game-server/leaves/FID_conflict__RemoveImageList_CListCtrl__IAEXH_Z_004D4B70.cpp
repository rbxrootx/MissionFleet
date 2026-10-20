// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4B70 .. +0x45 bytes.
extern "C" __declspec(naked) void FID_conflict__RemoveImageList_CListCtrl__IAEXH_Z_004D4B70() {
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
        ; Exact mapped bytes E8 4D 70 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 DB 16 00 00: call 0x4d6273
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x4d4baf
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 1003h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2A 70 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
