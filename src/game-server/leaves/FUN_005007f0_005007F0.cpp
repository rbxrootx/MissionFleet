// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005007F0 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_005007f0_005007F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 EC 22 5E 00: call dword ptr [0x5e22ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 75 0E: jne 0x50082c
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A4 B0 FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 10h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 2F: je 0x500868
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 0ch]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x500868
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 CC 22 5E 00: call dword ptr [0x5e22cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x500868
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 68 B0 FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 6D 0E 03 00: call 0x5316e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x500955
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 CD FE FF FF: call 0x500758
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 41 0E 03 00: call 0x5316e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x5008bc
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 A5 FE FF FF: call 0x500758
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1C 0E 03 00: call 0x5316e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5008de
        __asm _emit 0x74
        __asm _emit 0x16
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 83 FE FF FF: call 0x500758
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 0c0000000h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], -1
        ; Exact mapped bytes 75 0E: jne 0x500911
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 BF AF FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 E4 22 5E 00: call dword ptr [0x5e22e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x500939
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 97 AF FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x500955
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 7B AF FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 10h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 2F: je 0x500991
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 0ch]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x500991
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 CC 22 5E 00: call dword ptr [0x5e22cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x500991
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 3F AF FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
