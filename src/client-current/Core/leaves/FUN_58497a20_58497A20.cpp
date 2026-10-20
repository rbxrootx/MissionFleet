// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58497A20 .. +0x283 bytes.
extern "C" __declspec(naked) void FUN_58497a20_58497A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 338h]
        ; Exact mapped bytes 7E 14: jle 0x58497a5a
        __asm _emit 0x7e
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 338h]
        mov dword ptr [eax + 320h], edx
        ; Exact mapped bytes EB 23: jmp 0x58497a7d
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cmp eax, 14h
        ; Exact mapped bytes 7D 0D: jge 0x58497a7d
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 320h], 14h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x58497b7c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 33ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AE 45 FF FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x58497b77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E 45 FF FF: call 0x5848c050
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        imul edx, eax, 3e8h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 320h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 320h]
        sub eax, dword ptr [edx + 33ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 344h], 0
        ; Exact mapped bytes 7D 23: jge 0x58497b05
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 320h]
        cmp ecx, dword ptr [eax + 33ch]
        ; Exact mapped bytes 7C 0D: jl 0x58497b03
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 344h], 0
        ; Exact mapped bytes EB 21: jmp 0x58497b26
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 320h]
        cmp edx, dword ptr [ecx + 33ch]
        ; Exact mapped bytes 7F 0D: jg 0x58497b26
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 344h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 344h]
        mov dword ptr [ebp - 0ch], edx
        imul eax, dword ptr [ebp - 8], 0ah
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 338h]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 344h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 344h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 344h]
        push eax
        ; Exact mapped bytes E8 AF 97 FF FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, 190h
        ; Exact mapped bytes 7E 0C: jle 0x58497b77
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 344h], edx
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x58497c9c
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 318h], 0
        ; Exact mapped bytes 75 39: jne 0x58497bc1
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 338h]
        mov dword ptr [ecx + 320h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4c8h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 318h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 318h], eax
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x58497c9c
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 318h], 1
        ; Exact mapped bytes 0F 85 CB 00 00 00: jne 0x58497c9c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 320h]
        sub edx, dword ptr [ecx + 33ch]
        mov dword ptr [ebp - 10h], edx
        imul eax, dword ptr [ebp - 10h], 0ah
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 338h]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 344h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 344h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 344h], 190h
        ; Exact mapped bytes 7E 0D: jle 0x58497c22
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 344h], 190h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 320h]
        cmp eax, dword ptr [edx + 33ch]
        ; Exact mapped bytes 7F 66: jg 0x58497c9c
        __asm _emit 0x7f
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 344h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 318h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4dch], 0
        ; Exact mapped bytes 74 33: je 0x58497c8f
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4c4h], 64h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4dch]
        mov dword ptr [edx + 4d4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4e0h]
        mov dword ptr [edx + 4d8h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x58497c9c
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4c4h], 0
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
