// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2A72 .. +0x67 bytes.
extern "C" __declspec(naked) void _GetParentFrame_CWnd__QBEPAVCFrameWnd__XZ_004D2A72() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 29 8B 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4d2a8b
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4A: jmp 0x4d2ad5
        __asm _emit 0xeb
        __asm _emit 0x4a
        push 84ch
        push 671a64h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 C2 77 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F3 9F 05 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 24: je 0x4d2ad3
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4d2ac6
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 0F: jmp 0x4d2ad5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB 9F 05 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D6: jmp 0x4d2aa9
        __asm _emit 0xeb
        __asm _emit 0xd6
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
