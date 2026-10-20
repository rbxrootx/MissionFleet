// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849FF20 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_5849ff20_5849FF20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 8
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 42 81 FE FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5849ff50
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 31 7B FE FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 8
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2B 82 FE FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 62 7A FE FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x5849ff87
        __asm _emit 0x74
        __asm _emit 0x12
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C3 7A FE FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 BC E7 FE FF: call 0x5848e740
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x5849ff41
        __asm _emit 0xeb
        __asm _emit 0xba
        mov esp, ebp
        pop ebp
        ret
    }
}
