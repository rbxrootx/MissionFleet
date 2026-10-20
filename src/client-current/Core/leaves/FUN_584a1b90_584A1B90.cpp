// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A1B90 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_584a1b90_584A1B90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 FB FF FF: call 0x584a1750
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F6 FE FF FF: call 0x584a1ab0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x584a1bde
        __asm _emit 0x74
        __asm _emit 0x1d
        mov byte ptr [ebp - 1], 0
        lea edx, [ebp - 1]
        push edx
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B F3 FF FF: call 0x584a0f60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x584a1c92
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BA 15 00 00: call 0x584a31a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 12 16 00 00: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 3]
        push ecx
        ; Exact mapped bytes E8 B6 56 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 A7 56 FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 DA 03 00 00: call 0x584a1ff0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E4 62 FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 5889517ch
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 D4 F3 FF FF: call 0x584a1020
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 99 18 00 00: call 0x584a34f0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 AE 07 00 00: call 0x584a2410
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A9 15 00 00: call 0x584a3220
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 2], 1
        lea ecx, [ebp - 2]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 F2 FF FF: call 0x584a0f60
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
