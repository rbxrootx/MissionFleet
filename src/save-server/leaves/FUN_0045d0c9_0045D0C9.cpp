// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D0C9 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_0045d0c9_0045D0C9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 4E E3 0E 00: call 0x54b428
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BD E4 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x45d0f4
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B4 E6 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe6
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x45d10f
        __asm _emit 0x75
        __asm _emit 0x1b
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 B2 E4 0E 00: call 0x54b5b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 E3 0E 00: call 0x54b450
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 79: jmp 0x45d188
        __asm _emit 0xeb
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 88 E4 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x45d129
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7F E6 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe6
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x45d144
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 7D E4 0E 00: call 0x54b5b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 E3 0E 00: call 0x54b450
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 44: jmp 0x45d188
        __asm _emit 0xeb
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 35 F7 FF FF: call 0x45c888
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DC 02: fadd qword ptr [edx]
        __asm _emit 0xdc
        __asm _emit 0x02
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 62 F7 FF FF: call 0x45c8c5
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 1A FB FF FF: call 0x45cc8b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 1B 07 00 00: call 0x45d894
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CB E2 0E 00: call 0x54b450
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
