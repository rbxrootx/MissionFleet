// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525F26 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_00525f26_00525F26() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 0B: jl 0x525f41
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7C 11: jl 0x525f52
        __asm _emit 0x7c
        __asm _emit 0x11
        push 39h
        push 6345f0h
        ; Exact mapped bytes E8 F3 2D 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525f52
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x525f30
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 04 51: mov ax, word ptr [ecx + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x51
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
