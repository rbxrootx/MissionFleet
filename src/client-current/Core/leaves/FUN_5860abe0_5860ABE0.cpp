// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5860ABE0 .. +0x1B0 bytes.
extern "C" __declspec(naked) void FUN_5860abe0_5860ABE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 8B 01 00 00: je 0x5860ad8e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x5860ad04
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x5860ad04
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 58h]
        ; Exact mapped bytes E8 0D 6A EC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6a
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x5860ad04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 58h]
        ; Exact mapped bytes E8 FA 69 EC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x69
        __asm _emit 0xec
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 8E 9A 00 00 00: jle 0x5860ad04
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 58h]
        ; Exact mapped bytes E8 DB 69 EC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x69
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dl, byte ptr [eax + ecx - 1]
        mov byte ptr [ebp - 1], dl
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 74 24: je 0x5860acac
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, 27h
        ; Exact mapped bytes 74 1B: je 0x5860acac
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, 7fh
        ; Exact mapped bytes 74 12: je 0x5860acac
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7C 61: jl 0x5860ad04
        __asm _emit 0x7c
        __asm _emit 0x61
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, 1fh
        ; Exact mapped bytes 7F 58: jg 0x5860ad04
        __asm _emit 0x7f
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 58h]
        ; Exact mapped bytes E8 49 58 EC FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x58
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 9D E7 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x9d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], ecx
        push 0
        push 64h
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes E8 02 C5 EC FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc5
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        push 0
        push 8
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6D E0 EC FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5860ad25
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5860ad25
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 5A: je 0x5860ad8e
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5860ad48
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB E6: jmp 0x5860ad2e
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C0 A8 E8 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5860ad6c
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x5860ad8e
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5860ad8c
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9C A8 E8 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB A0: jmp 0x5860ad2e
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
