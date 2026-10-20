// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425DC1 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_00425dc1_00425DC1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, 32h
        ; Exact mapped bytes 77 14: ja 0x425df7
        __asm _emit 0x77
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        cmp eax, 32h
        ; Exact mapped bytes 7C 04: jl 0x425df5
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 68: jmp 0x425e5d
        __asm _emit 0xeb
        __asm _emit 0x68
        ; Exact mapped bytes EB 61: jmp 0x425e58
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 41h
        ; Exact mapped bytes 77 14: ja 0x425e1f
        __asm _emit 0x77
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        cmp ecx, 46h
        ; Exact mapped bytes 7C 04: jl 0x425e1d
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 40: jmp 0x425e5d
        __asm _emit 0xeb
        __asm _emit 0x40
        ; Exact mapped bytes EB 39: jmp 0x425e58
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 64h
        ; Exact mapped bytes 77 14: ja 0x425e46
        __asm _emit 0x77
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        cmp edx, 64h
        ; Exact mapped bytes 7C 04: jl 0x425e44
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x425e5d
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes EB 12: jmp 0x425e58
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        cmp ecx, 78h
        ; Exact mapped bytes 7C 04: jl 0x425e58
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x425e5d
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
