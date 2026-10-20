// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052BD2D .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_0052bd2d_0052BD2D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B7 90 FC FF: call 0x4f4df5
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 3f6h
        push 5c8fcch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 0C F4 FC FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0fff0h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x52be0c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0f040h
        ; Exact mapped bytes 77 2D: ja 0x52bda9
        __asm _emit 0x77
        __asm _emit 0x2d
        cmp dword ptr [ebp - 10h], 0f040h
        ; Exact mapped bytes 74 4B: je 0x52bdd0
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 0f000h
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 30h
        ; Exact mapped bytes 77 75: ja 0x52be0c
        __asm _emit 0x77
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [eax + 52be2ah]
        ; Exact mapped bytes FF 24 95 22 BE 52 00: jmp dword ptr [edx*4 + 0x52be22]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x22
        __asm _emit 0xbe
        __asm _emit 0x52
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 0f050h
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0e0h
        ; Exact mapped bytes 77 4E: ja 0x52be0c
        __asm _emit 0x77
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [eax + 52be63h]
        ; Exact mapped bytes FF 24 95 5B BE 52 00: jmp dword ptr [edx*4 + 0x52be5b]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x5b
        __asm _emit 0xbe
        __asm _emit 0x52
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 0f000h
        shr ecx, 4
        add ecx, 1ef00h
        push ecx
        push 0
        push 365h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E7 FD 00 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52be0a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        push 0e147h
        push 111h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CF FD 00 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x52be1c
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 93 1C 01 00: call 0x53daaf
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
