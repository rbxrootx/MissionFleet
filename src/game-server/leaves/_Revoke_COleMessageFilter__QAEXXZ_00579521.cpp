// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00579521 .. +0x38 bytes.
extern "C" __declspec(naked) void _Revoke_COleMessageFilter__QAEXXZ_00579521() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 6fh
        push 5ce570h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 28 1C F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x579555
        __asm _emit 0x74
        __asm _emit 0x14
        push 0
        push 0
        ; Exact mapped bytes FF 15 18 2A 5E 00: call dword ptr [0x5e2a18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
