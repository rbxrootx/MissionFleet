// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052F9DF .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_0052f9df_0052F9DF() {
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
        ; Exact mapped bytes 74 0A: je 0x52f9f9
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B 1E FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 44: jmp 0x52fa3d
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c8h
        ; Exact mapped bytes E8 9F 15 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c8h
        ; Exact mapped bytes E8 3C 15 00 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7E 11: jle 0x52fa3a
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c8h
        ; Exact mapped bytes E8 29 15 00 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x15
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
