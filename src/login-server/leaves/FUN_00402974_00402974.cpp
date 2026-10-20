// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402974 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_00402974_00402974() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0ah
        push 1
        push 448474h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 14h
        push -3
        lea edx, [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 3D EF 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 1B EF 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
