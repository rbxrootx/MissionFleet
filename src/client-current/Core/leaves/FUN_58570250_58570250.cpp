// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58570250 .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_58570250_58570250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0a4h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x5857036d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], 50000h
        mov dword ptr [ebp - 0a0h], 0
        mov dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585702a2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 9ch]
        add eax, 1
        mov dword ptr [ebp - 9ch], eax
        cmp dword ptr [ebp - 9ch], 3
        ; Exact mapped bytes 7D 33: jge 0x585702de
        __asm _emit 0x7d
        __asm _emit 0x33
        mov ecx, dword ptr [ebp + 8]
        push ecx
        imul edx, dword ptr [ebp - 9ch], 18h
        mov eax, dword ptr [ebp - 0a4h]
        lea ecx, [eax + edx + 130h]
        push ecx
        ; Exact mapped bytes E8 17 09 2E 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x585702dc
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0a0h], 1
        ; Exact mapped bytes EB 02: jmp 0x585702de
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B5: jmp 0x58570293
        __asm _emit 0xeb
        __asm _emit 0xb5
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5857036d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 48h
        push 0
        lea edx, [ebp - 98h]
        push edx
        ; Exact mapped bytes E8 15 CB 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xcb
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 49h
        push 0
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 05 CB 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xcb
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 589604e0h
        push 18h
        lea ecx, [ebp - 98h]
        push ecx
        ; Exact mapped bytes E8 5F 3E 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3e
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        push 18h
        lea eax, [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 4D 3E 24 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x3e
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        push 48h
        lea ecx, [ebp - 98h]
        push ecx
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 48 C5 2D 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc5
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 49h
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        push 0
        push 8001b112h
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 24 C6 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc6
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 D9 0C 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0c
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
