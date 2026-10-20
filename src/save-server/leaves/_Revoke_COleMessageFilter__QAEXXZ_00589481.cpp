// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00589481 .. +0x38 bytes.
extern "C" __declspec(naked) void _Revoke_COleMessageFilter__QAEXXZ_00589481() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 6fh
        push 67ad48h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C8 0D F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x5894b5
        __asm _emit 0x74
        __asm _emit 0x14
        push 0
        push 0
        ; Exact mapped bytes FF 15 AC C2 68 00: call dword ptr [0x68c2ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
