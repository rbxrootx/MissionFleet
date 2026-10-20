// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885E33B .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_5885e33b_5885E33B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        cmp byte ptr [ecx + 4], 0
        ; Exact mapped bytes 74 17: je 0x5885e360
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes E8 2D FA FF FF: call 0x5885dd7b
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        movzx eax, byte ptr [ebp + 8]
        cdq
        shl eax, 1fh
        and dword ptr [ecx], 0
        mov dword ptr [ecx + 4], eax
        pop ebp
        ret
        ; Exact mapped bytes E8 3B FA FF FF: call 0x5885dda0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp + 8]
        shl ecx, 1fh
        mov dword ptr [eax], ecx
        pop ebp
        ret
    }
}
