// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DF8F0 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_004df8f0_004DF8F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 04 B9 68 00: call dword ptr [0x68b904]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 75 0E: jne 0x4df92c
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 64 AD FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 10h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 2F: je 0x4df968
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 0ch]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x4df968
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E0 B8 68 00: call dword ptr [0x68b8e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4df968
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 28 AD FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 57 5B 04 00: call 0x5254ca
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x4dfa55
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
        ; Exact mapped bytes E8 CD FE FF FF: call 0x4df858
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
        ; Exact mapped bytes E8 2B 5B 04 00: call 0x5254ca
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x4df9bc
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 A5 FE FF FF: call 0x4df858
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 06 5B 04 00: call 0x5254ca
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x5b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4df9de
        __asm _emit 0x74
        __asm _emit 0x16
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 83 FE FF FF: call 0x4df858
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
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], -1
        ; Exact mapped bytes 75 0E: jne 0x4dfa11
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 7F AC FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xac
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
        ; Exact mapped bytes FF 15 FC B8 68 00: call dword ptr [0x68b8fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4dfa39
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 57 AC FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4dfa55
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 3B AC FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 10h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 2F: je 0x4dfa91
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 0ch]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x4dfa91
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E0 B8 68 00: call dword ptr [0x68b8e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4dfa91
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 FF AB FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xab
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
