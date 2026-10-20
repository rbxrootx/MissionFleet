// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A8A70 .. +0x644 bytes.
extern "C" __declspec(naked) void FUN_588a8a70() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, 2
        mov esi, ecx
        mov ebp, 1
        cmp eax, edi
        ; Exact mapped bytes 0F 85 4F 05 00 00: jne 0x588a8fdb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 BB F5 FF: call 0x588045b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [esi + 194h]
        mov ebx, dword ptr [esp + 14h]
        cmp ebx, eax
        ; Exact mapped bytes 0F 85 8F 01 00 00: jne 0x588a8c38
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 48 A2 58: mov ecx, dword ptr [0x58a24810]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 26 04 00: call 0x588eb130
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 EC 05 00 00: je 0x588a90a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 9C 00 00 00 0C: cmp word ptr [esi + 0x9c], 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        ; Exact mapped bytes 75 4C: jne 0x588a8b12
        __asm _emit 0x75
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF F3 F5 FF: call 0x58807e80
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf3
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CF 05 00 00: je 0x588a90a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 FA 0A F1 FF: call 0x587b95e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 194h]
        push 0
        ; Exact mapped bytes E8 CD 8A E8 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 188h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 18ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x588a8c11
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 14: jle 0x588a8b33
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x588a8b33
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x588a8b35
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 4F EE 05 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 14: jle 0x588a8b62
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x588a8b62
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x588a8b64
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 7
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 14: jle 0x588a8b93
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x588a8b93
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes EB 02: jmp 0x588a8b95
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 EF ED 05 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 14: jle 0x588a8bc2
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x588a8bc2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes EB 02: jmp 0x588a8bc4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        movzx ecx, word ptr [esi + 94h]
        movzx edx, word ptr [esi + 96h]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 18 0A F1 FF: call 0x587b9600
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 194h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 188h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 18ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 1a0h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 1a4h]
        pop edi
        mov edx, ecx
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 198h]
        ; Exact mapped bytes 75 68: jne 0x588a8ca8
        __asm _emit 0x75
        __asm _emit 0x68
        ; Exact mapped bytes 66 83 BE 9C 00 00 00 0C: cmp word ptr [esi + 0x9c], 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        ; Exact mapped bytes 75 0E: jne 0x588a8c58
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        ; Exact mapped bytes E8 8A 09 F1 FF: call 0x587b95e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x09
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes EB 1B: jmp 0x588a8c73
        __asm _emit 0xeb
        __asm _emit 0x1b
        movzx eax, word ptr [esi + 94h]
        movzx ecx, word ptr [esi + 96h]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 09 F1 FF: call 0x587b9620
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 188h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 18ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov esi, dword ptr [esi + 198h]
        pop edi
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 19ch]
        ; Exact mapped bytes 75 51: jne 0x588a8d01
        __asm _emit 0x75
        __asm _emit 0x51
        movzx edx, word ptr [esi + 94h]
        movzx eax, word ptr [esi + 96h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40000h
        push edx
        push eax
        ; Exact mapped bytes E8 70 09 F1 FF: call 0x587b9640
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        pop edi
        pop esi
        mov dword ptr [ecx + 64ch], 0
        pop ebp
        ; Exact mapped bytes C6 05 5F 48 A2 58 00: mov byte ptr [0x58a2485f], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x5f
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 08 49 A2 58 00: mov byte ptr [0x58a24908], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 09 49 A2 58 00: mov byte ptr [0x58a24909], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 120h]
        ; Exact mapped bytes 0F 85 C1 00 00 00: jne 0x588a8dce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edx, edx
        test edi, edi
        sete dl
        push edx
        ; Exact mapped bytes E8 BC 08 F1 FF: call 0x587b95e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp edi, ebp
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x588a8db6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 4
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 14: jle 0x588a8d52
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x588a8d52
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes EB 02: jmp 0x588a8d54
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 30 EC 05 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 2D: jle 0x588a8d9a
        __asm _emit 0x7e
        __asm _emit 0x2d
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 24: je 0x588a8d9a
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        mov dword ptr [esi + 0a4h], ebp
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ecx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        mov dword ptr [esi + 0a4h], ebp
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 85 EA 02 00 00: jne 0x588a90a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0a4h], edi
        lea eax, [edi + 1]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 184h]
        ; Exact mapped bytes 75 2A: jne 0x588a8e00
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, esi
        cmp dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 75 11: jne 0x588a8def
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes E8 9D D7 FF FF: call 0x588a6580
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E8 3C D8 FF FF: call 0x588a6630
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 1a8h]
        ; Exact mapped bytes 75 76: jne 0x588a8e7e
        __asm _emit 0x75
        __asm _emit 0x76
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D F0 F5 FF: call 0x58807e80
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf0
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x588a8e5a
        __asm _emit 0x74
        __asm _emit 0x43
        cmp dword ptr [esi + 0a4h], 0
        ; Exact mapped bytes 74 17: je 0x588a8e37
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 0E F1 FF: call 0x587b9c70
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0e
        __asm _emit 0xf1
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1d8h
        ; Exact mapped bytes E8 A9 2C EC FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x2c
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E2 BE EB FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbe
        __asm _emit 0xeb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 2f8h], 0
        ; Exact mapped bytes 0F 84 3B 02 00 00: je 0x588a90a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4E D1 F5 FF: call 0x58805fc0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xd1
        __asm _emit 0xf5
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 1ach]
        ; Exact mapped bytes 75 76: jne 0x588a8efc
        __asm _emit 0x75
        __asm _emit 0x76
        ; Exact mapped bytes 8B 0D C4 B1 A0 58: mov ecx, dword ptr [0x58a0b1c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 7E 29: jle 0x588a8ebb
        __asm _emit 0x7e
        __asm _emit 0x29
        ; Exact mapped bytes 8B 15 C8 B1 A0 58: mov edx, dword ptr [0x58a0b1c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 7E 1D: jle 0x588a8ebb
        __asm _emit 0x7e
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 0D F1 FF: call 0x587b9c90
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0d
        __asm _emit 0xf1
        __asm _emit 0xff
        pop edi
        mov dword ptr [esi + 200h], ebp
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [esi + 200h], 0
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 2f8h], 0
        ; Exact mapped bytes 74 05: je 0x588a8ed9
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 E7 D0 F5 FF: call 0x58805fc0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd0
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 1d4h
        ; Exact mapped bytes E8 07 2C EC FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2c
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 40 BE EB FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xbe
        __asm _emit 0xeb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 40 24: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x24
        shr al, 1
        test al, 1
        ; Exact mapped bytes 75 13: jne 0x588a8f19
        __asm _emit 0x75
        __asm _emit 0x13
        movzx eax, word ptr [esi + 9ch]
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 06: je 0x588a8f19
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 75 54: jne 0x588a8f6d
        __asm _emit 0x75
        __asm _emit 0x54
        xor edi, edi
        cmp dword ptr [esi + 98h], edi
        ; Exact mapped bytes 7E 4A: jle 0x588a8f6d
        __asm _emit 0x7e
        __asm _emit 0x4a
        lea ebp, [esi + 0b4h]
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        cmp ebx, eax
        ; Exact mapped bytes 75 23: jne 0x588a8f5a
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [eax + 50h], 2
        ; Exact mapped bytes 74 14: je 0x588a8f51
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x588a8f61
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push edi
        push 64h
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 10: jmp 0x588a8f61
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [eax + 50h], 5
        ; Exact mapped bytes EB 07: jmp 0x588a8f61
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [eax + 50h], 1
        inc edi
        add ebp, 4
        cmp edi, dword ptr [esi + 98h]
        ; Exact mapped bytes 7C C3: jl 0x588a8f30
        __asm _emit 0x7c
        __asm _emit 0xc3
        movzx eax, word ptr [esi + 9ch]
        inc eax
        cmp eax, 0ah
        ; Exact mapped bytes 0F 87 2A 01 00 00: ja 0x588a90a8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [eax + 588a90bch]
        ; Exact mapped bytes FF 24 8D B4 90 8A 58: jmp dword ptr [ecx*4 + 0x588a90b4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x90
        __asm _emit 0x8a
        __asm _emit 0x58
        xor eax, eax
        lea ecx, [esi + 134h]
        cmp ebx, dword ptr [ecx]
        ; Exact mapped bytes 74 15: je 0x588a8fad
        __asm _emit 0x74
        __asm _emit 0x15
        inc eax
        add ecx, 4
        cmp eax, 8
        ; Exact mapped bytes 7C F3: jl 0x588a8f94
        __asm _emit 0x7c
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        imul eax, eax, 2dh
        mov ecx, eax
        mov eax, 66666667h
        imul ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        ; Exact mapped bytes E8 F1 05 F1 FF: call 0x587b95c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0xf1
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 5A: jne 0x588a903a
        __asm _emit 0x75
        __asm _emit 0x5a
        xor edi, edi
        cmp dword ptr [esi + 98h], edi
        ; Exact mapped bytes 0F 8E BA 00 00 00: jle 0x588a90a8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 14h]
        lea ebp, [esi + 0b4h]
        cmp ebx, dword ptr [ebp]
        ; Exact mapped bytes 75 25: jne 0x588a9022
        __asm _emit 0x75
        __asm _emit 0x25
        movzx eax, word ptr [esi + 9ch]
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 18: je 0x588a9022
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 12: je 0x588a9022
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 0C: je 0x588a9022
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 6E C7 F5 FF: call 0x58805790
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc7
        __asm _emit 0xf5
        __asm _emit 0xff
        inc edi
        add ebp, 4
        cmp edi, dword ptr [esi + 98h]
        ; Exact mapped bytes 7C CA: jl 0x588a8ff8
        __asm _emit 0x7c
        __asm _emit 0xca
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 1C: jne 0x588a905b
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 14h]
        push ecx
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 95 EB FF: call 0x58762610
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x95
        __asm _emit 0xeb
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0f233h
        ; Exact mapped bytes 75 46: jne 0x588a90a8
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 1f00h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 30: jne 0x588a90a8
        __asm _emit 0x75
        __asm _emit 0x30
        movzx edx, word ptr [esi + 94h]
        movzx eax, word ptr [esi + 96h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40000h
        push edx
        push eax
        ; Exact mapped bytes E8 A8 05 F1 FF: call 0x587b9640
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 64ch], 0
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
