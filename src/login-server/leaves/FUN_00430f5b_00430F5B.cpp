// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430F5B .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_00430f5b_00430F5B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 63: je 0x430fca
        __asm _emit 0x74
        __asm _emit 0x63
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 5D: je 0x430fca
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp + 10h]
        cmp eax, 1
        ; Exact mapped bytes 74 55: je 0x430fca
        __asm _emit 0x74
        __asm _emit 0x55
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x430fca
        __asm _emit 0x74
        __asm _emit 0x51
        cmp eax, 5
        ; Exact mapped bytes 74 4C: je 0x430fca
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp eax, 2
        ; Exact mapped bytes 75 0D: jne 0x430f90
        __asm _emit 0x75
        __asm _emit 0x0d
        push eax
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8E 39 00 00: call 0x43491a
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x430fca
        __asm _emit 0x74
        __asm _emit 0x3a
        lea eax, [ebp - 0ch]
        push eax
        push 0ch
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes FF 15 4C C0 43 00: call dword ptr [0x43c04c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp - 8]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 50 C0 43 00: call dword ptr [0x43c050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        cmp eax, -1
        ; Exact mapped bytes 75 08: jne 0x430fbb
        __asm _emit 0x75
        __asm _emit 0x08
        push 8
        ; Exact mapped bytes FF 15 C4 C4 43 00: call dword ptr [0x43c4c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 54 C0 43 00: call dword ptr [0x43c054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x430fcc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        leave
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
