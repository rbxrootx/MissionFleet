// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58558F90 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_58558f90_58558F90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 1ch
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D2 F0 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf0
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58558fc0
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 18h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C1 EA F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 1ch
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BB F1 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F2 E9 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 36: je 0x5855901b
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 51 EA F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 36 00 00 00: call 0x58559030
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x58559019
        __asm _emit 0x74
        __asm _emit 0x1b
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 3A EA F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        push 0ch
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 1E 80 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x80
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 96: jmp 0x58558fb1
        __asm _emit 0xeb
        __asm _emit 0x96
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1ch
        ; Exact mapped bytes E8 CA F0 F2 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf0
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
