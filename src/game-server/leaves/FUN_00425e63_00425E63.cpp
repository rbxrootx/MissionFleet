// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425E63 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_00425e63_00425E63() {
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
        ; Exact mapped bytes 77 20: ja 0x425ea5
        __asm _emit 0x77
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        cmp eax, 32h
        ; Exact mapped bytes 7E 10: jle 0x425ea3
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 41 0C 32 00: mov word ptr [ecx + 0xc], 0x32
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0x32
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x425f26
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7C: jmp 0x425f21
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        shr eax, 4
        and eax, 0ffh
        cmp eax, 41h
        ; Exact mapped bytes 77 1D: ja 0x425ed5
        __asm _emit 0x77
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        cmp edx, 46h
        ; Exact mapped bytes 7E 0D: jle 0x425ed3
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 40 0C 46 00: mov word ptr [eax + 0xc], 0x46
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x46
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 53: jmp 0x425f26
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes EB 4C: jmp 0x425f21
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 64h
        ; Exact mapped bytes 77 1D: ja 0x425f06
        __asm _emit 0x77
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        cmp ecx, 64h
        ; Exact mapped bytes 7E 0D: jle 0x425f04
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 42 0C 64 00: mov word ptr [edx + 0xc], 0x64
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x0c
        __asm _emit 0x64
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 22: jmp 0x425f26
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes EB 1B: jmp 0x425f21
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        cmp ecx, 78h
        ; Exact mapped bytes 7E 0D: jle 0x425f21
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 42 0C 78 00: mov word ptr [edx + 0xc], 0x78
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x0c
        __asm _emit 0x78
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x425f26
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
