// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2D25 .. +0x75 bytes.
extern "C" __declspec(naked) void _GetTopLevelFrame_CWnd__QBEPAVCFrameWnd__XZ_004D2D25() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 76 88 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4d2d3e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 58: jmp 0x4d2d96
        __asm _emit 0xeb
        __asm _emit 0x58
        push 8b0h
        push 671a64h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 0F 75 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 B8 00 00 00: call dword ptr [eax + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x4d2d74
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 01 FD FF FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4d2d93
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 FC FF FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x4d2d93
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB E7: jmp 0x4d2d7a
        __asm _emit 0xeb
        __asm _emit 0xe7
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
