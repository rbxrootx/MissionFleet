// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BB720 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_584bb720_584BB720() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 42 C9 FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584bb750
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 51 FA FF FF: call 0x584bb1a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2B CA FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 62 C2 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2B: je 0x584bb7a0
        __asm _emit 0x74
        __asm _emit 0x2b
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C3 C2 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 1A: jne 0x584bb79e
        __asm _emit 0x75
        __asm _emit 0x1a
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B4 C2 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 0A: jne 0x584bb79e
        __asm _emit 0x75
        __asm _emit 0x0a
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A4 C2 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x584bb7a2
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB A1: jmp 0x584bb741
        __asm _emit 0xeb
        __asm _emit 0xa1
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
