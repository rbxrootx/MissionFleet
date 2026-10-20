// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C1D8 .. +0x174 bytes.
extern "C" __declspec(naked) void FUN_0056c1d8_0056C1D8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 512h
        push 5d053ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 6C EF F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0xff
        push 513h
        push 5d053ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 59 EF F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0c4h], 0
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x56c32f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 0e900h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 05 FD FF: call 0x53c7e1
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 51ah
        push 5d053ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 24 EF F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 14 27 5E 00: call dword ptr [0x5e2714]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 36: jne 0x56c280
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x56c26a
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 0C 26 5E 00: call dword ptr [0x5e260c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 14 27 5E 00: call dword ptr [0x5e2714]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 75 08: jne 0x56c280
        __asm _emit 0x75
        __asm _emit 0x08
        push 0
        ; Exact mapped bytes FF 15 0C 26 5E 00: call dword ptr [0x5e260c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c4h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B6 00 00 00: call 0x56c34c
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c8h]
        and edx, 300000h
        test edx, edx
        ; Exact mapped bytes 75 3B: jne 0x56c2f1
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 2B F8 FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2b
        __asm _emit 0xf8
        __asm _emit 0xff
        and eax, 300000h
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x56c2f1
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 70 26 5E 00: call dword ptr [0x5e2670]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push 1
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 70 26 5E 00: call dword ptr [0x5e2670]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push 20h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0cch]
        and edx, 200h
        push edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 2C F8 FF: call 0x4eef4d
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2c
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 6A C3 F9 FF: call 0x508682
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0E: je 0x56c32f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AF 00 FC FF: call 0x52c3ea
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
