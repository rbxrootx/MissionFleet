// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D18E .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_0045d18e_0045D18E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 89 E2 0E 00: call 0x54b428
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 E3 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x45d1b9
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 EF E5 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x45d1d4
        __asm _emit 0x75
        __asm _emit 0x1b
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 ED E3 0E 00: call 0x54b5b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 E2 0E 00: call 0x54b450
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 79: jmp 0x45d24d
        __asm _emit 0xeb
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C3 E3 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x45d1ee
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BA E5 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x45d209
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 B8 E3 0E 00: call 0x54b5b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C E2 0E 00: call 0x54b450
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 44: jmp 0x45d24d
        __asm _emit 0xeb
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        ; Exact mapped bytes E8 70 F6 FF FF: call 0x45c888
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DC 22: fsub qword ptr [edx]
        __asm _emit 0xdc
        __asm _emit 0x22
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 9D F6 FF FF: call 0x45c8c5
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 55 FA FF FF: call 0x45cc8b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 56 06 00 00: call 0x45d894
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 E2 0E 00: call 0x54b450
        __asm _emit 0xe8
        __asm _emit 0x06
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
