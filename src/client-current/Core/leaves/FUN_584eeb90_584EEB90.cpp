// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EEB90 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_584eeb90_584EEB90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        movzx eax, word ptr [ebp + 10h]
        not eax
        ; Exact mapped bytes 66 89 45 10: mov word ptr [ebp + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 37: je 0x584eebef
        __asm _emit 0x74
        __asm _emit 0x37
        movzx eax, word ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx]
        xor eax, edx
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        movzx ecx, word ptr [ebp + 10h]
        sar ecx, 8
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        mov eax, dword ptr [ebp - 0ch]
        movzx edx, word ptr [eax + edx*4]
        xor edx, ecx
        ; Exact mapped bytes 66 89 55 10: mov word ptr [ebp + 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes EB B4: jmp 0x584eeba3
        __asm _emit 0xeb
        __asm _emit 0xb4
        movzx eax, word ptr [ebp + 10h]
        not eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
