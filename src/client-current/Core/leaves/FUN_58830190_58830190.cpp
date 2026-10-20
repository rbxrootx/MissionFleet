// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830190 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_58830190_58830190() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov edx, dword ptr [ecx + 4]
        and edx, dword ptr [ebp + 8]
        push esi
        push edi
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes 74 34: je 0x588301d5
        __asm _emit 0x74
        __asm _emit 0x34
        mov edi, dword ptr [ecx]
        mov eax, 588c0e38h
        sub eax, dword ptr [ecx + 20h]
        ; Exact mapped bytes 0F 10 49 10: movups xmm1, xmmword ptr [ecx + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x49
        __asm _emit 0x10
        mov esi, dword ptr [edi]
        ; Exact mapped bytes 0F 10 10: movups xmm2, xmmword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x10
        bsr eax, edx
        ; Exact mapped bytes 0F 10 04 06: movups xmm0, xmmword ptr [esi + eax]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x06
        lea ecx, [esi + eax]
        ; Exact mapped bytes 0F 57 C1: xorps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 38 17 C2: ptest xmm0, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x17
        __asm _emit 0xc2
        ; Exact mapped bytes 74 17: je 0x588301df
        __asm _emit 0x74
        __asm _emit 0x17
        lea ecx, [ebp - 4]
        btr dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        test edx, edx
        ; Exact mapped bytes 75 DF: jne 0x588301b4
        __asm _emit 0x75
        __asm _emit 0xdf
        pop edi
        xor al, al
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [edi], ecx
        mov al, 1
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
