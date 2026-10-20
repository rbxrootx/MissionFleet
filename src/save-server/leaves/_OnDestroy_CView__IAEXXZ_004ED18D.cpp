// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED18D .. +0x3F bytes.
extern "C" __declspec(naked) void _OnDestroy_CView__IAEXXZ_004ED18D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D4 58 FE FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x4ed1c0
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 03 69 02 00: call 0x513ab2
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0C: jne 0x4ed1c0
        __asm _emit 0x75
        __asm _emit 0x0c
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 49 69 02 00: call 0x513b09
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 76 35 FE FF: call 0x4d073e
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
