// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051344C .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_0051344c_0051344C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C8 F8 FB FF: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 3fah
        push 673dc0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 ED 6D FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0fff0h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x51352b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0f040h
        ; Exact mapped bytes 77 2D: ja 0x5134c8
        __asm _emit 0x77
        __asm _emit 0x2d
        cmp dword ptr [ebp - 10h], 0f040h
        ; Exact mapped bytes 74 4B: je 0x5134ef
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 0f000h
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 30h
        ; Exact mapped bytes 77 75: ja 0x51352b
        __asm _emit 0x77
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [eax + 513549h]
        ; Exact mapped bytes FF 24 95 41 35 51 00: jmp dword ptr [edx*4 + 0x513541]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x41
        __asm _emit 0x35
        __asm _emit 0x51
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 0f050h
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0e0h
        ; Exact mapped bytes 77 4E: ja 0x51352b
        __asm _emit 0x77
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [eax + 513582h]
        ; Exact mapped bytes FF 24 95 7A 35 51 00: jmp dword ptr [edx*4 + 0x51357a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x7a
        __asm _emit 0x35
        __asm _emit 0x51
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 0f000h
        shr ecx, 4
        add ecx, 1ef00h
        push ecx
        push 0
        push 365h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 28 81 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x513529
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        push 0e147h
        push 111h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 10 81 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x51353b
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D4 9F 01 00: call 0x52d50f
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x9f
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
