// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4B42 .. +0x67 bytes.
extern "C" __declspec(naked) void _GetParentFrame_CWnd__QBEPAVCFrameWnd__XZ_004F4B42() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 6F 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4f4b5b
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4A: jmp 0x4f4ba5
        __asm _emit 0xeb
        __asm _emit 0x4a
        push 84ch
        push 5c5574h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F2 65 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C3 84 04 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 24: je 0x4f4ba3
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
        ; Exact mapped bytes 74 05: je 0x4f4b96
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 0F: jmp 0x4f4ba5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B 84 04 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D6: jmp 0x4f4b79
        __asm _emit 0xeb
        __asm _emit 0xd6
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
