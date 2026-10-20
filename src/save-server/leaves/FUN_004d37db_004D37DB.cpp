// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D37DB .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_004d37db_004D37DB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 52 F3 FF FF: call 0x4d2b3e
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
        ; Exact mapped bytes 0F 87 C0 00 00 00: ja 0x4d38d3
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        xor edx, edx
        mov dl, byte ptr [eax + 4d38e7h]
        ; Exact mapped bytes FF 24 95 DB 38 4D 00: jmp dword ptr [edx*4 + 0x4d38db]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xdb
        __asm _emit 0x38
        __asm _emit 0x4d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        cmp ecx, 75h
        ; Exact mapped bytes 75 18: jne 0x4d384b
        __asm _emit 0x75
        __asm _emit 0x18
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x4d384b
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA 30 00 00: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x4d38d5
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x4d38d3
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        and edx, 0fff0h
        cmp edx, 0f060h
        ; Exact mapped bytes 74 06: je 0x4d3867
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 65: je 0x4d38cc
        __asm _emit 0x74
        __asm _emit 0x65
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5F: je 0x4d38cc
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes FF 15 90 BE 68 00: call dword ptr [0x68be90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 8C 05 00: call 0x52c4e4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 112h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 7D 05 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7d
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4d38b4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 7C BF 68 00: call dword ptr [0x68bf7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4d38cc
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 94 BE 68 00: call dword ptr [0x68be94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4d38d5
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
