// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416CB6 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_00416cb6_00416CB6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x416cda
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x416de2
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3F 4B 03 00: call 0x44b825
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        cmp ecx, 8
        ; Exact mapped bytes 74 1B: je 0x416d13
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        cmp edx, 7
        ; Exact mapped bytes 74 0D: je 0x416d13
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        cmp eax, 6
        ; Exact mapped bytes 75 0D: jne 0x416d20
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 10h]
        mov byte ptr [ecx], 1
        xor eax, eax
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x416de2
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CF 4C 03 00: call 0x44b9fb
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x416d3d
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 10h]
        mov byte ptr [eax], 4
        xor eax, eax
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x416de2
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3A 4D 03 00: call 0x44ba83
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x416d5a
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 10h]
        mov byte ptr [edx], 5
        xor eax, eax
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x416de2
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A5 4D 03 00: call 0x44bb0b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x416d74
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 10h]
        mov byte ptr [ecx], 6
        xor eax, eax
        ; Exact mapped bytes EB 6E: jmp 0x416de2
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4F 51 03 00: call 0x44becf
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x416d8e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 10h]
        mov byte ptr [eax], 9
        xor eax, eax
        ; Exact mapped bytes EB 54: jmp 0x416de2
        __asm _emit 0xeb
        __asm _emit 0x54
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1E 52 03 00: call 0x44bfb8
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x416da8
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 10h]
        mov byte ptr [edx], 0ah
        xor eax, eax
        ; Exact mapped bytes EB 3A: jmp 0x416de2
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 61 52 03 00: call 0x44c015
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x416dc2
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 10h]
        mov byte ptr [ecx], 0bh
        xor eax, eax
        ; Exact mapped bytes EB 20: jmp 0x416de2
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0D 53 03 00: call 0x44c0db
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0A: jne 0x416ddd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 10h]
        mov byte ptr [eax], 0ch
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x416de2
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 F4 19 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
