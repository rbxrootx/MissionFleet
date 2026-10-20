// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848D1F0 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_5848d1f0_5848D1F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 64h
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 72 AE FF FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5848d220
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 11 BE FF FF: call 0x58489030
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 64h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5B AF FF FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 92 A7 FF FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x5848d25d
        __asm _emit 0x74
        __asm _emit 0x18
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F3 A7 FF FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 07: jne 0x5848d25b
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5848d25f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B4: jmp 0x5848d211
        __asm _emit 0xeb
        __asm _emit 0xb4
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
