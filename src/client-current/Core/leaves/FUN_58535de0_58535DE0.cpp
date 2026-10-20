// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58535DE0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_58535de0_58535DE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 49: je 0x58535e36
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 40000000h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0b8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 90h], ecx
        ; Exact mapped bytes 66 8B 55 10: mov dx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 E2 04: shl dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x04
        mov eax, 0ffefh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 41 70: and ax, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x41
        __asm _emit 0x70
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 70: mov word ptr [edx + 0x70], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x70
        ; Exact mapped bytes EB 0D: jmp 0x58535e43
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a8h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
