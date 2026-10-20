// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58535D90 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_58535d90_58535D90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3A: je 0x58535dd7
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0bch], ecx
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
        ; Exact mapped bytes 66 C1 E2 02: shl dx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x02
        mov eax, 0fffbh
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
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 84h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
