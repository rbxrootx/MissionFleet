// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58566330 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_58566330_58566330() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 4B: jne 0x5856638a
        __asm _emit 0x75
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 31ch]
        xor ecx, 55555555h
        ; Exact mapped bytes 7E 2B: jle 0x5856637b
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 31ch]
        xor eax, 55555555h
        mov ecx, 0ffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A 08 03 00 00: and cx, word ptr [edx + 0x308]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, cx
        cdq
        idiv ecx
        xor eax, 55h
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x58566382
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 55h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 49: jmp 0x585663d3
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3d0h]
        xor ecx, 55555555h
        ; Exact mapped bytes 7E 2B: jle 0x585663c6
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3d0h]
        xor eax, 55555555h
        mov ecx, 0ffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A BC 03 00 00: and cx, word ptr [edx + 0x3bc]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, cx
        cdq
        idiv ecx
        xor eax, 55h
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585663cd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 55h
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
