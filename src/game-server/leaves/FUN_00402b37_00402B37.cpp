// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402B37 .. +0x29D bytes.
extern "C" __declspec(naked) void FUN_00402b37_00402B37() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x402b6a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 5A 02 00 00: jmp 0x402dc4
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 6C: mov cx, word ptr [eax + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x6c
        cmp ecx, 4
        ; Exact mapped bytes 75 12: jne 0x402b8a
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 10h]
        mov al, byte ptr [edx + 32h]
        and al, 0fh
        and eax, 0ffh
        cmp eax, 3
        ; Exact mapped bytes 74 22: je 0x402bac
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 6C: mov dx, word ptr [ecx + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x6c
        cmp edx, 5
        ; Exact mapped bytes 75 32: jne 0x402bca
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [ebp + 10h]
        mov cl, byte ptr [eax + 32h]
        and cl, 0fh
        and ecx, 0ffh
        cmp ecx, 3
        ; Exact mapped bytes 75 1E: jne 0x402bca
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 46 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 FA 01 00 00: jmp 0x402dc4
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 6C: mov ax, word ptr [edx + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x6c
        cmp eax, 2
        ; Exact mapped bytes 75 1E: jne 0x402bf6
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 46 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 CE 01 00 00: jmp 0x402dc4
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 19h
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 A2 0B 00 00: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x402c63
        __asm _emit 0x74
        __asm _emit 0x3e
        mov dword ptr [ebp - 14h], 0ffh
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp - 14h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 73 0B 00 00: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x402c63
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x402c63
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 10h], 70h
        ; Exact mapped bytes 74 1E: je 0x402c81
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 45 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 43 01 00 00: jmp 0x402dc4
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 6C: mov cx, word ptr [eax + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x6c
        cmp ecx, 1
        ; Exact mapped bytes 75 2F: jne 0x402cbe
        __asm _emit 0x75
        __asm _emit 0x2f
        push 5
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E3 94 04 00: call 0x44c17c
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x402cbe
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 0a0000h
        push 0
        push 80020112h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 45 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x402dc4
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 6C: mov ax, word ptr [edx + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x6c
        cmp eax, 1
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x402d8e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0c7ch]
        mov eax, dword ptr [edx + 40cach]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 66 8B 84 50 02 4C 00 00: mov ax, word ptr [eax + edx*2 + 0x4c02]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        cmp ecx, 5
        ; Exact mapped bytes 7D 73: jge 0x402d72
        __asm _emit 0x7d
        __asm _emit 0x73
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 0d78h]
        ; Exact mapped bytes E8 AA D8 00 00: call 0x4105bf
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x402d59
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0c7ch]
        mov ecx, dword ptr [edx + 40cach]
        ; Exact mapped bytes 66 8B 94 41 02 4C 00 00: mov dx, word ptr [ecx + eax*2 + 0x4c02]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 0c7ch]
        mov eax, dword ptr [eax + 40cach]
        ; Exact mapped bytes 66 89 94 48 02 4C 00 00: mov word ptr [eax + ecx*2 + 0x4c02], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x402d70
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 44 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x402d8c
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 90000h
        push 0
        push 80020112h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 44 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x402dbf
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0d78h]
        ; Exact mapped bytes E8 1B D8 00 00: call 0x4105bf
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x402dbf
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020113h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 44 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 12 5A 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
