// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005081AE .. +0x3F bytes.
extern "C" __declspec(naked) void _OnDestroy_CView__IAEXXZ_005081AE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 C9 FE FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x5081e1
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C3 41 02 00: call 0x52c393
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0C: jne 0x5081e1
        __asm _emit 0x75
        __asm _emit 0x0c
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 42 02 00: call 0x52c3ea
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 25 A6 FE FF: call 0x4f280e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
