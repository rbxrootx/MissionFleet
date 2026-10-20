// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051EBE0 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_0051ebe0_0051EBE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 14 6E 68 00 00: cmp dword ptr [0x686e14], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x51ebfa
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA 0B FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x0b
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 44: jmp 0x51ec3e
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c8h
        ; Exact mapped bytes E8 9E 61 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c8h
        ; Exact mapped bytes E8 3B 61 00 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7E 11: jle 0x51ec3b
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c8h
        ; Exact mapped bytes E8 28 61 00 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
