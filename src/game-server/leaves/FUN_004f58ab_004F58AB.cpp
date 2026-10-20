// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F58AB .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_004f58ab_004F58AB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 52 F3 FF FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        and eax, 0fff0h
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 0f040h
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0c0h
        ; Exact mapped bytes 0F 87 C0 00 00 00: ja 0x4f59a3
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        xor edx, edx
        mov dl, byte ptr [eax + 4f59b7h]
        ; Exact mapped bytes FF 24 95 AB 59 4F 00: jmp dword ptr [edx*4 + 0x4f59ab]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xab
        __asm _emit 0x59
        __asm _emit 0x4f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 75h
        ; Exact mapped bytes 75 18: jne 0x4f591b
        __asm _emit 0x75
        __asm _emit 0x18
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x4f591b
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 9B FF FF: call 0x4ef47b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x4f59a5
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x4f59a3
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        and edx, 0fff0h
        cmp edx, 0f060h
        ; Exact mapped bytes 74 06: je 0x4f5937
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 65: je 0x4f599c
        __asm _emit 0x74
        __asm _emit 0x65
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5F: je 0x4f599c
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes FF 15 14 27 5E 00: call dword ptr [0x5e2714]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 71 04 00: call 0x53ca84
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 112h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 62 04 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4f5984
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 20 27 5E 00: call dword ptr [0x5e2720]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4f599c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 0C 26 5E 00: call dword ptr [0x5e260c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4f59a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
