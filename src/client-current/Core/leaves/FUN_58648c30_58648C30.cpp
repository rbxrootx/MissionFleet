// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58648C30 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_58648c30_58648C30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 190h
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 30 F4 E3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf4
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58648c62
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 AF DF FF FF: call 0x58646c10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 190h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 17 F5 E3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf5
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4E ED E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xed
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 49: je 0x58648cd2
        __asm _emit 0x74
        __asm _emit 0x49
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 AF ED E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xed
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, 2dh
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 2dh
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x58648cd0
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 8]
        add ecx, 190h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E8 20 00 00: call 0x5864adb0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x58648cd4
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 81: jmp 0x58648c53
        __asm _emit 0xeb
        __asm _emit 0x81
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
