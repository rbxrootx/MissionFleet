// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC206 .. +0x39 bytes.
extern "C" __declspec(naked) void _AfxSetAllocHook__YGP6GHIHJ_ZP6GHIHJ_Z_Z_004CC206() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 04 51 68 00 00: cmp dword ptr [0x685104], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x51
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x4cc225
        __asm _emit 0x75
        __asm _emit 0x12
        push 4cc187h
        ; Exact mapped bytes E8 53 B8 F9 FF: call 0x467a70
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb8
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A3 04 51 68 00: mov dword ptr [0x685104], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x51
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 11 67 00: mov eax, dword ptr [0x6711d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x11
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 0D D0 11 67 00: mov dword ptr [0x6711d0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x11
        __asm _emit 0x67
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
