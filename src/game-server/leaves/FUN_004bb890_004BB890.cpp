// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BB890 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_004bb890_004BB890() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx], 0e06d7363h
        ; Exact mapped bytes 75 1E: jne 0x4bb8be
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        cmp dword ptr [eax + 10h], 3
        ; Exact mapped bytes 75 13: jne 0x4bb8be
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        cmp dword ptr [edx + 14h], 19930520h
        ; Exact mapped bytes 75 05: jne 0x4bb8be
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 12 67 FF FF: call 0x4b1fd0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 38 F0 5D 00 00: cmp dword ptr [0x5df038], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x4bb8e5
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes A1 38 F0 5D 00: mov eax, dword ptr [0x5df038]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 4E 30 00 00: call 0x4be920
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4bb8e5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 38 F0 5D 00: call dword ptr [0x5df038]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x4bb8e7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
