// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048FD59 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_0048fd59_0048FD59() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 B4 3A 0A 00: call 0x533821
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2B: je 0x48fda1
        __asm _emit 0x74
        __asm _emit 0x2b
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 9A B9 05 00: call 0x4eb727
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1B 29 00 00: call 0x4926b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x48fd9f
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 04: jmp 0x48fda3
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB CF: jmp 0x48fd70
        __asm _emit 0xeb
        __asm _emit 0xcf
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
