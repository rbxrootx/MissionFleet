// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F057 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_0045f057_0045F057() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        push 18h
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes E8 94 9F 04 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 2ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [edx + 30h], ecx
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A0 79 CB 5D 00: mov al, byte ptr [0x5dcb79]
        __asm _emit 0xa0
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [edx + 34h], al
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x45f0cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 63: jne 0x45f134
        __asm _emit 0x75
        __asm _emit 0x63
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40cd8h]
        ; Exact mapped bytes E8 9E 79 FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x45f109
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 24h
        mov eax, dword ptr [ebp - 0ch]
        add eax, 14h
        push eax
        push 0
        push 0
        push 80017001h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 81 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x45f132
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40cd8h]
        ; Exact mapped bytes E8 CD FF FE FF: call 0x44f0e7
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 5ba5b8h
        ; Exact mapped bytes E8 E6 0A 07 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 8E: jmp 0x45f0c2
        __asm _emit 0xeb
        __asm _emit 0x8e
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 A0 96 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
