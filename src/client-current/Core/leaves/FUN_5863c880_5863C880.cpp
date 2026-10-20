// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5863C880 .. +0xA34 bytes.
extern "C" __declspec(naked) void FUN_5863c880_5863C880() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a0h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 59 07 00 00: jne 0x5863cfef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes 75 35: jne 0x5863c8d9
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 21ch]
        cmp eax, 1
        ; Exact mapped bytes 7E 21: jle 0x5863c8d4
        __asm _emit 0x7e
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 21ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 11ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 17 F4 FF: call 0x5857e060
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x17
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 11 07 00 00: jmp 0x5863cfea
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0a8h]
        ; Exact mapped bytes 75 35: jne 0x5863c91c
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 21ch]
        cmp edx, 9
        ; Exact mapped bytes 7D 21: jge 0x5863c917
        __asm _emit 0x7d
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 21ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 124h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 17 F4 FF: call 0x5857e060
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x17
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CE 06 00 00: jmp 0x5863cfea
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x5863c9f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 21dh], 3
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 220h], 0
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x5863c9f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 ED 11 ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x11
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 39 05 30 05 96 58: cmp dword ptr [0x58960530], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 7C: jne 0x5863c9d7
        __asm _emit 0x75
        __asm _emit 0x7c
        ; Exact mapped bytes A1 F8 04 96 58: mov eax, dword ptr [0x589604f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes 73 1E: jae 0x5863c98e
        __asm _emit 0x73
        __asm _emit 0x1e
        ; Exact mapped bytes E8 7B A8 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 460h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E5 C3 E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc3
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 47: jmp 0x5863c9d5
        __asm _emit 0xeb
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c4h], 0
        ; Exact mapped bytes 75 09: jne 0x5863c9a3
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 11 09 00 00: jmp 0x5863d2b2
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x5863c9d5
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 220h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EC 01 F1 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5863c9f3
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 14 A8 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 475h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7E C3 E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc3
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F2 05 00 00: jmp 0x5863cfea
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x5863cad6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 21dh], 4
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 220h], 0
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5863cad1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 11 11 ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x11
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 39 05 30 05 96 58: cmp dword ptr [0x58960530], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 7E: jne 0x5863cab5
        __asm _emit 0x75
        __asm _emit 0x7e
        ; Exact mapped bytes 8B 15 F8 04 96 58: mov edx, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes 73 1E: jae 0x5863ca6c
        __asm _emit 0x73
        __asm _emit 0x1e
        ; Exact mapped bytes E8 9D A7 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        push 0
        push 460h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 07 C3 E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc3
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 47: jmp 0x5863cab3
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c8h], 0
        ; Exact mapped bytes 75 09: jne 0x5863ca81
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 33 08 00 00: jmp 0x5863d2b2
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x5863cab3
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 220h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 220h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 220h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0E 01 F1 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5863cad1
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 36 A7 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        push 0
        push 475h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A0 C2 E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc2
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 14 05 00 00: jmp 0x5863cfea
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 90h]
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x5863cbf6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 21dh], 2
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 0C 06 96 58: cmp ecx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x5863cbd5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 220h], 0
        ; Exact mapped bytes 0F 84 BF 00 00 00: je 0x5863cbd3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 21 10 ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 3B 05 30 05 96 58: cmp eax, dword ptr [0x58960530]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 40: jne 0x5863cb67
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes 0F BF 0D 38 05 96 58: movsx ecx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, 6
        ; Exact mapped bytes 75 34: jne 0x5863cb67
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 220h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 220h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 220h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 5C 00 F1 FF: call 0x5854cbc0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6C: jmp 0x5863cbd3
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 CE 0F ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0f
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 3B 05 30 05 96 58: cmp eax, dword ptr [0x58960530]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 2A: jne 0x5863cba4
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 0F BF 15 38 05 96 58: movsx edx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, 6
        ; Exact mapped bytes 74 1E: je 0x5863cba4
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes E8 65 A6 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        push 0
        push 475h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CF C1 E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2F: jmp 0x5863cbd3
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 91 0F ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0f
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 3B 05 30 05 96 58: cmp eax, dword ptr [0x58960530]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 1C: je 0x5863cbd3
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes E8 34 A6 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        push 0
        push 471h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9E C1 E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5863cbf1
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 16 A6 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        push 0
        push 0
        push 483h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 80 C1 E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F4 03 00 00: jmp 0x5863cfea
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 98h]
        ; Exact mapped bytes 75 70: jne 0x5863cc74
        __asm _emit 0x75
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 74 62: je 0x5863cc6f
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3D: je 0x5863cc53
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 1F 0F ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0f
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 39 05 30 05 96 58: cmp dword ptr [0x58960530], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 2A: jne 0x5863cc53
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0cch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 EF FF FF: call 0x5863bc10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5863cc6f
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 98 A5 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 0
        push 0
        push 0
        push 471h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 02 C1 E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 76 03 00 00: jmp 0x5863cfea
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes 75 7C: jne 0x5863ccfe
        __asm _emit 0x75
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0cch], 0
        ; Exact mapped bytes 76 6B: jbe 0x5863ccf9
        __asm _emit 0x76
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 74 62: je 0x5863ccf9
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3D: je 0x5863ccdd
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 95 0E ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0e
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 39 05 30 05 96 58: cmp dword ptr [0x58960530], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 2A: jne 0x5863ccdd
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0cch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 EF FF FF: call 0x5863bc10
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5863ccf9
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 0E A5 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 0
        push 0
        push 0
        push 471h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 78 C0 E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc0
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EC 02 00 00: jmp 0x5863cfea
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0a0h]
        ; Exact mapped bytes 75 70: jne 0x5863cd7c
        __asm _emit 0x75
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 74 62: je 0x5863cd77
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3D: je 0x5863cd5b
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 17 0E ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 39 05 30 05 96 58: cmp dword ptr [0x58960530], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 2A: jne 0x5863cd5b
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d0h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 ED FF FF: call 0x5863baf0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5863cd77
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 90 A4 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 0
        push 0
        push 0
        push 471h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 FA BF E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xbf
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6E 02 00 00: jmp 0x5863cfea
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0a4h]
        ; Exact mapped bytes 75 7C: jne 0x5863ce06
        __asm _emit 0x75
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0d0h], 0
        ; Exact mapped bytes 76 6B: jbe 0x5863ce01
        __asm _emit 0x76
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 74 62: je 0x5863ce01
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3D: je 0x5863cde5
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 8D 0D ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 39 05 30 05 96 58: cmp dword ptr [0x58960530], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 2A: jne 0x5863cde5
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d0h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E ED FF FF: call 0x5863baf0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5863ce01
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 06 A4 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        push 0
        push 0
        push 0
        push 471h
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 70 BF E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E4 01 00 00: jmp 0x5863cfea
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x5863cefb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x5863ced4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 10 0D ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 39 05 30 05 96 58: cmp dword ptr [0x58960530], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x5863ced4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E 9B E4 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9b
        __asm _emit 0xe4
        __asm _emit 0xff
        add eax, 1cch
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E F2 E4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf2
        __asm _emit 0xe4
        __asm _emit 0xff
        add eax, 5ah
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes 8B 15 20 06 96 58: mov edx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 1D CB F4 FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 5ch], ecx
        push 588af028h
        ; Exact mapped bytes E8 57 51 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        push 2710h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 D8 C7 F4 FF: call 0x58589690
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc7
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 11ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 22: jmp 0x5863cef6
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 17 A3 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        push 0
        push 0
        push 0
        push 471h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 7B BE E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbe
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x5863cfea
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0b4h]
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x5863cfea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x5863cfce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 1B 0C ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0c
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 39 05 30 05 96 58: cmp dword ptr [0x58960530], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 9D 00 00 00: jne 0x5863cfce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 9A E4 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9a
        __asm _emit 0xe4
        __asm _emit 0xff
        add eax, 1cch
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 F1 E4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf1
        __asm _emit 0xe4
        __asm _emit 0xff
        add eax, 64h
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 9ch], edx
        ; Exact mapped bytes A1 20 06 96 58: mov eax, dword ptr [0x58960620]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 23 CA F4 FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xca
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 64h], edx
        push 588af044h
        ; Exact mapped bytes E8 5D 50 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x50
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        push 2710h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 DE C6 F4 FF: call 0x58589690
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc6
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 11ch]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5863cfea
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 1D A2 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa2
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 0
        push 0
        push 0
        push 471h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 87 BD E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xbd
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C1 02 00 00: jmp 0x5863d2b0
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 0F 85 2C 01 00 00: jne 0x5863d128
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 220h], 0
        ; Exact mapped bytes 0F 84 17 01 00 00: je 0x5863d123
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 21dh]
        cmp eax, 2
        ; Exact mapped bytes 75 12: jne 0x5863d033
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 0C 00 00: call 0x5863dc90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x5863d123
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 21dh]
        cmp eax, 3
        ; Exact mapped bytes 75 6A: jne 0x5863d0ac
        __asm _emit 0x75
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 F3 0A ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 39 05 30 05 96 58: cmp dword ptr [0x58960530], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 39: jne 0x5863d08e
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b8h]
        ; Exact mapped bytes E8 ED 45 E9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 BF 0B ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 12 F4 FF: call 0x5857e340
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x12
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5863d0aa
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 5D A1 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa1
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        push 0
        push 0
        push 0
        push 471h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 C7 BC E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xbc
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 77: jmp 0x5863d123
        __asm _emit 0xeb
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 21dh]
        cmp edx, 4
        ; Exact mapped bytes 75 68: jne 0x5863d123
        __asm _emit 0x75
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 7A 0A ED FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 39 05 30 05 96 58: cmp dword ptr [0x58960530], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 39: jne 0x5863d107
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0bch]
        ; Exact mapped bytes E8 74 45 E9 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 46 0B ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 11 F4 FF: call 0x5857e300
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x11
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x5863d123
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 E4 A0 E9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa0
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        push 0
        push 0
        push 0
        push 471h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 4E BC E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbc
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x5863d2b0
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f235h
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x5863d1f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        ; Exact mapped bytes E8 2D C5 F4 FF: call 0x58589670
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        push 588af060h
        ; Exact mapped bytes E8 9D 4E EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x4e
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 88h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x5863d195
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 0cch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E EA FF FF: call 0x5863bc10
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5E: jmp 0x5863d1f3
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 11ch]
        ; Exact mapped bytes E8 CD C4 F4 FF: call 0x58589670
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xc4
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 588af07ch
        ; Exact mapped bytes E8 3D 4E EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4e
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x5863d1f3
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 0d0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE E8 FF FF: call 0x5863baf0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x5863d2b0
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x5863d2b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 75 4A: jne 0x5863d25a
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D F8 04 96 58: mov ecx, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 0c4h]
        ; Exact mapped bytes 7D 31: jge 0x5863d258
        __asm _emit 0x7d
        __asm _emit 0x31
        push 588af098h
        ; Exact mapped bytes E8 BF 4D EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 7D E9 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x7d
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 56: jmp 0x5863d2b0
        __asm _emit 0xeb
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 8ch]
        ; Exact mapped bytes 75 48: jne 0x5863d2b0
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D F8 04 96 58: mov ecx, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 0c8h]
        ; Exact mapped bytes 7D 31: jge 0x5863d2b0
        __asm _emit 0x7d
        __asm _emit 0x31
        push 588af0bch
        ; Exact mapped bytes E8 67 4D EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 98h]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 7D E9 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7d
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
    }
}
