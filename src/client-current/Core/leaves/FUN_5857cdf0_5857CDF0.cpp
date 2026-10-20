// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857CDF0 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_5857cdf0_5857CDF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 9
        push ecx
        ; Exact mapped bytes E8 30 42 2B 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x42
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], edx
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 63 FA 2C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        push ecx
        ; Exact mapped bytes E8 39 73 23 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 2D 43 2D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x43
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        add eax, 9
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes A1 30 05 96 58: mov eax, dword ptr [0x58960530]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 80010f0eh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0F FB 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfb
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 19: je 0x5857cea1
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 B4 41 2B 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x41
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
