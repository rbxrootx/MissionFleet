// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED661 .. +0x56 bytes.
extern "C" __declspec(naked) void _GetParentSplitter_CView__SGPAVCSplitterWnd__PBVCWnd__H_Z_004ED661() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C F4 03 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 639850h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 CB FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4ed685
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2C: jmp 0x4ed6b1
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 23: jne 0x4ed6ae
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 F4 03 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 12: je 0x4ed6ae
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 E2 03 00: call 0x52b916
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x4ed6ac
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4ed6b1
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB DD: jmp 0x4ed68b
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
