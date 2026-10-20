// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00459F21 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_00459f21_00459F21() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 6
        ; Exact mapped bytes 74 10: je 0x459f45
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 11 0F 00: call 0x54b050
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x11
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 02 06 00: mov word ptr [edx], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
