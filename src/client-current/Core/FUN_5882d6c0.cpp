// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D6C0 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_5882d6c0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 09: jmp 0x5882d6e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 14: je 0x5882d6fb
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 08: jne 0x5882d6f9
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 04: jmp 0x5882d6fd
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB DD: jmp 0x5882d6d8
        __asm _emit 0xeb
        __asm _emit 0xdd
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
