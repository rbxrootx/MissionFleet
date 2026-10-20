// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DD01D .. +0x486 bytes.
extern "C" __declspec(naked) void FUN_004dd01d_004DD01D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58db87h
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
        sub esp, 150h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 144h], ecx
        mov eax, dword ptr [ebp - 144h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4dd064
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e6h
        push 676a8ch
        ; Exact mapped bytes E8 E1 BC 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd064
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4dd044
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 1ch
        ; Exact mapped bytes E8 0B 7D 04 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x4dd0a6
        __asm _emit 0x74
        __asm _emit 0x21
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1B: je 0x4dd0a6
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 1ch
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F6 A7 05 00: call 0x53789c
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 144h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 D8 7C 04 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x4dd0f5
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 1ch
        ; Exact mapped bytes E8 C6 7C 04 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x4dd0e4
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 1ch
        ; Exact mapped bytes E8 D2 7C 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes E9 9B 03 00 00: jmp 0x4dd490
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4dd103
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8D 03 00 00: jmp 0x4dd490
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4dd11e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 1
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [ebp - 124h]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 7D 1C: jge 0x4dd14b
        __asm _emit 0x7d
        __asm _emit 0x1c
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 124h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 B8 A3 05 00: call 0x537501
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB C4: jmp 0x4dd10f
        __asm _emit 0xeb
        __asm _emit 0xc4
        lea ecx, [ebp - 114h]
        push ecx
        push 104h
        ; Exact mapped bytes FF 15 E8 B7 68 00: call dword ptr [0x68b7e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp - 114h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 7D 14: jge 0x4dd18d
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0feh
        push 676a8ch
        ; Exact mapped bytes E8 B8 BB 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd18d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4dd170
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 11ch]
        mov byte ptr [ebp + ecx - 114h], 5ch
        mov edx, dword ptr [ebp - 11ch]
        add edx, 1
        mov dword ptr [ebp - 11ch], edx
        mov eax, dword ptr [ebp - 11ch]
        mov byte ptr [ebp + eax - 114h], 0
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 3E 7B 04 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 120h]
        ; Exact mapped bytes E8 2C 7B 04 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov dword ptr [ebp - 124h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4dd1fa
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 1
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [ebp - 124h]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 0F 8D 36 02 00 00: jge 0x4dd445
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        lea edx, [ebp - 114h]
        push edx
        mov eax, dword ptr [ebp - 124h]
        push eax
        lea ecx, [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 FB FB FF FF: call 0x4dce33
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4dd241
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 04 02 00 00: jmp 0x4dd445
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 5E 7B 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], eax
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 03 7B 04 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        shl eax, 1
        push eax
        lea ecx, [ebp - 120h]
        ; Exact mapped bytes E8 2D FE FE FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        mov edx, dword ptr [ebp - 134h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x4dd322
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 26h
        ; Exact mapped bytes 75 18: jne 0x4dd2a8
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 138h]
        mov byte ptr [eax], 26h
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 1
        mov dword ptr [ebp - 138h], ecx
        mov edx, dword ptr [ebp - 134h]
        xor eax, eax
        mov al, byte ptr [edx]
        xor ecx, ecx
        mov cl, byte ptr [eax + 688ca1h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 2E: je 0x4dd2ef
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 138h]
        mov eax, dword ptr [ebp - 134h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 138h]
        add edx, 1
        mov dword ptr [ebp - 138h], edx
        mov eax, dword ptr [ebp - 134h]
        add eax, 1
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 138h]
        mov edx, dword ptr [ebp - 134h]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp - 138h]
        add ecx, 1
        mov dword ptr [ebp - 138h], ecx
        mov edx, dword ptr [ebp - 134h]
        add edx, 1
        mov dword ptr [ebp - 134h], edx
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x4dd271
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 138h]
        mov byte ptr [eax], 0
        push -1
        lea ecx, [ebp - 120h]
        ; Exact mapped bytes E8 9B FE FE FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [ebp - 124h]
        lea eax, [eax + edx + 1]
        xor edx, edx
        mov ecx, 0ah
        div ecx
        push edx
        push 676aa4h
        lea edx, [ebp - 130h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 120h]
        push eax
        lea ecx, [ebp - 130h]
        push ecx
        lea ecx, [ebp - 13ch]
        ; Exact mapped bytes E8 F5 F5 FE FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        mov edx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 14ch], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 14ch]
        push eax
        lea ecx, [ebp - 140h]
        push ecx
        ; Exact mapped bytes E8 0D F9 FE FF: call 0x4cccb9
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        mov edx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 154h], edx
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 DD 79 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 158h], ecx
        mov edx, dword ptr [ebp - 158h]
        push edx
        push 400h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 15ch], ecx
        mov edx, dword ptr [ebp - 15ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        add ecx, 1
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 06 A6 05 00: call 0x537a28
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 BB F4 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 13ch]
        ; Exact mapped bytes E8 AC F4 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 A6 FD FF FF: jmp 0x4dd1eb
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 F7 A2 05 00: call 0x537756
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 20h], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 18h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 120h]
        ; Exact mapped bytes E8 6E F4 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 5C F4 FE FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
