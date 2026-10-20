// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874A750 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_5874a750() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 0e4ffh
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        mov edx, 400h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 49 24 05: or word ptr [ecx + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x05
        xor eax, eax
        cmp dword ptr [ecx + 90h], 40000000h
        mov dword ptr [ecx + 94h], eax
        mov dword ptr [ecx + 98h], eax
        mov dword ptr [ecx + 0ach], 20h
        mov dword ptr [ecx + 0a8h], eax
        ; Exact mapped bytes 75 2F: jne 0x5874a7cf
        __asm _emit 0x75
        __asm _emit 0x2f
        mov dword ptr [ecx + 90h], eax
        mov ecx, dword ptr [ecx + 0e0h]
        cmp ecx, eax
        ; Exact mapped bytes 74 07: je 0x5874a7b7
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes E8 5C 44 08 00: call 0x587cec20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E9 01 36 00 00: jmp 0x5874ddd0
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
