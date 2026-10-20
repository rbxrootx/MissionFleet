// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00511C6F .. +0x5E bytes.
extern "C" __declspec(naked) void _OnSetCursor_CFrameWnd__IAEHPAVCWnd__II_Z_00511C6F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A5 10 FC FF: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 10ah
        push 673dc0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 CA 85 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 14: je 0x511cb3
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 F4 6D 68 00: mov edx, dword ptr [0x686df4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 30 BD 68 00: call dword ptr [0x68bd30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 14: jmp 0x511cc7
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3D B6 01 00: call 0x52d304
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb6
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
