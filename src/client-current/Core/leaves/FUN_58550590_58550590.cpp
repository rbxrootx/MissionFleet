// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58550590 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58550590_58550590() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 16: je 0x585505b5
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6C 7C F3 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x7c
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
