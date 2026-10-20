// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AAC33 .. +0x45 bytes.
extern "C" __declspec(naked) void FID_conflict__RemoveImageList_CTreeView__IAEXH_Z_004AAC33() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 1108h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EA 09 08 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 AE 0F 00 00: call 0x4abc09
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x4aac72
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 1109h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C7 09 08 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x09
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
