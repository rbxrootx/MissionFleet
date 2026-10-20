// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00548C5E .. +0x23 bytes.
extern "C" __declspec(naked) void _AfxTermLocalData__YGXPAUHINSTANCE____H_Z_00548C5E() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 4C EB 5D 00 00: cmp dword ptr [0x5deb4c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x548c7d
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 4C EB 5D 00: mov ecx, dword ptr [0x5deb4c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 B4 FC FF FF: call 0x548931
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
