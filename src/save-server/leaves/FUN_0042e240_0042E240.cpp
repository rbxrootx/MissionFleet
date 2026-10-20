// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E240 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0042e240_0042E240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 09: jmp 0x42e273
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 14: je 0x42e28d
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 08: jne 0x42e28b
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 04: jmp 0x42e28f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB DD: jmp 0x42e26a
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
