// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F9D85 .. +0x1E8 bytes.
extern "C" __declspec(naked) void FUN_004f9d85_004F9D85() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 300000h
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A4 FF FF FF: call 0x4f9d45
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x4f9dab
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 BC 01 00 00: jmp 0x4f9f67
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 100000h
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 70h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 200000h
        neg eax
        sbb eax, eax
        neg eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4f9de6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 7D 69: jge 0x4f9e5a
        __asm _emit 0x7d
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 4]
        add edx, 0ea00h
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6E BF FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 36: jne 0x4f9e42
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        add eax, 0ea00h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4f9e2e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 49 F7 FE FF: call 0x4e9577
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 0ea00h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 32 BF FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        neg edx
        sbb edx, edx
        and edx, 5
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 67 C9 FD FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 83: jmp 0x4f9ddd
        __asm _emit 0xeb
        __asm _emit 0x83
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x4f9e6c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 7D 6A: jge 0x4f9ee1
        __asm _emit 0x7d
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 8]
        add eax, 0ea10h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E9 BE FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 38: jne 0x4f9ec9
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ea10h
        push ecx
        push 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4f9eb4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 C3 F6 FE FF: call 0x4e9577
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ea10h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AB BE FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        neg eax
        sbb eax, eax
        and eax, 5
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E0 C8 FD FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 82: jmp 0x4f9e63
        __asm _emit 0xeb
        __asm _emit 0x82
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 74 5C: je 0x4f9f46
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 53: je 0x4f9f46
        __asm _emit 0x74
        __asm _emit 0x53
        push 0ea20h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 BE FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 31: jne 0x4f9f3a
        __asm _emit 0x75
        __asm _emit 0x31
        push 0ea20h
        push 8000008h
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4f9f2a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 4D F6 FE FF: call 0x4e9577
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0ea20h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3A BE FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 5
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7B C8 FD FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 21: jmp 0x4f9f67
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0ea20h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E BE FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x4f9f67
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
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
