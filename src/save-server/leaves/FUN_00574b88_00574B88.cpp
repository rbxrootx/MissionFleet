// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00574B88 .. +0x174 bytes.
extern "C" __declspec(naked) void FUN_00574b88_00574B88() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 512h
        push 67cd14h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 BC 56 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x56
        __asm _emit 0xf6
        __asm _emit 0xff
        push 513h
        push 67cd14h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A9 56 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x56
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0c4h], 0
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x574cdf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 0e900h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B 76 FB FF: call 0x52c241
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 51ah
        push 67cd14h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 74 56 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x56
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 90 BE 68 00: call dword ptr [0x68be90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 36: jne 0x574c30
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x574c1a
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 94 BE 68 00: call dword ptr [0x68be94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 90 BE 68 00: call dword ptr [0x68be90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 75 08: jne 0x574c30
        __asm _emit 0x75
        __asm _emit 0x08
        push 0
        ; Exact mapped bytes FF 15 94 BE 68 00: call dword ptr [0x68be94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c4h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B6 00 00 00: call 0x574cfc
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
        ; Exact mapped bytes 75 3B: jne 0x574ca1
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 16 F6 FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x16
        __asm _emit 0xf6
        __asm _emit 0xff
        and eax, 300000h
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x574ca1
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 C4 BE 68 00: call dword ptr [0x68bec4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push 1
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 C4 BE 68 00: call dword ptr [0x68bec4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push 20h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0cch]
        and edx, 200h
        push edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 17 F6 FF: call 0x4d63dd
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x17
        __asm _emit 0xf6
        __asm _emit 0xff
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 99 89 F7 FF: call 0x4ed661
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x89
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0E: je 0x574cdf
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
        ; Exact mapped bytes E8 1E EE F9 FF: call 0x513b09
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xee
        __asm _emit 0xf9
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
