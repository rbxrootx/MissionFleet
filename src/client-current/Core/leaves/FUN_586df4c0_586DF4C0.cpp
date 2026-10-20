// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DF4C0 .. +0xAB9 bytes.
extern "C" __declspec(naked) void FUN_586df4c0_586DF4C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 220h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ff0000h
        shr eax, 10h
        ; Exact mapped bytes 66 89 85 C0 FD FF FF: mov word ptr [ebp - 0x240], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ff000000h
        shr ecx, 10h
        ; Exact mapped bytes 66 89 8D D4 FD FF FF: mov word ptr [ebp - 0x22c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        mov dword ptr [ebp - 248h], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 224h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 30h
        mov dword ptr [ebp - 228h], ecx
        movzx edx, word ptr [ebp - 240h]
        mov dword ptr [ebp - 238h], edx
        mov eax, dword ptr [ebp - 238h]
        sub eax, 1
        mov dword ptr [ebp - 238h], eax
        cmp dword ptr [ebp - 238h], 7
        ; Exact mapped bytes 0F 87 12 0A 00 00: ja 0x586dff5d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes FF 24 8D 7C FF 6D 58: jmp dword ptr [ecx*4 + 0x586dff7c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0x6d
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        cmp edx, 1
        ; Exact mapped bytes 75 23: jne 0x586df589
        __asm _emit 0x75
        __asm _emit 0x23
        push 588b2260h
        ; Exact mapped bytes E8 80 2A E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x2a
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 21ch]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        ; Exact mapped bytes E9 4A 03 00 00: jmp 0x586df8d3
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 220h]
        add ecx, 78h
        push ecx
        mov edx, dword ptr [ebp - 224h]
        push edx
        ; Exact mapped bytes FF 15 1C 41 89 58: call dword ptr [0x5889411c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 F0 00 00 00: jne 0x586df698
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 22ch]
        cmp eax, 800h
        ; Exact mapped bytes 75 21: jne 0x586df5d7
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        push 588b227ch
        lea edx, [ebp - 21ch]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x586df66a
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 31: jne 0x586df60e
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 228h]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        add ecx, 18h
        push ecx
        push 588b2288h
        ; Exact mapped bytes E8 F8 29 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x29
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 21ch]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes EB 5C: jmp 0x586df66a
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 224h]
        add eax, 18h
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x586df64c
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 224h]
        add ecx, 18h
        push ecx
        push 588b22a0h
        ; Exact mapped bytes E8 BA 29 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x29
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 21ch]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes EB 1E: jmp 0x586df66a
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 588b22c8h
        ; Exact mapped bytes E8 9A 29 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x29
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 21ch]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 220h]
        mov eax, dword ptr [edx + ecx + 110h]
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 BE 0C 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3B 02 00 00: jmp 0x586df8d3
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 22ch]
        cmp edx, 800h
        ; Exact mapped bytes 75 39: jne 0x586df6e0
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 228h]
        push eax
        push 588b22ech
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 0a0bec8h
        lea edx, [ebp - 21ch]
        push edx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 76 0C 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F3 01 00 00: jmp 0x586df8d3
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 244h], 0
        mov dword ptr [ebp - 230h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586df705
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 230h]
        add eax, 1
        mov dword ptr [ebp - 230h], eax
        cmp dword ptr [ebp - 230h], 4
        ; Exact mapped bytes 0F 8D DD 00 00 00: jge 0x586df7ef
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        imul edx, dword ptr [ebp - 230h], 18h
        mov eax, dword ptr [ebp - 220h]
        lea ecx, [eax + edx + 504h]
        push ecx
        ; Exact mapped bytes E8 AD 14 17 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x14
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x586df7ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], edx
        push 18h
        push 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 B1 D6 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd6
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 18h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 220h]
        lea ecx, [eax + edx + 504h]
        push ecx
        push 18h
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 FD 49 0D 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        imul eax, dword ptr [ebp - 230h], 18h
        mov ecx, dword ptr [ebp - 220h]
        lea edx, [ecx + eax + 504h]
        push edx
        push 18h
        mov eax, 18h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 220h]
        lea eax, [edx + ecx + 504h]
        push eax
        ; Exact mapped bytes E8 C8 49 0D 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 1ch]
        push ecx
        push 18h
        imul edx, dword ptr [ebp - 230h], 18h
        mov eax, dword ptr [ebp - 220h]
        lea ecx, [eax + edx + 504h]
        push ecx
        ; Exact mapped bytes E8 A5 49 0D 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 244h], 1
        ; Exact mapped bytes EB 05: jmp 0x586df7ef
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 07 FF FF FF: jmp 0x586df6f6
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 244h], 0
        ; Exact mapped bytes 75 5F: jne 0x586df857
        __asm _emit 0x75
        __asm _emit 0x5f
        mov dword ptr [ebp - 234h], 3
        ; Exact mapped bytes EB 0F: jmp 0x586df813
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 234h]
        sub edx, 1
        mov dword ptr [ebp - 234h], edx
        cmp dword ptr [ebp - 234h], 0
        ; Exact mapped bytes 7C 3B: jl 0x586df857
        __asm _emit 0x7c
        __asm _emit 0x3b
        push 18h
        imul eax, dword ptr [ebp - 234h], 18h
        mov ecx, dword ptr [ebp - 220h]
        lea edx, [ecx + eax + 504h]
        push edx
        mov eax, dword ptr [ebp - 234h]
        add eax, 1
        imul ecx, eax, 18h
        mov edx, dword ptr [ebp - 220h]
        lea eax, [edx + ecx + 504h]
        push eax
        ; Exact mapped bytes E8 3E D0 16 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd0
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB AD: jmp 0x586df804
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        push 18h
        mov edx, 18h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 220h]
        lea edx, [ecx + eax + 504h]
        push edx
        ; Exact mapped bytes E8 05 49 0D 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 228h]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        push 588b22f8h
        ; Exact mapped bytes E8 5A 27 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x27
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 21ch]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 220h]
        mov edx, dword ptr [ecx + eax + 110h]
        push edx
        lea eax, [ebp - 21ch]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 7E 0A 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 85 06 00 00: jmp 0x586dff5d
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 22ch]
        cmp ecx, 800h
        ; Exact mapped bytes 75 36: jne 0x586df91d
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 228h]
        push edx
        push 588b2314h
        lea eax, [ebp - 21ch]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 0a0bec8h
        lea ecx, [ebp - 21ch]
        push ecx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 36 0A 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 55: jmp 0x586df972
        __asm _emit 0xeb
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        push 588b2320h
        ; Exact mapped bytes E8 BB 26 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x26
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov edx, 4
        imul eax, edx, 9
        mov ecx, dword ptr [ebp - 220h]
        mov edx, dword ptr [ecx + eax + 110h]
        push edx
        lea eax, [ebp - 21ch]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 DF 09 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E6 05 00 00: jmp 0x586dff5d
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 70 DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x70
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 27 D6 DA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd6
        __asm _emit 0xda
        __asm _emit 0xff
        cmp dword ptr [ebp - 248h], eax
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x586dfa26
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 22ch]
        cmp ecx, 800h
        ; Exact mapped bytes 75 36: jne 0x586df9da
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 228h]
        push edx
        push 588b2338h
        lea eax, [ebp - 21ch]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 0a0bec8h
        lea ecx, [ebp - 21ch]
        push ecx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 79 09 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4C: jmp 0x586dfa26
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        push 588b2344h
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 220h]
        mov edx, dword ptr [ecx + eax + 110h]
        push edx
        lea eax, [ebp - 21ch]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 2B 09 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 32 05 00 00: jmp 0x586dff5d
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        mov edx, dword ptr [ebp - 224h]
        push edx
        push 588b2358h
        lea eax, [ebp - 21ch]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0ffffh
        lea ecx, [ebp - 21ch]
        push ecx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 EB 08 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F2 04 00 00: jmp 0x586dff5d
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 248h], 800h
        ; Exact mapped bytes 75 5D: jne 0x586dfad4
        __asm _emit 0x75
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 224h]
        push edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 6F DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6f
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 70 A6 DC FF: call 0x584aa100
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa6
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x586dfacf
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 228h]
        push eax
        push 588b2364h
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 6464ffh
        lea edx, [ebp - 21ch]
        push edx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 82 08 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 89 04 00 00: jmp 0x586dff5d
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 22ch]
        cmp eax, 800h
        ; Exact mapped bytes 75 39: jne 0x586dfb1b
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        push 588b2370h
        lea edx, [ebp - 21ch]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 6464ffh
        lea eax, [ebp - 21ch]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 3B 08 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 42 04 00 00: jmp 0x586dff5d
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 22ch]
        cmp ecx, 2000h
        ; Exact mapped bytes 75 40: jne 0x586dfb6a
        __asm _emit 0x75
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        push 588b237ch
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0ff00h
        lea edx, [ebp - 21ch]
        push edx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 EC 07 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F3 03 00 00: jmp 0x586dff5d
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 22ch]
        cmp eax, 4000h
        ; Exact mapped bytes 75 4E: jne 0x586dfbc6
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 3B: jne 0x586dfbc1
        __asm _emit 0x75
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        push 588b2384h
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0ff00h
        lea edx, [ebp - 21ch]
        push edx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 90 07 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 97 03 00 00: jmp 0x586dff5d
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 22ch]
        cmp eax, 8000h
        ; Exact mapped bytes 75 4E: jne 0x586dfc22
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 10 06 96 58: cmp ecx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 3B: je 0x586dfc1d
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        push 588b238ch
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0ff00h
        lea edx, [ebp - 21ch]
        push edx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 34 07 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3B 03 00 00: jmp 0x586dff5d
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24ch], 0
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 2C 06 96 58: cmp eax, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 36: jne 0x586dfc6f
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C DB FF FF: call 0x586dd7a0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x586dfc6f
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 DB FF FF: call 0x586dd7a0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x586dfc6f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 24ch], 1
        mov edx, dword ptr [ebp - 224h]
        push edx
        push 588b2394h
        ; Exact mapped bytes E8 60 0F 17 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0f
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 97 02 00 00: je 0x586dff22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffff0000h
        shr eax, 10h
        mov dword ptr [ebp - 23ch], eax
        mov ecx, dword ptr [ebp - 23ch]
        sub ecx, 1
        mov dword ptr [ebp - 23ch], ecx
        cmp dword ptr [ebp - 23ch], 4
        ; Exact mapped bytes 0F 87 68 02 00 00: ja 0x586dff20
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 23ch]
        ; Exact mapped bytes FF 24 95 9C FF 6D 58: jmp dword ptr [edx*4 + 0x586dff9c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0x6d
        __asm _emit 0x58
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 220h]
        cmp dword ptr [edx + ecx + 638h], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x586dfd6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 228h]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        push 588b23a4h
        ; Exact mapped bytes E8 F7 22 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x22
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 21ch]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        cmp dword ptr [ebp - 24ch], 0
        ; Exact mapped bytes 74 2B: je 0x586dfd41
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, 4
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 220h]
        mov eax, dword ptr [edx + ecx + 110h]
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 12 06 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 29: jmp 0x586dfd6a
        __asm _emit 0xeb
        __asm _emit 0x29
        mov edx, 4
        shl edx, 3
        mov eax, dword ptr [ebp - 220h]
        mov ecx, dword ptr [eax + edx + 110h]
        push ecx
        lea edx, [ebp - 21ch]
        push edx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 E7 05 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B1 01 00 00: jmp 0x586dff20
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 220h]
        cmp dword ptr [ecx + eax + 638h], 0
        ; Exact mapped bytes 74 55: je 0x586dfddc
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        push 588b23bch
        ; Exact mapped bytes E8 51 22 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x22
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov edx, 4
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp - 220h]
        mov edx, dword ptr [ecx + eax + 110h]
        push edx
        lea eax, [ebp - 21ch]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 75 05 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x586dff20
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 220h]
        cmp dword ptr [edx + ecx + 638h], 0
        ; Exact mapped bytes 74 55: je 0x586dfe4d
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 228h]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        push 588b23d8h
        ; Exact mapped bytes E8 E0 21 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x21
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 21ch]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, 4
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 220h]
        mov eax, dword ptr [edx + ecx + 110h]
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 04 05 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x586dff20
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 220h]
        cmp dword ptr [ecx + eax + 638h], 0
        ; Exact mapped bytes 74 55: je 0x586dfebf
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 228h]
        push edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        push 588b23fch
        ; Exact mapped bytes E8 6E 21 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x21
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov edx, 4
        imul eax, edx, 0ch
        mov ecx, dword ptr [ebp - 220h]
        mov edx, dword ptr [ecx + eax + 110h]
        push edx
        lea eax, [ebp - 21ch]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 92 04 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 5F: jmp 0x586dff20
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        mov edx, dword ptr [ebp - 224h]
        push edx
        mov eax, dword ptr [ebp - 224h]
        add eax, 18h
        push eax
        push 588b241ch
        ; Exact mapped bytes E8 0D 21 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x21
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov edx, 4
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 220h]
        mov edx, dword ptr [ecx + eax + 110h]
        push edx
        lea eax, [ebp - 21ch]
        push eax
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 31 04 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3B: jmp 0x586dff5d
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        mov edx, dword ptr [ebp - 224h]
        push edx
        push 588b2440h
        lea eax, [ebp - 21ch]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 6464ffh
        lea ecx, [ebp - 21ch]
        push ecx
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 F4 03 00 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 08 EC FF FF: call 0x586deb70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 DD 10 15 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x10
        __asm _emit 0x15
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
