// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00543CFE .. +0x23 bytes.
extern "C" __declspec(naked) void _AfxTermLocalData__YGXPAUHINSTANCE____H_Z_00543CFE() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 64 70 68 00 00: cmp dword ptr [0x687064], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x543d1d
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 64 70 68 00: mov ecx, dword ptr [0x687064]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 B4 FC FF FF: call 0x5439d1
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
