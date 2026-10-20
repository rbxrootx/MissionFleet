// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DE2F2 .. +0x49 bytes.
extern "C" __declspec(naked) void _Abort_CFile__UAEXXZ_004DE2F2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 137h
        push 677f28h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 54 BF FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 74 17: je 0x4de32c
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        ; Exact mapped bytes E8 1B E4 FE FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
