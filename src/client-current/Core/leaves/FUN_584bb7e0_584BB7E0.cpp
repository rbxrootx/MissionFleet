// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BB7E0 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_584bb7e0_584BB7E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 10h
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 82 C8 FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc8
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584bb810
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 61 F9 FF FF: call 0x584bb170
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 10h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6B C9 FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A2 C1 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x584bb85d
        __asm _emit 0x74
        __asm _emit 0x28
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 03 C2 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 17: jne 0x584bb85b
        __asm _emit 0x75
        __asm _emit 0x17
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F4 C1 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 07: jne 0x584bb85b
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x584bb85f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB A4: jmp 0x584bb801
        __asm _emit 0xeb
        __asm _emit 0xa4
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
