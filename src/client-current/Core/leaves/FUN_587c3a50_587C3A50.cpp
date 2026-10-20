// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3A50 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_587c3a50_587C3A50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be414h
        ; Exact mapped bytes 83 3D 94 5F 96 58 00: cmp dword ptr [0x58965f94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 1C: jne 0x587c3a85
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 83 3D 98 5F 96 58 00: cmp dword ptr [0x58965f98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x587c3a85
        __asm _emit 0x75
        __asm _emit 0x13
        push 1
        push 0
        ; Exact mapped bytes 8B 0D 1C 5F 96 58: mov ecx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes E8 5E 01 00 00: call 0x587c3be0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 15 34 5F 96 58: mov edx, dword ptr [0x58965f34]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        add edx, 1
        ; Exact mapped bytes 89 15 34 5F 96 58: mov dword ptr [0x58965f34], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
