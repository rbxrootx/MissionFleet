// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2B33 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_004a2b33_004A2B33() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f084h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 B5 06 00: call 0x50e0a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x4a2bf0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 20 26 5E 00: call dword ptr [0x5e2620]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 89 E3 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0F B6 04 00: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 24 26 5E 00: call dword ptr [0x5e2624]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 86 B5 04 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        push 400h
        push 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 EE E3 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 77 E1 FF FF: call 0x4a0d3c
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x4a2bdf
        __asm _emit 0x75
        __asm _emit 0x16
        push -1
        push 0
        push 0f118h
        ; Exact mapped bytes E8 F2 AC 06 00: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 B5 06 00: call 0x50e1bf
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb5
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5E AC 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 3B: jmp 0x4a2c2b
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 400h
        push 0
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 D9 E2 FF FF: call 0x4a0edc
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 98 E3 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 67 42 06 00: call 0x506e83
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 21 AC 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
