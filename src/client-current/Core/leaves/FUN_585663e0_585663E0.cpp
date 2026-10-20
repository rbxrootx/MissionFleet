// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585663E0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_585663e0_585663E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 34 06 96 58 00: cmp dword ptr [0x58960634], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x585663f7
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 66: jmp 0x5856645d
        __asm _emit 0xeb
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 1A: je 0x5856641d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 138h]
        push edx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 5B 11 00: call 0x5867bfc0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x5b
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x58566424
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 12: jne 0x58566442
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 31ch]
        xor eax, 55555555h
        ; Exact mapped bytes EB 1D: jmp 0x5856645d
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes EB 1B: jmp 0x5856645d
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 75 12: jne 0x5856645a
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3d0h]
        xor eax, 55555555h
        ; Exact mapped bytes EB 05: jmp 0x5856645d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB 03: jmp 0x5856645d
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
    }
}
