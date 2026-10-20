// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CB020 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_584cb020_584CB020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 03 00 00: call 0x584cb3f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 2
        ; Exact mapped bytes 75 2A: jne 0x584cb065
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 75 15: jne 0x584cb059
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5ch], 0
        ; Exact mapped bytes 75 0C: jne 0x584cb059
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 6
        ; Exact mapped bytes EB 0A: jmp 0x584cb063
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 5
        ; Exact mapped bytes EB 31: jmp 0x584cb096
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 1
        ; Exact mapped bytes 75 28: jne 0x584cb096
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 75 15: jne 0x584cb08c
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 75 0C: jne 0x584cb08c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 3
        ; Exact mapped bytes EB 0A: jmp 0x584cb096
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 4
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 75 19: jne 0x584cb0b8
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 2
        mov eax, 2
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x584cb17c
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x584cb179
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 3
        ; Exact mapped bytes 74 09: je 0x584cb0ca
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 5
        ; Exact mapped bytes 75 44: jne 0x584cb10e
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes E8 21 C1 00 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        add edx, 1bh
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 33 9A FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 54 D9 00 00: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ecx + 70h], eax
        xor eax, eax
        ; Exact mapped bytes EB 70: jmp 0x584cb17c
        __asm _emit 0xeb
        __asm _emit 0x70
        ; Exact mapped bytes EB 6B: jmp 0x584cb179
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 4
        ; Exact mapped bytes 74 09: je 0x584cb120
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 6
        ; Exact mapped bytes 75 59: jne 0x584cb179
        __asm _emit 0x75
        __asm _emit 0x59
        ; Exact mapped bytes E8 CB C0 00 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        add eax, 1bh
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DD 99 FB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FE D8 00 00: call 0x584d8a50
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 75 0C: jne 0x584cb168
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 1
        ; Exact mapped bytes EB 0A: jmp 0x584cb172
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], 0
        mov eax, 1
        ; Exact mapped bytes EB 03: jmp 0x584cb17c
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}
