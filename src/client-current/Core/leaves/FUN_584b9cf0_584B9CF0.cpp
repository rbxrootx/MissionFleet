// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B9CF0 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_584b9cf0_584B9CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 6ch
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 72 E3 FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe3
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584b9d20
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 61 DD FC FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 6ch
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5B E4 FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 92 DC FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 33: je 0x584b9d78
        __asm _emit 0x74
        __asm _emit 0x33
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F3 DC FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 22: jne 0x584b9d76
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 8]
        add ecx, 6ch
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3D 02 00 00: call 0x584b9fb0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 02: jmp 0x584b9d78
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 99: jmp 0x584b9d11
        __asm _emit 0xeb
        __asm _emit 0x99
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
