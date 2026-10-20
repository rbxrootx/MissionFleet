// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005267D9 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_005267d9_005267D9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 0B: jl 0x5267f4
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7C 14: jl 0x526808
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0e5h
        push 6345f0h
        ; Exact mapped bytes E8 3D 25 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x526808
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5267e3
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [edx + eax*4]
        ; Exact mapped bytes E8 C3 62 FA FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
