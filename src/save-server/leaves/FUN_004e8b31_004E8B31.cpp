// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E8B31 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_004e8b31_004E8B31() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 18 FF FF: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 2E: je 0x4e8b7a
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 83 3D 08 6E 68 00 00: cmp dword ptr [0x686e08], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x4e8b7a
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 78 B6 68 00: call dword ptr [0x68b678]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e8b7a
        __asm _emit 0x75
        __asm _emit 0x14
        push 435h
        push 6733e0h
        ; Exact mapped bytes E8 CB 01 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e8b7a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C3: jne 0x4e8b43
        __asm _emit 0x75
        __asm _emit 0xc3
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
