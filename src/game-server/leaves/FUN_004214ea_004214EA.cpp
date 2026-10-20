// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004214EA .. +0xAFD bytes.
extern "C" __declspec(naked) void FUN_004214ea_004214EA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a192h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 84h
        push esi
        push edi
        lea edi, [ebp - 90h]
        mov ecx, 21h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 50: mov dx, word ptr [ecx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        cmp edx, 64h
        ; Exact mapped bytes 7C 1E: jl 0x42154e
        __asm _emit 0x7c
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 2
        push 80021034h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 EB 5C 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 7A 0A 00 00: jmp 0x421fc8
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 07 AC 02 00: call 0x44c15d
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 3
        ; Exact mapped bytes 7C 30: jl 0x421590
        __asm _emit 0x7c
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        cmp dword ptr [ecx + 1ch], 0bb8h
        ; Exact mapped bytes 73 1E: jae 0x421590
        __asm _emit 0x73
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 2
        push 80021034h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A9 5C 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 38 0A 00 00: jmp 0x421fc8
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 61h
        push 5a1454h
        push 37ch
        ; Exact mapped bytes E8 92 BA 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xba
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 1ch], edx
        push 37ch
        push 0
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 B3 7D 08 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        push 0
        ; Exact mapped bytes E8 E9 86 08 00: call 0x4a9cb0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 20 82 08 00: call 0x4a97f0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        and edx, 0fh
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fffffff0h
        or ecx, edx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 10h], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 74 17: je 0x421610
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        and edx, 0fffff00fh
        or edx, 10h
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 10h], edx
        ; Exact mapped bytes EB 39: jmp 0x421649
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes E8 EB 81 08 00: call 0x4a9800
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        mov eax, dword ptr [ebp - 8ch]
        cdq
        mov ecx, 64h
        idiv ecx
        add edx, 1
        and edx, 0ffh
        shl edx, 4
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fffff00fh
        or ecx, edx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 10h], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 10h]
        and ch, 0fh
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 10h], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 98h], 0ffffffffh
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 54h]
        and edx, 1
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 54h], edx
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 58h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 10h]
        shr eax, 4
        and eax, 0ffh
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + eax*4 + 18h]
        mov dword ptr [edx + 5ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 0c0h], 1
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fh
        imul ecx, ecx, 3f8ch
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 54h]
        shr eax, 1
        and eax, 7fffffffh
        imul eax, eax, 0c4h
        ; Exact mapped bytes 0F BF 8C 01 8A 15 5A 00: movsx ecx, word ptr [ecx + eax + 0x5a158a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x8a
        __asm _emit 0x15
        __asm _emit 0x5a
        __asm _emit 0x00
        add ecx, 5
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 4A 08: mov word ptr [edx + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 0fh
        imul ecx, ecx, 3f8ch
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 54h]
        shr eax, 1
        and eax, 7fffffffh
        imul eax, eax, 0c4h
        mov edx, dword ptr [ebp - 1ch]
        mov al, byte ptr [ecx + eax + 5a156ah]
        mov byte ptr [edx + 37h], al
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        and edx, 0fh
        imul edx, edx, 3f8ch
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 54h]
        shr ecx, 1
        and ecx, 7fffffffh
        imul ecx, ecx, 0c4h
        ; Exact mapped bytes 0F BF 94 0A 8A 15 5A 00: movsx edx, word ptr [edx + ecx + 0x5a158a]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x8a
        __asm _emit 0x15
        __asm _emit 0x5a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 48 37: movsx ecx, byte ptr [eax + 0x37]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 1ch]
        mov eax, dword ptr [eax + 10h]
        shr eax, 4
        and eax, 0ffh
        imul ecx, eax
        add edx, ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 51 2A: mov word ptr [ecx + 0x2a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 10h]
        and eax, 0fh
        imul eax, eax, 3f8ch
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 54h]
        shr edx, 1
        and edx, 7fffffffh
        imul edx, edx, 0c4h
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + edx + 5a151ch]
        mov dword ptr [ecx + 94h], edx
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 C7 40 50 F4 01: mov word ptr [eax + 0x50], 0x1f4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0xf4
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 3A 00 00: call 0x4251c6
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 90h], al
        mov edx, dword ptr [ebp - 90h]
        and edx, 0ffh
        and edx, 1
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 54h]
        and ecx, 0fffffffeh
        or ecx, edx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 54h], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 908h], 1
        ; Exact mapped bytes 75 17: jne 0x421804
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 1ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 2A: mov cx, word ptr [eax + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x2a
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 42 0C: mov word ptr [edx + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0c
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x421816
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0bh
        ; Exact mapped bytes 0F 8D FB 04 00 00: jge 0x421d1b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 908h], 1
        ; Exact mapped bytes 0F 84 AE 04 00 00: je 0x421cde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 10h]
        and eax, 0fh
        cmp eax, 2
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x4218e7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 75 4E: jne 0x421896
        __asm _emit 0x75
        __asm _emit 0x4e
        push 5
        push 0ah
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 77 FB FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 2ch], al
        push 0dh
        push 1bh
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 61 FB FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes EB 4C: jmp 0x4218e2
        __asm _emit 0xeb
        __asm _emit 0x4c
        push 5
        push 7
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 29 FB FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2ch], al
        push 0fh
        push 0fh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 13 FB FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes E9 F5 03 00 00: jmp 0x421cdc
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 10h]
        and eax, 0fh
        cmp eax, 1
        ; Exact mapped bytes 0F 85 53 01 00 00: jne 0x421a4c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 75 51: jne 0x421950
        __asm _emit 0x75
        __asm _emit 0x51
        push 4
        push 0bh
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C0 FA FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 2ch], al
        push 0ah
        push 14h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 AA FA FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x421a47
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 75 51: jne 0x4219a7
        __asm _emit 0x75
        __asm _emit 0x51
        push 4
        push 0bh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 69 FA FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2ch], al
        push 0dh
        push 1bh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 53 FA FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x421a47
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 75 4E: jne 0x4219fb
        __asm _emit 0x75
        __asm _emit 0x4e
        push 5
        push 0ah
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 12 FA FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2ch], al
        push 0fh
        push 19h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 FC F9 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes EB 4C: jmp 0x421a47
        __asm _emit 0xeb
        __asm _emit 0x4c
        push 5
        push 7
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C4 F9 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2ch], al
        push 0fh
        push 0fh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 AE F9 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes E9 90 02 00 00: jmp 0x421cdc
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 10h]
        and eax, 0fh
        cmp eax, 3
        ; Exact mapped bytes 0F 85 FC 00 00 00: jne 0x421b5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 75 51: jne 0x421ab5
        __asm _emit 0x75
        __asm _emit 0x51
        push 5
        push 0ah
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5B F9 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 2ch], al
        push 0ah
        push 14h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 45 F9 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x421b55
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0ah
        ; Exact mapped bytes 75 4E: jne 0x421b09
        __asm _emit 0x75
        __asm _emit 0x4e
        push 4
        push 0bh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 04 F9 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2ch], al
        push 0dh
        push 1bh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 EE F8 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes EB 4C: jmp 0x421b55
        __asm _emit 0xeb
        __asm _emit 0x4c
        push 5
        push 7
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 B6 F8 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2ch], al
        push 0fh
        push 0fh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A0 F8 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x421cdc
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 10h]
        and eax, 0fh
        cmp eax, 4
        ; Exact mapped bytes 0F 85 F9 00 00 00: jne 0x421c65
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 75 51: jne 0x421bc3
        __asm _emit 0x75
        __asm _emit 0x51
        push 4
        push 0bh
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4D F8 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 2ch], al
        push 0fh
        push 19h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 37 F8 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x421c63
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 75 4E: jne 0x421c17
        __asm _emit 0x75
        __asm _emit 0x4e
        push 5
        push 0ah
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F6 F7 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2ch], al
        push 0ah
        push 14h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E0 F7 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes EB 4C: jmp 0x421c63
        __asm _emit 0xeb
        __asm _emit 0x4c
        push 5
        push 7
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A8 F7 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2ch], al
        push 0fh
        push 0fh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 92 F7 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes EB 77: jmp 0x421cdc
        __asm _emit 0xeb
        __asm _emit 0x77
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 10h]
        and eax, 0fh
        test eax, eax
        ; Exact mapped bytes 75 6A: jne 0x421cdc
        __asm _emit 0x75
        __asm _emit 0x6a
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 18: jne 0x421c90
        __asm _emit 0x75
        __asm _emit 0x18
        push 5
        push 0ah
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 47 F7 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        add edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 2ch], al
        ; Exact mapped bytes EB 16: jmp 0x421ca6
        __asm _emit 0xeb
        __asm _emit 0x16
        push 5
        push 7
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2F F7 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2ch], al
        push 0ah
        push 0ah
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 19 F7 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 49 2C: movsx ecx, byte ptr [ecx + 0x2c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x2c
        imul edx, ecx
        add eax, edx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 51 14: mov word ptr [ecx + edx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x14
        ; Exact mapped bytes EB 38: jmp 0x421d16
        __asm _emit 0xeb
        __asm _emit 0x38
        push 5
        push 1eh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 E1 F6 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 2ch], al
        push 1f4h
        push 0fa0h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C5 F6 FF FF: call 0x4213cc
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F BE C0: movsx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 89 44 4A 14: mov word ptr [edx + ecx*2 + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x14
        ; Exact mapped bytes E9 F2 FA FF FF: jmp 0x42180d
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 19ch]
        ; Exact mapped bytes E8 F0 F5 FD FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 09 43 00 00: call 0x426040
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 52: je 0x421d92
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E2 82 02 00: call 0x44a02a
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 45: jne 0x421d92
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 21 90 02 00: call 0x44ad76
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 36 DF 01 00: call 0x43fc98
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 7D 2C: jge 0x421d92
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ecx + 168h]
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 1E DF 01 00: call 0x43fc98
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [esi + 20h], eax
        ; Exact mapped bytes 73 13: jae 0x421d92
        __asm _emit 0x73
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0A 90 02 00: call 0x44ad91
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x421d92
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 0F 85 ED 00 00 00: jne 0x421e89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 54h]
        and eax, 1
        or al, 0ach
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 54h], eax
        mov esi, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        imul edx, edx, 37ch
        lea edi, [eax + edx + 224h]
        mov ecx, 0dfh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 98h
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 B1 F0 FE FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 24h], edx
        push 90h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 B1 F1 FE FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        push 4
        lea ecx, [ebp - 20h]
        push ecx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 A3 F1 FE FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        push 4
        lea edx, [ebp - 24h]
        push edx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 95 F1 FE FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 55 86 FE FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 2C 86 FE FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 1
        push 10002h
        push 80021034h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D9 53 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x53
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        ; Exact mapped bytes E8 A1 B5 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb5
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 BF F0 FE FF: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 80h]
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x421fc8
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        imul edx, edx, 37ch
        lea edi, [eax + edx + 224h]
        mov ecx, 0dfh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 98h
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 D5 EF FE FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 50h], edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 75 A2 02 00: call 0x44c15d
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 3
        ; Exact mapped bytes 7C 30: jl 0x421f22
        __asm _emit 0x7c
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4ch]
        sub eax, 0ah
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 50h]
        sub ecx, 0bb8h
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        sub ecx, 0ah
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 79 07 06 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        push 90h
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 79 F0 FE FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        push 4
        lea edx, [ebp - 4ch]
        push edx
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 6B F0 FE FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        push 4
        lea eax, [ebp - 50h]
        push eax
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 5D F0 FE FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 1D 85 FE FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 F4 84 FE FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 1
        push 10002h
        push 80021034h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A1 52 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 63 B4 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb4
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 7E EF FE FF: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 90h
        cmp ebp, esp
        ; Exact mapped bytes E8 FF 67 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
