// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588301F0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_588301f0_588301F0() {
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 28 C8: movaps xmm1, xmm0
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc8
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi]
        nop
        ; Exact mapped bytes 0F 10 06: movups xmm0, xmmword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        mov eax, 10h
        ; Exact mapped bytes 66 0F 3A 61 C1 40: pcmpestri xmm0, xmm1, 0x40
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc1
        __asm _emit 0x40
        ; Exact mapped bytes 73 09: jae 0x58830219
        __asm _emit 0x73
        __asm _emit 0x09
        mov eax, dword ptr [edi + 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 7E 02: jle 0x58830219
        __asm _emit 0x7e
        __asm _emit 0x02
        mov dword ptr [eax], ecx
        add esi, 10h
        cmp esi, dword ptr [edi + 4]
        ; Exact mapped bytes 75 DF: jne 0x58830200
        __asm _emit 0x75
        __asm _emit 0xdf
        mov eax, dword ptr [edi + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5883023d
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 0F 10 47 10: movups xmm0, xmmword ptr [edi + 0x10]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F 3A 61 C1 40: pcmpestri xmm0, xmm1, 0x40
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc1
        __asm _emit 0x40
        ; Exact mapped bytes 73 09: jae 0x5883023d
        __asm _emit 0x73
        __asm _emit 0x09
        mov eax, dword ptr [edi + 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 7E 02: jle 0x5883023d
        __asm _emit 0x7e
        __asm _emit 0x02
        mov dword ptr [eax], ecx
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
