// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED166 .. +0x39 bytes.
extern "C" __declspec(naked) void _AfxSetAllocHook__YGP6GHIHJ_ZP6GHIHJ_Z_Z_004ED166() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D E8 CB 5D 00 00: cmp dword ptr [0x5dcbe8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x4ed185
        __asm _emit 0x75
        __asm _emit 0x12
        push 4ed0e7h
        ; Exact mapped bytes E8 A3 E1 FB FF: call 0x4ab320
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe1
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A3 E8 CB 5D 00: mov dword ptr [0x5dcbe8], eax
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 44 4A 5C 00: mov eax, dword ptr [0x5c4a44]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x5c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 0D 44 4A 5C 00: mov dword ptr [0x5c4a44], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x5c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
