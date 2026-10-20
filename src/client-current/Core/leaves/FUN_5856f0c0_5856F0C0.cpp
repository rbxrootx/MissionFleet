// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856F0C0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_5856f0c0_5856F0C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5856f0db
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 2B: jge 0x5856f10c
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 178h], 5
        ; Exact mapped bytes 75 19: jne 0x5856f10a
        __asm _emit 0x75
        __asm _emit 0x19
        imul eax, dword ptr [ebp - 4], 18h
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 130h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x5856f10a
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5856f10e
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB C6: jmp 0x5856f0d2
        __asm _emit 0xeb
        __asm _emit 0xc6
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
