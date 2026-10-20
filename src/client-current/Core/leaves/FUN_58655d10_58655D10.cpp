// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58655D10 .. +0x1F3 bytes.
extern "C" __declspec(naked) void FUN_58655d10_58655D10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58655d32
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 45 B4 1F 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb4
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 83 B6 01 00 00: jae 0x58655efd
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 26h
        ; Exact mapped bytes 0F 85 9F 01 00 00: jne 0x58655ef8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 51 01: movsx edx, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        cmp edx, 6ch
        ; Exact mapped bytes 75 33: jne 0x58655d9b
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 48 02: movsx ecx, byte ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x02
        cmp ecx, 74h
        ; Exact mapped bytes 75 24: jne 0x58655d9b
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 42 03: movsx eax, byte ptr [edx + 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x03
        cmp eax, 3bh
        ; Exact mapped bytes 75 15: jne 0x58655d9b
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx], 3ch
        mov dword ptr [ebp - 8], 3
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x58655ea4
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 61h
        ; Exact mapped bytes 75 51: jne 0x58655dfb
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 51 02: movsx edx, byte ptr [ecx + 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x02
        cmp edx, 70h
        ; Exact mapped bytes 75 42: jne 0x58655dfb
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 48 03: movsx ecx, byte ptr [eax + 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x03
        cmp ecx, 6fh
        ; Exact mapped bytes 75 33: jne 0x58655dfb
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 42 04: movsx eax, byte ptr [edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x04
        cmp eax, 73h
        ; Exact mapped bytes 75 24: jne 0x58655dfb
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 51 05: movsx edx, byte ptr [ecx + 5]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x05
        cmp edx, 3bh
        ; Exact mapped bytes 75 15: jne 0x58655dfb
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 2ch
        mov dword ptr [ebp - 8], 5
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x58655ea4
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 51 01: movsx edx, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x01
        cmp edx, 71h
        ; Exact mapped bytes 75 4E: jne 0x58655e58
        __asm _emit 0x75
        __asm _emit 0x4e
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 48 02: movsx ecx, byte ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x02
        cmp ecx, 75h
        ; Exact mapped bytes 75 3F: jne 0x58655e58
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 42 03: movsx eax, byte ptr [edx + 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x03
        cmp eax, 6fh
        ; Exact mapped bytes 75 30: jne 0x58655e58
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 51 04: movsx edx, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x04
        cmp edx, 74h
        ; Exact mapped bytes 75 21: jne 0x58655e58
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 48 05: movsx ecx, byte ptr [eax + 5]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x05
        cmp ecx, 3bh
        ; Exact mapped bytes 75 12: jne 0x58655e58
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 27h
        mov dword ptr [ebp - 8], 5
        ; Exact mapped bytes EB 4C: jmp 0x58655ea4
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 48 01: movsx ecx, byte ptr [eax + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        cmp ecx, 23h
        ; Exact mapped bytes 75 3D: jne 0x58655ea4
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 42 02: movsx eax, byte ptr [edx + 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x02
        cmp eax, 33h
        ; Exact mapped bytes 75 2E: jne 0x58655ea4
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 51 03: movsx edx, byte ptr [ecx + 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x03
        cmp edx, 34h
        ; Exact mapped bytes 75 1F: jne 0x58655ea4
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 48 04: movsx ecx, byte ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x04
        cmp ecx, 3bh
        ; Exact mapped bytes 75 10: jne 0x58655ea4
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 22h
        mov dword ptr [ebp - 8], 4
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 4E: je 0x58655ef8
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 09: jmp 0x58655ebe
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 B9 B2 1F 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb2
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        sub eax, dword ptr [ebp - 8]
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 73 16: jae 0x58655ee8
        __asm _emit 0x73
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + eax]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB CD: jmp 0x58655eb5
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 0ch]
        mov byte ptr [ecx], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes E9 2C FE FF FF: jmp 0x58655d29
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
