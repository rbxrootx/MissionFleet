// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004834D8 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_004834d8_004834D8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 4B: je 0x483547
        __asm _emit 0x74
        __asm _emit 0x4b
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x483515
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 32h
        ; Exact mapped bytes 7D 27: jge 0x483542
        __asm _emit 0x7d
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 0
        ; Exact mapped bytes 75 09: jne 0x483540
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB CA: jmp 0x48350c
        __asm _emit 0xeb
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 02: jmp 0x483549
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
