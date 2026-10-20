// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00492E16 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_00492e16_00492E16() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 7C: mov cx, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x7c
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x492e38
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 07: jne 0x492e3f
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x492f42
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 348h
        push 5ca8a4h
        mov eax, dword ptr [ebp - 24h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 7C: mov cx, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x7c
        imul ecx, ecx, 6
        push ecx
        ; Exact mapped bytes E8 D8 A1 05 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 24h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 7C: mov cx, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x7c
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        ; Exact mapped bytes FF 15 2C 25 5E 00: call dword ptr [0x5e252c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 24h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 7C: mov ax, word ptr [edx + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x7c
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 74 14: je 0x492ea7
        __asm _emit 0x74
        __asm _emit 0x14
        push 34ah
        push 5ca8a4h
        ; Exact mapped bytes E8 5E 1B 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492ea7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x492e85
        __asm _emit 0x75
        __asm _emit 0xd8
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x492ec6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 5F: jge 0x492f2d
        __asm _emit 0x7d
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        cmp dword ptr [ecx + 4], 106h
        setne dl
        dec edx
        and edx, 10h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 6
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax + edx]
        and ecx, 0fffffffdh
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 26: jne 0x492f2b
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 6
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 10 02: mov cx, word ptr [eax + edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 18h]
        and edx, 0ffffh
        cmp ecx, edx
        ; Exact mapped bytes 75 09: jne 0x492f2b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 02: jmp 0x492f2d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 90: jmp 0x492ebd
        __asm _emit 0xeb
        __asm _emit 0x90
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 CD A4 05 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
