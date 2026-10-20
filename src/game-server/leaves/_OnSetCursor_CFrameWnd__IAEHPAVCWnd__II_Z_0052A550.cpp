// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A550 .. +0x5E bytes.
extern "C" __declspec(naked) void _OnSetCursor_CFrameWnd__IAEHPAVCWnd__II_Z_0052A550() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 94 A8 FC FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xa8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 106h
        push 5c8fcch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E9 0B FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 14: je 0x52a594
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 DC E8 5D 00: mov edx, dword ptr [0x5de8dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 78 25 5E 00: call dword ptr [0x5e2578]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 14: jmp 0x52a5a8
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FC 32 01 00: call 0x53d8a4
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
