// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BAC40 .. +0x1BB bytes.
extern "C" __declspec(naked) void _asctime_004BAC40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        ; Exact mapped bytes E8 55 82 FF FF: call 0x4b2ea0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 22: jne 0x4bac79
        __asm _emit 0x75
        __asm _emit 0x22
        push 5ah
        push 58ccc0h
        push 2
        push 1ah
        ; Exact mapped bytes E8 C9 F5 FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 38h], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 74 0B: je 0x4bac84
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 38h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x4bac8b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 5deff0h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        imul ecx, ecx, 3
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        imul eax, eax, 3
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 12: jmp 0x4bacc4
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 7D 25: jge 0x4bacef
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [eax + 58c884h]
        mov byte ptr [ecx], dl
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [eax + 58c89ch]
        mov byte ptr [ecx + 4], dl
        ; Exact mapped bytes EB C3: jmp 0x4bacb2
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 20h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 20h
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E3 00 00 00: call 0x4bae00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx], 20h
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 BE 00 00 00: call 0x4bae00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 3ah
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 99 00 00 00: call 0x4bae00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 3ah
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 75 00 00 00: call 0x4bae00
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx], 20h
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 14h]
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, 13h
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 45 00 00 00: call 0x4bae00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 14h]
        cdq
        mov ecx, 64h
        idiv ecx
        push edx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 27 00 00 00: call 0x4bae00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 0ah
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 18h]
        mov esp, ebp
        pop ebp
        ret
    }
}
