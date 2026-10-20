// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425FA0 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_00425fa0_00425FA0() {
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
        ; Exact mapped bytes EB 09: jmp 0x425fd3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x425ff8
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        cmp eax, ecx
        ; Exact mapped bytes 75 08: jne 0x425ff6
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes EB 04: jmp 0x425ffa
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D2: jmp 0x425fca
        __asm _emit 0xeb
        __asm _emit 0xd2
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
