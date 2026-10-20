// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C2DA0 .. +0x736 bytes.
extern "C" __declspec(naked) void FUN_586c2da0_586C2DA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 190h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 130h], ecx
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 8]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 FF 06 00 00: jne 0x586c34c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 96 1E 00 00: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 130h]
        mov eax, dword ptr [edx + 24ch]
        mov dword ptr [ebp - 138h], eax
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 E7 30 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x30
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c2e15
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 1
        mov dword ptr [ebp - 12ch], ecx
        cmp dword ptr [ebp - 12ch], 0bh
        ; Exact mapped bytes 7D 2C: jge 0x586c2e4a
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [ebp - 130h]
        mov ecx, dword ptr [eax + edx*4 + 1b0h]
        mov dword ptr [ebp - 13ch], ecx
        push 588b0dfeh
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 59 32 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x32
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BC: jmp 0x586c2e06
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov edx, 4
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp - 130h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 144h], edx
        push 588b1198h
        ; Exact mapped bytes E8 81 F1 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 16 32 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x32
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c2ea6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 1
        mov dword ptr [ebp - 12ch], ecx
        cmp dword ptr [ebp - 12ch], 3
        ; Exact mapped bytes 7D 29: jge 0x586c2ed8
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [ebp - 130h]
        mov ecx, dword ptr [eax + edx*4 + 1dch]
        mov dword ptr [ebp - 148h], ecx
        push 0
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 0B 30 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x30
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c2e97
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c2ef3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 12ch]
        add edx, 1
        mov dword ptr [ebp - 12ch], edx
        cmp dword ptr [ebp - 12ch], 9
        ; Exact mapped bytes 7D 29: jge 0x586c2f25
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [ebp - 130h]
        mov edx, dword ptr [ecx + eax*4 + 1f4h]
        mov dword ptr [ebp - 14ch], edx
        push 1
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 BE 2F DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x2f
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c2ee4
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c2f40
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 12ch]
        add eax, 1
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 0a4h
        ; Exact mapped bytes E8 2F 5E 00 00: call 0x586c8d80
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes 0F 83 6B 05 00 00: jae 0x586c34c8
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 0a4h
        mov dword ptr [ebp - 150h], ecx
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 4F 9D FF FF: call 0x586bccd0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [eax + 4]
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + 4]
        cmp edx, eax
        ; Exact mapped bytes 0F 85 2F 05 00 00: jne 0x586c34c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 130h]
        add eax, 0a4h
        mov dword ptr [ebp - 154h], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 19 9D FF FF: call 0x586bccd0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax + 6]
        mov eax, dword ptr [ebp + 8]
        movzx ecx, word ptr [eax + 6]
        cmp ecx, edx
        ; Exact mapped bytes 0F 85 F9 04 00 00: jne 0x586c34c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c2fe5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 134h]
        add edx, 1
        mov dword ptr [ebp - 134h], edx
        cmp dword ptr [ebp - 134h], 0bh
        ; Exact mapped bytes 7D 29: jge 0x586c3017
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 134h]
        mov ecx, dword ptr [ebp - 130h]
        mov edx, dword ptr [ecx + eax*4 + 1b0h]
        mov dword ptr [ebp - 158h], edx
        push 1
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 CC 2E DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2e
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c2fd6
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov eax, dword ptr [ebp - 130h]
        add eax, 0a4h
        mov dword ptr [ebp - 15ch], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 96 9C FF FF: call 0x586bccd0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax + 14h]
        mov dword ptr [ebp - 170h], edx
        mov eax, dword ptr [ebp - 130h]
        add eax, 0a4h
        mov dword ptr [ebp - 160h], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 69 9C FF FF: call 0x586bccd0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax + 12h]
        mov dword ptr [ebp - 174h], edx
        mov eax, dword ptr [ebp - 130h]
        add eax, 0a4h
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 3C 9C FF FF: call 0x586bccd0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax + 0ah]
        mov dword ptr [ebp - 178h], edx
        mov eax, dword ptr [ebp - 130h]
        add eax, 0a4h
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 0F 9C FF FF: call 0x586bccd0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax + 10h]
        mov dword ptr [ebp - 17ch], edx
        mov eax, dword ptr [ebp - 130h]
        add eax, 0a4h
        mov dword ptr [ebp - 16ch], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 E2 9B FF FF: call 0x586bccd0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax + 0ch]
        mov dword ptr [ebp - 180h], edx
        mov eax, dword ptr [ebp - 170h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        mov edx, dword ptr [ebp - 178h]
        push edx
        mov eax, dword ptr [ebp - 17ch]
        push eax
        mov ecx, dword ptr [ebp - 180h]
        push ecx
        push 588b11ach
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 1ch
        mov eax, dword ptr [ebp - 130h]
        mov ecx, dword ptr [eax + 21ch]
        mov dword ptr [ebp - 184h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 4C 2F DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x2f
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 130h]
        add eax, 0a4h
        mov dword ptr [ebp - 188h], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 59 9B FF FF: call 0x586bccd0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 0ah
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 114h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 110h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 10ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 108h], eax
        lea ecx, [ebp - 124h]
        push ecx
        ; Exact mapped bytes E8 37 62 E7 FF: call 0x585393e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x62
        __asm _emit 0xe7
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 125h], 1
        movzx edx, word ptr [ebp - 124h]
        movzx eax, word ptr [ebp - 114h]
        cmp edx, eax
        ; Exact mapped bytes 7D 0C: jge 0x586c31d1
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov byte ptr [ebp - 125h], 0
        ; Exact mapped bytes E9 29 02 00 00: jmp 0x586c33fa
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 124h]
        movzx edx, word ptr [ebp - 114h]
        cmp ecx, edx
        ; Exact mapped bytes 75 1E: jne 0x586c3201
        __asm _emit 0x75
        __asm _emit 0x1e
        movzx eax, word ptr [ebp - 122h]
        movzx ecx, word ptr [ebp - 112h]
        cmp eax, ecx
        ; Exact mapped bytes 7D 0C: jge 0x586c3201
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov byte ptr [ebp - 125h], 0
        ; Exact mapped bytes E9 F9 01 00 00: jmp 0x586c33fa
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 124h]
        movzx eax, word ptr [ebp - 114h]
        cmp edx, eax
        ; Exact mapped bytes 75 30: jne 0x586c3243
        __asm _emit 0x75
        __asm _emit 0x30
        movzx ecx, word ptr [ebp - 122h]
        movzx edx, word ptr [ebp - 112h]
        cmp ecx, edx
        ; Exact mapped bytes 75 1E: jne 0x586c3243
        __asm _emit 0x75
        __asm _emit 0x1e
        movzx eax, word ptr [ebp - 11eh]
        movzx ecx, word ptr [ebp - 10eh]
        cmp eax, ecx
        ; Exact mapped bytes 7D 0C: jge 0x586c3243
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov byte ptr [ebp - 125h], 0
        ; Exact mapped bytes E9 B7 01 00 00: jmp 0x586c33fa
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 124h]
        movzx eax, word ptr [ebp - 114h]
        cmp edx, eax
        ; Exact mapped bytes 75 42: jne 0x586c3297
        __asm _emit 0x75
        __asm _emit 0x42
        movzx ecx, word ptr [ebp - 122h]
        movzx edx, word ptr [ebp - 112h]
        cmp ecx, edx
        ; Exact mapped bytes 75 30: jne 0x586c3297
        __asm _emit 0x75
        __asm _emit 0x30
        movzx eax, word ptr [ebp - 11eh]
        movzx ecx, word ptr [ebp - 10eh]
        cmp eax, ecx
        ; Exact mapped bytes 75 1E: jne 0x586c3297
        __asm _emit 0x75
        __asm _emit 0x1e
        movzx edx, word ptr [ebp - 11ch]
        movzx eax, word ptr [ebp - 10ch]
        cmp edx, eax
        ; Exact mapped bytes 7D 0C: jge 0x586c3297
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov byte ptr [ebp - 125h], 0
        ; Exact mapped bytes E9 63 01 00 00: jmp 0x586c33fa
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 124h]
        movzx edx, word ptr [ebp - 114h]
        cmp ecx, edx
        ; Exact mapped bytes 75 54: jne 0x586c32fd
        __asm _emit 0x75
        __asm _emit 0x54
        movzx eax, word ptr [ebp - 122h]
        movzx ecx, word ptr [ebp - 112h]
        cmp eax, ecx
        ; Exact mapped bytes 75 42: jne 0x586c32fd
        __asm _emit 0x75
        __asm _emit 0x42
        movzx edx, word ptr [ebp - 11eh]
        movzx eax, word ptr [ebp - 10eh]
        cmp edx, eax
        ; Exact mapped bytes 75 30: jne 0x586c32fd
        __asm _emit 0x75
        __asm _emit 0x30
        movzx ecx, word ptr [ebp - 11ch]
        movzx edx, word ptr [ebp - 10ch]
        cmp ecx, edx
        ; Exact mapped bytes 75 1E: jne 0x586c32fd
        __asm _emit 0x75
        __asm _emit 0x1e
        movzx eax, word ptr [ebp - 11ah]
        movzx ecx, word ptr [ebp - 10ah]
        cmp eax, ecx
        ; Exact mapped bytes 7D 0C: jge 0x586c32fd
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov byte ptr [ebp - 125h], 0
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x586c33fa
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 124h]
        movzx eax, word ptr [ebp - 114h]
        cmp edx, eax
        ; Exact mapped bytes 75 66: jne 0x586c3375
        __asm _emit 0x75
        __asm _emit 0x66
        movzx ecx, word ptr [ebp - 122h]
        movzx edx, word ptr [ebp - 112h]
        cmp ecx, edx
        ; Exact mapped bytes 75 54: jne 0x586c3375
        __asm _emit 0x75
        __asm _emit 0x54
        movzx eax, word ptr [ebp - 11eh]
        movzx ecx, word ptr [ebp - 10eh]
        cmp eax, ecx
        ; Exact mapped bytes 75 42: jne 0x586c3375
        __asm _emit 0x75
        __asm _emit 0x42
        movzx edx, word ptr [ebp - 11ch]
        movzx eax, word ptr [ebp - 10ch]
        cmp edx, eax
        ; Exact mapped bytes 75 30: jne 0x586c3375
        __asm _emit 0x75
        __asm _emit 0x30
        movzx ecx, word ptr [ebp - 11ah]
        movzx edx, word ptr [ebp - 10ah]
        cmp ecx, edx
        ; Exact mapped bytes 75 1E: jne 0x586c3375
        __asm _emit 0x75
        __asm _emit 0x1e
        movzx eax, word ptr [ebp - 118h]
        movzx ecx, word ptr [ebp - 108h]
        cmp eax, ecx
        ; Exact mapped bytes 7D 0C: jge 0x586c3375
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov byte ptr [ebp - 125h], 0
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x586c33fa
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 124h]
        movzx eax, word ptr [ebp - 114h]
        cmp edx, eax
        ; Exact mapped bytes 75 73: jne 0x586c33fa
        __asm _emit 0x75
        __asm _emit 0x73
        movzx ecx, word ptr [ebp - 122h]
        movzx edx, word ptr [ebp - 112h]
        cmp ecx, edx
        ; Exact mapped bytes 75 61: jne 0x586c33fa
        __asm _emit 0x75
        __asm _emit 0x61
        movzx eax, word ptr [ebp - 11eh]
        movzx ecx, word ptr [ebp - 10eh]
        cmp eax, ecx
        ; Exact mapped bytes 75 4F: jne 0x586c33fa
        __asm _emit 0x75
        __asm _emit 0x4f
        movzx edx, word ptr [ebp - 11ch]
        movzx eax, word ptr [ebp - 10ch]
        cmp edx, eax
        ; Exact mapped bytes 75 3D: jne 0x586c33fa
        __asm _emit 0x75
        __asm _emit 0x3d
        movzx ecx, word ptr [ebp - 11ah]
        movzx edx, word ptr [ebp - 10ah]
        cmp ecx, edx
        ; Exact mapped bytes 75 2B: jne 0x586c33fa
        __asm _emit 0x75
        __asm _emit 0x2b
        movzx eax, word ptr [ebp - 118h]
        movzx ecx, word ptr [ebp - 108h]
        cmp eax, ecx
        ; Exact mapped bytes 75 19: jne 0x586c33fa
        __asm _emit 0x75
        __asm _emit 0x19
        movzx edx, word ptr [ebp - 116h]
        movzx eax, word ptr [ebp - 106h]
        cmp edx, eax
        ; Exact mapped bytes 7D 07: jge 0x586c33fa
        __asm _emit 0x7d
        __asm _emit 0x07
        mov byte ptr [ebp - 125h], 0
        movzx ecx, byte ptr [ebp - 125h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x586c34ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c3424
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 12ch]
        add edx, 1
        mov dword ptr [ebp - 12ch], edx
        cmp dword ptr [ebp - 12ch], 9
        ; Exact mapped bytes 7D 29: jge 0x586c3456
        __asm _emit 0x7d
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [ebp - 130h]
        mov edx, dword ptr [ecx + eax*4 + 1f4h]
        mov dword ptr [ebp - 18ch], edx
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 8D 2A DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x2a
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c3415
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c3471
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 12ch]
        add eax, 1
        mov dword ptr [ebp - 12ch], eax
        cmp dword ptr [ebp - 12ch], 0bh
        ; Exact mapped bytes 7D 29: jge 0x586c34a3
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ebp - 130h]
        mov eax, dword ptr [edx + ecx*4 + 1b0h]
        mov dword ptr [ebp - 190h], eax
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 40 2A DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2a
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c3462
        __asm _emit 0xeb
        __asm _emit 0xbf
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 BC 17 00 00: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 12: jmp 0x586c34ca
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes EB 07: jmp 0x586c34c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 09: jmp 0x586c34ca
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes EB 05: jmp 0x586c34c8
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 69 FA FF FF: jmp 0x586c2f31
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 7C DB 16 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xdb
        __asm _emit 0x16
        __asm _emit 0x00
        mov esp, ebp
    }
}
