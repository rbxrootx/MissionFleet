// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053261D .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_0053261d_0053261D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 0B: jl 0x532638
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7C 14: jl 0x53264c
        __asm _emit 0x7c
        __asm _emit 0x14
        push 9ch
        push 5820dch
        ; Exact mapped bytes E8 B9 23 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53264c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x532627
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
