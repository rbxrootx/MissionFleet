// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048D830 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0048d830_0048D830() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7C 11: jl 0x48d856
        __asm _emit 0x7c
        __asm _emit 0x11
        push 7bh
        push 5c6080h
        ; Exact mapped bytes E8 AF 71 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48d856
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x48d83a
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp + 8]
        lea eax, [ecx + edx*4]
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
