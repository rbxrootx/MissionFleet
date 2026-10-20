// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58755F40 .. +0x362 bytes.
extern "C" __declspec(naked) void FUN_58755f40_58755F40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 818h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 80ch], ecx
        mov eax, dword ptr [ebp - 80ch]
        cmp dword ptr [eax + 94h], 2
        ; Exact mapped bytes 7D 23: jge 0x58755f8b
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 80ch]
        mov edx, dword ptr [ecx + 60h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 80ch]
        ; Exact mapped bytes E8 9B A5 06 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 07 03 00 00: jmp 0x58756292
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 400h
        push 0
        lea edx, [ebp - 804h]
        push edx
        ; Exact mapped bytes E8 72 6E 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x6e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        push 400h
        push 0
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes E8 5C 6E 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6e
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 818h], 0
        mov dword ptr [ebp - 814h], 0
        mov dword ptr [ebp - 808h], 0
        mov dword ptr [ebp - 810h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58755ff0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 810h]
        add ecx, 1
        mov dword ptr [ebp - 810h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp - 810h], eax
        ; Exact mapped bytes 0F 8F 8C 02 00 00: jg 0x58756292
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 810h]
        mov ecx, dword ptr [ebp - 808h]
        mov dl, byte ptr [eax]
        mov byte ptr [ebp + ecx - 404h], dl
        mov eax, dword ptr [ebp - 808h]
        ; Exact mapped bytes 0F BE 8C 05 FC FB FF FF: movsx ecx, byte ptr [ebp + eax - 0x404]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, 20h
        ; Exact mapped bytes 74 76: je 0x587560a7
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 0F BE 84 15 FC FB FF FF: movsx eax, byte ptr [ebp + edx - 0x404]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 9
        ; Exact mapped bytes 74 63: je 0x587560a7
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 0F BE 94 0D FC FB FF FF: movsx edx, byte ptr [ebp + ecx - 0x404]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp edx, 0ah
        ; Exact mapped bytes 74 50: je 0x587560a7
        __asm _emit 0x74
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 808h]
        ; Exact mapped bytes 0F BE 8C 05 FC FB FF FF: movsx ecx, byte ptr [ebp + eax - 0x404]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test ecx, ecx
        ; Exact mapped bytes 74 3E: je 0x587560a7
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 0F BE 84 15 FC FB FF FF: movsx eax, byte ptr [ebp + edx - 0x404]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 0dh
        ; Exact mapped bytes 74 2B: je 0x587560a7
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 808h]
        add ecx, 1
        mov dword ptr [ebp - 808h], ecx
        cmp dword ptr [ebp - 808h], 30h
        ; Exact mapped bytes 7E 0C: jle 0x587560a0
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 818h], 1
        ; Exact mapped bytes EB 05: jmp 0x587560a5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 3C FF FF FF: jmp 0x58755fe1
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0F: jmp 0x587560b6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 808h]
        add edx, 1
        mov dword ptr [ebp - 808h], edx
        cmp dword ptr [ebp - 818h], 1
        ; Exact mapped bytes 74 1A: je 0x587560d9
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 814h]
        add eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [ebp - 80ch]
        cmp eax, dword ptr [ecx + 94h]
        ; Exact mapped bytes 7F 61: jg 0x5875613a
        __asm _emit 0x7f
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 814h]
        add edx, dword ptr [ebp - 808h]
        mov dword ptr [ebp - 814h], edx
        lea eax, [ebp - 404h]
        push eax
        push 400h
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes E8 6D 04 D3 FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 808h], 0
        mov edx, dword ptr [ebp - 80ch]
        mov eax, dword ptr [edx + 94h]
        push eax
        push 0
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes E8 E8 6C 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 818h], 0
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x587561d2
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 80ch]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 804h]
        push edx
        mov ecx, dword ptr [ebp - 80ch]
        ; Exact mapped bytes E8 C6 A3 06 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 808h]
        mov dword ptr [ebp - 814h], eax
        mov dword ptr [ebp - 808h], 0
        push 400h
        push 0
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes E8 8D 6C 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        push 588b4ef4h
        push 400h
        lea edx, [ebp - 804h]
        push edx
        ; Exact mapped bytes E8 D4 03 D3 FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0xd3
        __asm _emit 0xff
        lea eax, [ebp - 404h]
        push eax
        push 400h
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes E8 BC 03 D3 FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 80ch]
        mov eax, dword ptr [edx + 94h]
        push eax
        push 0
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes E8 41 6C 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6c
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 810h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 0ah
        ; Exact mapped bytes 74 10: je 0x587561f3
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 810h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 23: jne 0x58756216
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 80ch]
        mov ecx, dword ptr [eax + 60h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 804h]
        push eax
        mov ecx, dword ptr [ebp - 80ch]
        ; Exact mapped bytes E8 0D A3 06 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa3
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 7C: jmp 0x58756292
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 810h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 0dh
        ; Exact mapped bytes 75 66: jne 0x5875628d
        __asm _emit 0x75
        __asm _emit 0x66
        cmp dword ptr [ebp - 814h], 0
        ; Exact mapped bytes 7E 0E: jle 0x5875623e
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 814h]
        mov byte ptr [ebp + eax - 805h], 20h
        mov ecx, dword ptr [ebp - 810h]
        add ecx, 1
        mov dword ptr [ebp - 810h], ecx
        mov dword ptr [ebp - 814h], 0
        mov edx, dword ptr [ebp - 80ch]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 804h]
        push edx
        mov ecx, dword ptr [ebp - 80ch]
        ; Exact mapped bytes E8 A9 A2 06 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        push 400h
        push 0
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes E8 86 6B 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 4F FD FF FF: jmp 0x58755fe1
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B4 AD 0D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xad
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
