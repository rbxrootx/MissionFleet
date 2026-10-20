// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585714A0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_585714a0_585714A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 10000h
        ; Exact mapped bytes 74 0B: je 0x585714c6
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 4], 1000000h
        ; Exact mapped bytes 74 21: je 0x585714e5
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes EB 3C: jmp 0x58571502
        __asm _emit 0xeb
        __asm _emit 0x3c
        push 8
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 58947588h
        ; Exact mapped bytes E8 BA B3 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb3
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes C7 05 90 75 94 58 00 00 00 00: mov dword ptr [0x58947590], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x58571502
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 58947588h
        ; Exact mapped bytes E8 9B B3 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb3
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes C7 05 90 75 94 58 01 00 00 00: mov dword ptr [0x58947590], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
