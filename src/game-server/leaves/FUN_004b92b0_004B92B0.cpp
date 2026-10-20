// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B92B0 .. +0x424 bytes.
extern "C" __declspec(naked) void FUN_004b92b0_004B92B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], 1
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x4b92e5
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 22h
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x4b93bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 22h
        ; Exact mapped bytes 74 7A: je 0x4b9382
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x4b9382
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x4b9357
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1C: je 0x4b9357
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x4b937d
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp + 10h]
        add eax, 1
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x4b92f4
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0F: je 0x4b93a4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 10h]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp + 10h]
        add edx, 1
        mov dword ptr [ebp + 10h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 22h
        ; Exact mapped bytes 75 09: jne 0x4b93b8
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x4b948c
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x4b93e3
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp + 10h]
        add eax, 1
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 0ch], dl
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffh
        xor edx, edx
        mov dl, byte ptr [ecx + 5e03a1h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 2F: je 0x4b943b
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x4b9432
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp + 10h]
        add eax, 1
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        and edx, 0ffh
        cmp edx, 20h
        ; Exact mapped bytes 74 1E: je 0x4b9467
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4b9467
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffh
        cmp ecx, 9
        ; Exact mapped bytes 0F 85 56 FF FF FF: jne 0x4b93bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x4b947f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0D: jmp 0x4b948c
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 07: je 0x4b948c
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, dword ptr [ebp + 10h]
        mov byte ptr [ecx - 1], 0
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x4b94be
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 20h
        ; Exact mapped bytes 74 0B: je 0x4b94b3
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 9
        ; Exact mapped bytes 75 0B: jne 0x4b94be
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB DF: jmp 0x4b949d
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x4b94cd
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 DE 01 00 00: jmp 0x4b96ab
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x4b94e4
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        mov dword ptr [ebp - 8], 1
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 5ch
        ; Exact mapped bytes 75 14: jne 0x4b951e
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB E1: jmp 0x4b94ff
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 22h
        ; Exact mapped bytes 75 51: jne 0x4b957a
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 39: jne 0x4b9572
        __asm _emit 0x75
        __asm _emit 0x39
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x4b955f
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 22h
        ; Exact mapped bytes 75 0B: jne 0x4b9556
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x4b955d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x4b9566
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        xor edx, edx
        cmp dword ptr [ebp - 14h], 0
        sete dl
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        shr eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        mov dword ptr [ebp - 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 24: je 0x4b95ae
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0F: je 0x4b959f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 10h]
        mov byte ptr [eax], 5ch
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB CC: jmp 0x4b957a
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4b95d4
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 1B: jne 0x4b95d9
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 20h
        ; Exact mapped bytes 74 0B: je 0x4b95d4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 9
        ; Exact mapped bytes 75 05: jne 0x4b95d9
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x4b9684
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x4b9676
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 54: je 0x4b963d
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        xor ecx, ecx
        mov cl, byte ptr [eax + 5e03a1h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 29: je 0x4b9628
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp + 10h]
        add edx, 1
        mov dword ptr [ebp + 10h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        mov dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes EB 2C: jmp 0x4b9669
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        xor ecx, ecx
        mov cl, byte ptr [eax + 5e03a1h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x4b9669
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 6D FE FF FF: jmp 0x4b94f1
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0F: je 0x4b9699
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 10h]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp + 10h]
        add edx, 1
        mov dword ptr [ebp + 10h], edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes E9 E8 FD FF FF: jmp 0x4b9493
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 12: je 0x4b96c3
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
