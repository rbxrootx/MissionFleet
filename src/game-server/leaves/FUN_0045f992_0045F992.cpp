// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F992 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_0045f992_0045F992() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [eax + 34h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 38h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [eax + 3ch], edx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8A 0D 79 CB 5D 00: mov cl, byte ptr [0x5dcb79]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [eax + 40h], cl
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x45f9f9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 62: jne 0x45fa61
        __asm _emit 0x75
        __asm _emit 0x62
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cd8h]
        ; Exact mapped bytes E8 71 70 FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x45fa36
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 10h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 34h
        push ecx
        push 0
        push 0
        push 80017003h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE 77 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x45fa5f
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40cd8h]
        ; Exact mapped bytes E8 A0 F6 FE FF: call 0x44f0e7
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5ba794h
        ; Exact mapped bytes E8 B9 01 07 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 8F: jmp 0x45f9f0
        __asm _emit 0xeb
        __asm _emit 0x8f
        mov eax, 1
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 70 8D 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
