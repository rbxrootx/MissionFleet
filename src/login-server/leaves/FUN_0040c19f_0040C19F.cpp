// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C19F .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_0040c19f_0040C19F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        push 10h
        push 0
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 2B 29 01 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], 10h
        lea ecx, [ebp - 1ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 01 02 00 00: call 0x40c3d0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 3B: je 0x40c213
        __asm _emit 0x74
        __asm _emit 0x3b
        push 2
        push 4
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 C4 C5 43 00: call dword ptr [0x43c5c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 10: je 0x40c1ff
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 37 1B 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x40c20c
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 449610h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 1B 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x40c215
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
