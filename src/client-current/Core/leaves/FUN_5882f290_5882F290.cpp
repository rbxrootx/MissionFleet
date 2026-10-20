// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882F290 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5882f290_5882F290() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 8]
        push esi
        push edi
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x5882f2bc
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, dword ptr [ebp + 10h]
        mov edi, 100h
        movzx ecx, word ptr [edx + eax*2 - 2]
        dec eax
        ; Exact mapped bytes 66 3B CF: cmp cx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 73 06: jae 0x5882f2b8
        __asm _emit 0x73
        __asm _emit 0x06
        cmp byte ptr [ecx + esi], 0
        ; Exact mapped bytes 75 07: jne 0x5882f2bf
        __asm _emit 0x75
        __asm _emit 0x07
        test eax, eax
        ; Exact mapped bytes 75 EB: jne 0x5882f2a7
        __asm _emit 0x75
        __asm _emit 0xeb
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebp
        ret
    }
}
