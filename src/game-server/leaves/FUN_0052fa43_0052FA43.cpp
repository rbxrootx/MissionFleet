// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052FA43 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0052fa43_0052FA43() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D FC E8 5D 00 00: cmp dword ptr [0x5de8fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x52fa5d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 1E FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x52fa6b
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c8h
        ; Exact mapped bytes E8 F5 14 00 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
