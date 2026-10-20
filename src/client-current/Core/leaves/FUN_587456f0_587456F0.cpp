// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587456F0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_587456f0_587456F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx + 3ch]
        shr edx, 1
        and edx, 1
        ; Exact mapped bytes 74 5B: je 0x58745764
        __asm _emit 0x74
        __asm _emit 0x5b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5874571b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 43: jge 0x58745764
        __asm _emit 0x7d
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 A5 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa5
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 25 79 D4 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x79
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 6
        ; Exact mapped bytes 75 1F: jne 0x58745762
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 A8 1A D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 3b6h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 36 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x36
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x58745769
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB AE: jmp 0x58745712
        __asm _emit 0xeb
        __asm _emit 0xae
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
