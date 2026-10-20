// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CE9AA .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_004ce9aa_004CE9AA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9D 1C 07 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1038h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 7A: je 0x4cea4f
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 74 71: je 0x4cea4f
        __asm _emit 0x74
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 22: je 0x4cea09
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 20: jmp 0x4cea29
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 58h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 20: jne 0x4cea4f
        __asm _emit 0x75
        __asm _emit 0x20
        push 671780h
        push 6717b8h
        ; Exact mapped bytes E8 D7 1B FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1b
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push -1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BC FE FF FF: call 0x4ce907
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 48: jmp 0x4cea97
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4B 0D 00 00: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 34: je 0x4cea94
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 100h
        test ecx, ecx
        ; Exact mapped bytes 74 24: je 0x4cea94
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FD DC 05 00: call 0x52c779
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x4cea94
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7E 7E 00 00: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
