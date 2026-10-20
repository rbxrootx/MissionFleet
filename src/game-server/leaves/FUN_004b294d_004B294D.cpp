// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B294D .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_004b294d_004B294D() {
    __asm {
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax - 4], ecx
        ; Exact mapped bytes E8 45 05 00 00: call 0x4b2ea0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 6ch], edx
        ; Exact mapped bytes E8 3A 05 00 00: call 0x4b2ea0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0e06d7363h
        ; Exact mapped bytes 75 33: jne 0x4b29aa
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 3
        ; Exact mapped bytes 75 2A: jne 0x4b29aa
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 14h], 19930520h
        ; Exact mapped bytes 75 1E: jne 0x4b29aa
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 18: jne 0x4b29aa
        __asm _emit 0x75
        __asm _emit 0x18
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 12: je 0x4b29aa
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes E8 3D 66 FF FF: call 0x4a8fda
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E9 02 00 00: call 0x4b2c90
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ret
    }
}
