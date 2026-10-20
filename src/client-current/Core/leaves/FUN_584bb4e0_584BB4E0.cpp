// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BB4E0 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_584bb4e0_584BB4E0() {
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
        ; Exact mapped bytes E8 82 CB FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584bb510
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 91 FC FF FF: call 0x584bb1a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6B CC FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A2 C4 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2E: je 0x584bb563
        __asm _emit 0x74
        __asm _emit 0x2e
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 03 C5 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 1D: jne 0x584bb561
        __asm _emit 0x75
        __asm _emit 0x1d
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F4 C4 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 0D: jne 0x584bb561
        __asm _emit 0x75
        __asm _emit 0x0d
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 E4 C4 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        add eax, 2dh
        ; Exact mapped bytes EB 04: jmp 0x584bb565
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 9E: jmp 0x584bb501
        __asm _emit 0xeb
        __asm _emit 0x9e
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
