// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588610FB .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588610fb() {
    __asm {
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8A 02: mov al, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x02
        ; Exact mapped bytes 3C 77: cmp al, 0x77
        __asm _emit 0x3c
        __asm _emit 0x77
        ; Exact mapped bytes 75 08: jne 0x5886110c
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8D 42 01: lea eax, [edx + 1]
        __asm _emit 0x8d
        __asm _emit 0x42
        __asm _emit 0x01
        ; Exact mapped bytes 89 41 08: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes EB 08: jmp 0x58861114
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 3C 43: cmp al, 0x43
        __asm _emit 0x3c
        __asm _emit 0x43
        ; Exact mapped bytes 74 04: je 0x58861114
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3C 53: cmp al, 0x53
        __asm _emit 0x3c
        __asm _emit 0x53
        ; Exact mapped bytes 75 04: jne 0x58861118
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes C6 41 24 01: mov byte ptr [ecx + 0x24], 1
        __asm _emit 0xc6
        __asm _emit 0x41
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
