// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58558F00 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_58558f00_58558F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 10h
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 62 F1 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58558f30
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 18h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 51 EB F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xeb
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 10h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4B F2 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf2
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 82 EA F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 1D: je 0x58558f72
        __asm _emit 0x74
        __asm _emit 0x1d
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 E3 EA F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xea
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        push 10h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 C7 80 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB AF: jmp 0x58558f21
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov ecx, dword ptr [ebp - 8]
        add ecx, 10h
        ; Exact mapped bytes E8 73 F1 F2 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf1
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
