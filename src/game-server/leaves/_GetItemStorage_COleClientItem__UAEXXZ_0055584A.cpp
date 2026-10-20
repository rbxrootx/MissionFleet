// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055584A .. +0x2B bytes.
extern "C" __declspec(naked) void _GetItemStorage_COleClientItem__UAEXXZ_0055584A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 25 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 0A: je 0x555869
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 F7 FF FF: call 0x554fcc
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x555871
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F F1 FF FF: call 0x5549f0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
