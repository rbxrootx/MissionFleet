// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051A02C .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0051a02c_0051A02C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 35 78 FD FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 01 B4 02 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1038h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 49: je 0x51a09a
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 3D: je 0x51a09a
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 80h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 84h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x51a09a
        __asm _emit 0x75
        __asm _emit 0x16
        push 5c8df4h
        push 5c8e30h
        ; Exact mapped bytes E8 82 5B FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x5b
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x51a09f
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
