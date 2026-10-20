// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528CC5 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_00528cc5_00528CC5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 204h
        mov dword ptr [ebp - 204h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 18: jne 0x528cf2
        __asm _emit 0x75
        __asm _emit 0x18
        push 673b78h
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 96 FA FF FF: call 0x528780
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 204h]
        ; Exact mapped bytes EB 3B: jmp 0x528d2d
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 83 3D D4 6C 68 00 00: cmp dword ptr [0x686cd4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x528d03
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 204h]
        ; Exact mapped bytes EB 2A: jmp 0x528d2d
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 200h
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 200h]
        push ecx
        ; Exact mapped bytes E8 1D 49 FA FF: call 0x4cd635
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x49
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        lea edx, [ebp - 200h]
        push edx
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 1E FB FF FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
