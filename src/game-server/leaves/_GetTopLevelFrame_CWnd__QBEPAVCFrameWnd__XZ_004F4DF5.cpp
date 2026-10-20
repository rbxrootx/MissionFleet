// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4DF5 .. +0x75 bytes.
extern "C" __declspec(naked) void _GetTopLevelFrame_CWnd__QBEPAVCFrameWnd__XZ_004F4DF5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 46 6D 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4f4e0e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 58: jmp 0x4f4e66
        __asm _emit 0xeb
        __asm _emit 0x58
        push 8b0h
        push 5c5574h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 3F 63 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x63
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
        ; Exact mapped bytes 75 0B: jne 0x4f4e44
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 01 FD FF FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4f4e63
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 FC FF FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x4f4e63
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB E7: jmp 0x4f4e4a
        __asm _emit 0xeb
        __asm _emit 0xe7
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
