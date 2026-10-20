// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428A74 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00428a74_00428A74() {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [esp + 4]
        test edx, edx
        push esi
        lea ecx, [edx - 1]
        ; Exact mapped bytes 74 0D: je 0x428a91
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 08: je 0x428a91
        __asm _emit 0x74
        __asm _emit 0x08
        inc eax
        mov esi, ecx
        dec ecx
        test esi, esi
        ; Exact mapped bytes 75 F3: jne 0x428a84
        __asm _emit 0x75
        __asm _emit 0xf3
        cmp byte ptr [eax], 0
        pop esi
        ; Exact mapped bytes 75 05: jne 0x428a9c
        __asm _emit 0x75
        __asm _emit 0x05
        sub eax, dword ptr [esp + 4]
        ret
        mov eax, edx
        ret
    }
}
