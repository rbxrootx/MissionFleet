// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421B67 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_00421b67_00421B67() {
    __asm {
        push esi
        ; Exact mapped bytes E8 76 00 00 00: call 0x421be3
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        xor esi, esi
        mov dword ptr [eax], ecx
        mov eax, 44aa80h
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 22: je 0x421ba0
        __asm _emit 0x74
        __asm _emit 0x22
        add eax, 8
        inc esi
        cmp eax, 44abe8h
        ; Exact mapped bytes 7C F1: jl 0x421b7a
        __asm _emit 0x7c
        __asm _emit 0xf1
        cmp ecx, 13h
        ; Exact mapped bytes 72 22: jb 0x421bb0
        __asm _emit 0x72
        __asm _emit 0x22
        cmp ecx, 24h
        ; Exact mapped bytes 77 1D: ja 0x421bb0
        __asm _emit 0x77
        __asm _emit 0x1d
        ; Exact mapped bytes E8 42 00 00 00: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 0dh
        pop esi
        ret
        ; Exact mapped bytes E8 35 00 00 00: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi*8 + 44aa84h]
        pop esi
        mov dword ptr [eax], ecx
        ret
        cmp ecx, 0bch
        ; Exact mapped bytes 72 15: jb 0x421bcd
        __asm _emit 0x72
        __asm _emit 0x15
        cmp ecx, 0cah
        ; Exact mapped bytes 77 0D: ja 0x421bcd
        __asm _emit 0x77
        __asm _emit 0x0d
        ; Exact mapped bytes E8 15 00 00 00: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 8
        pop esi
        ret
        ; Exact mapped bytes E8 08 00 00 00: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        pop esi
        ret
    }
}
