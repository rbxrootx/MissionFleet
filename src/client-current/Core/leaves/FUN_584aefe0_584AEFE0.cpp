// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AEFE0 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_584aefe0_584AEFE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 0C 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes EB 09: jmp 0x584af010
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D 83 00 00 00: jge 0x584af09d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3A 3B FF FF: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dl, byte ptr [eax + 2]
        mov byte ptr [ebp - 1], dl
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 12: je 0x584af046
        __asm _emit 0x74
        __asm _emit 0x12
        movzx ecx, byte ptr [ebp - 1]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 09: jne 0x584af046
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 10h
        ; Exact mapped bytes 74 12: je 0x584af060
        __asm _emit 0x74
        __asm _emit 0x12
        movzx ecx, byte ptr [ebp - 1]
        cmp ecx, 0ch
        ; Exact mapped bytes 75 09: jne 0x584af060
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 100h
        ; Exact mapped bytes 74 12: je 0x584af07c
        __asm _emit 0x74
        __asm _emit 0x12
        movzx ecx, byte ptr [ebp - 1]
        cmp ecx, 0dh
        ; Exact mapped bytes 75 09: jne 0x584af07c
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 1000h
        ; Exact mapped bytes 74 12: je 0x584af098
        __asm _emit 0x74
        __asm _emit 0x12
        movzx ecx, byte ptr [ebp - 1]
        cmp ecx, 0eh
        ; Exact mapped bytes 75 09: jne 0x584af098
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x584af007
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
