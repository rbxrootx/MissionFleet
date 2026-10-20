// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58648B80 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_58648b80_58648B80() {
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
        ; Exact mapped bytes E8 E0 F4 E3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf4
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58648bb2
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 5F E0 FF FF: call 0x58646c10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 190h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C7 F5 E3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf5
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 FE ED E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xed
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 46: je 0x58648c1f
        __asm _emit 0x74
        __asm _emit 0x46
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 5F EE E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xee
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, 2dh
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x58648c1d
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
        ; Exact mapped bytes E8 9B 21 00 00: call 0x5864adb0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x58648c21
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 84: jmp 0x58648ba3
        __asm _emit 0xeb
        __asm _emit 0x84
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
