// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9780 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_584a9780_584A9780() {
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
        ; Exact mapped bytes E8 57 FD FF FF: call 0x584a94f0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 06 FF FF FF: call 0x584a96b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x584a97ce
        __asm _emit 0x74
        __asm _emit 0x1d
        mov byte ptr [ebp - 1], 0
        lea edx, [ebp - 1]
        push edx
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B 77 FF FF: call 0x584a0f60
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x584a9882
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2A 0C 00 00: call 0x584aa400
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 22 9A FF FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 3]
        push ecx
        ; Exact mapped bytes E8 C6 DA FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 B7 DA FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 EA 87 FF FF: call 0x584a1ff0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F4 E6 FD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe6
        __asm _emit 0xfd
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
        ; Exact mapped bytes E8 E4 F6 FF FF: call 0x584a8f20
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A9 9C FF FF: call 0x584a34f0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 0E 04 00 00: call 0x584a9c60
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x04
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
        ; Exact mapped bytes E8 B9 99 FF FF: call 0x584a3220
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 2], 1
        lea ecx, [ebp - 2]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 76 FF FF: call 0x584a0f60
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x76
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
