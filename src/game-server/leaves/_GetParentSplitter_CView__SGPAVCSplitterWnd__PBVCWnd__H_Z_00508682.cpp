// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508682 .. +0x56 bytes.
extern "C" __declspec(naked) void _GetParentSplitter_CView__SGPAVCSplitterWnd__PBVCWnd__H_Z_00508682() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB 49 03 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 587230h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F2 29 FF FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5086a6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2C: jmp 0x5086d2
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 23: jne 0x5086cf
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 49 03 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 12: je 0x5086cf
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 37 03 00: call 0x53beb6
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5086cd
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5086d2
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB DD: jmp 0x5086ac
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
