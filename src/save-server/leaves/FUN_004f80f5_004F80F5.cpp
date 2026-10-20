// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F80F5 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_004f80f5_004F80F5() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffh
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0ffh
        cmp eax, ecx
        ; Exact mapped bytes 7E 14: jle 0x4f8124
        __asm _emit 0x7e
        __asm _emit 0x14
        push 210h
        push 672eech
        ; Exact mapped bytes E8 21 0C 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8124
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x4f80fb
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffh
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffh
        cmp eax, ecx
        ; Exact mapped bytes 7C 15: jl 0x4f8154
        __asm _emit 0x7c
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffh
        mov eax, dword ptr [ebp + 14h]
        and eax, 0ffh
        cmp edx, eax
        ; Exact mapped bytes 7E 27: jle 0x4f817b
        __asm _emit 0x7e
        __asm _emit 0x27
        push 0f112h
        push 67310ch
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 89 FE FF FF: call 0x4f8004
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
