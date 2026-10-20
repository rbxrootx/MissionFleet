// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58647260 .. +0x105B bytes.
extern "C" __declspec(naked) void FUN_58647260_58647260() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 240h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 100h], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 16 0B 00 00: jne 0x58647d9a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b8h]
        ; Exact mapped bytes 0F 85 B4 01 00 00: jne 0x5864744d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 DC 59 F2 FF: call 0x5856cc80
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x59
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 1f0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 1D EB E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xeb
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 21ch], edx
        push 0
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 FE EA E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 200h]
        mov dword ptr [ebp - 220h], ecx
        push 1
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 DF EA E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 204h]
        mov dword ptr [ebp - 224h], eax
        push 0
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 C0 EA E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 228h], edx
        push 0
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 A1 EA E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 6
        ; Exact mapped bytes 75 7F: jne 0x586473cb
        __asm _emit 0x75
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [ebp - 22ch], edx
        push 1
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 75 EA E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 27ch]
        mov dword ptr [ebp - 124h], ecx
        push 1
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 56 EA E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 280h]
        mov dword ptr [ebp - 128h], eax
        push 1
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 37 EA E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 284h]
        mov dword ptr [ebp - 12ch], edx
        push 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 18 EA E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xea
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 7D: jmp 0x58647448
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 130h], ecx
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 F6 E9 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 27ch]
        mov dword ptr [ebp - 134h], eax
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 D7 E9 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 280h]
        mov dword ptr [ebp - 138h], edx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 B8 E9 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 284h]
        mov dword ptr [ebp - 13ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 99 E9 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 89 08 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 200h]
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x5864756b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 63 59 F2 FF: call 0x5856cdd0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x59
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 140h], edx
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 54 E9 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 144h], ecx
        push 1
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 35 E9 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 200h]
        mov dword ptr [ebp - 148h], eax
        push 0
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 16 E9 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 204h]
        mov dword ptr [ebp - 14ch], edx
        push 0
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 F7 E8 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 150h], ecx
        push 1
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 D8 E8 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 27ch]
        mov dword ptr [ebp - 154h], eax
        push 0
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 B9 E8 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 280h]
        mov dword ptr [ebp - 158h], edx
        push 0
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 9A E8 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 284h]
        mov dword ptr [ebp - 15ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 7B E8 E3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6B 07 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0e4h]
        ; Exact mapped bytes 75 43: jne 0x586475bf
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 160h], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 164h], eax
        push 0
        push 0f232h
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes FF 95 9C FE FF FF: call dword ptr [ebp - 0x164]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 17 07 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 240h]
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5864765b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 16ch], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 240h]
        ; Exact mapped bytes E8 C9 95 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], eax
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 81 9F 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9f
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 174h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ecx + 240h]
        ; Exact mapped bytes E8 8E 95 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 170h], eax
        mov edx, dword ptr [ebp - 170h]
        push edx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 46 9F 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x9f
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 2B 23 00 00: call 0x58649980
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7B 06 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 244h]
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x586476f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 17ch], eax
        mov ecx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ecx + 244h]
        ; Exact mapped bytes E8 2D 95 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 178h], eax
        mov edx, dword ptr [ebp - 178h]
        push edx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 E5 9E 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9e
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 184h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [edx + 244h]
        ; Exact mapped bytes E8 F2 94 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x94
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 180h], eax
        mov eax, dword ptr [ebp - 180h]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 AA 9E 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x9e
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 8F 22 00 00: call 0x58649980
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DF 05 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 248h]
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x58647793
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 240h]
        mov dword ptr [ebp - 18ch], ecx
        mov edx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [edx + 248h]
        ; Exact mapped bytes E8 91 94 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 188h], eax
        mov eax, dword ptr [ebp - 188h]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 49 9E 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9e
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 194h], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 248h]
        ; Exact mapped bytes E8 56 94 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x94
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 190h], eax
        mov ecx, dword ptr [ebp - 190h]
        push ecx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 0E 9E 17 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9e
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 F3 21 00 00: call 0x58649980
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 43 05 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 27ch]
        ; Exact mapped bytes 75 50: jne 0x586477f4
        __asm _emit 0x75
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 100h]
        mov byte ptr [ecx + 308h], 1
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 198h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 19ch], ecx
        push 0
        push 0f231h
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes FF 95 64 FE FF FF: call dword ptr [ebp - 0x19c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E2 04 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 280h]
        ; Exact mapped bytes 0F 85 52 01 00 00: jne 0x5864795b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [edx + 264h]
        ; Exact mapped bytes E8 C6 29 E6 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x29
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 8E 2D 01 00 00: jle 0x58647956
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 264h]
        ; Exact mapped bytes E8 A6 29 E6 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x29
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 9A 14 00 00: call 0x58648ce0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x5864786f
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ecx + 264h]
        ; Exact mapped bytes E8 85 29 E6 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 19 13 00 00: call 0x58648b80
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x58647956
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [edx + 240h]
        ; Exact mapped bytes E8 40 93 17 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x93
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 240h]
        mov dword ptr [ebp - 1a0h], ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 C6 90 17 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x90
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 244h]
        mov dword ptr [ebp - 1a4h], ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 A2 90 17 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x90
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 1a8h], ecx
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 7E 90 17 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x90
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + eax + 20ch]
        mov dword ptr [ebp - 1b0h], edx
        mov ecx, dword ptr [ebp - 100h]
        add ecx, 24ch
        ; Exact mapped bytes E8 23 09 E4 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0xe4
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 100h]
        add ecx, 190h
        ; Exact mapped bytes E8 10 36 00 00: call 0x5864af40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, eax
        mov dword ptr [ebp - 1ach], esi
        mov eax, dword ptr [ebp - 1ach]
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 46 38 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x38
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 BB 14 00 00: call 0x58648e10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7B 03 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 284h]
        ; Exact mapped bytes 75 62: jne 0x586479ce
        __asm _emit 0x75
        __asm _emit 0x62
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 34 FE FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, word ptr [eax]
        test eax, eax
        ; Exact mapped bytes 75 4B: jne 0x586479c9
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 100h]
        mov byte ptr [ecx + 308h], 2
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 1b4h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 1b8h], ecx
        push 1
        push 0f231h
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes FF 95 48 FE FF FF: call dword ptr [ebp - 0x1b8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 08 03 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 13ch]
        ; Exact mapped bytes 75 5D: jne 0x58647a3c
        __asm _emit 0x75
        __asm _emit 0x5d
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 34 FE FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, word ptr [eax]
        test edx, edx
        ; Exact mapped bytes 75 24: jne 0x58647a15
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes E8 FA F7 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        push 0
        push 0
        push 0
        push 12fh
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 AE 9D E9 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9d
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x58647a37
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 D6 F7 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        push 0
        push 0
        push 0
        push 48ah
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 3A 13 E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x13
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9A 02 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes 75 25: jne 0x58647a72
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 1c4h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 1c4h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 64 02 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 1d0h]
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x58647b90
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 86 F7 00 00 00: jbe 0x58647b8b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov byte ptr [eax + 1e0h], 1
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 1d8h], 0
        mov dword ptr [ebp - 118h], 0
        mov dword ptr [ebp - 114h], 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 F0 EE E3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xee
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, 197h
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 CA 45 E4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0xff
        add eax, 7dh
        mov dword ptr [ebp - 114h], eax
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 1cch]
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 8D 1E F4 FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x1e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 1cch]
        mov dword ptr [ebp - 1d0h], eax
        push 588af2d4h
        ; Exact mapped bytes E8 C1 A4 ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa4
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes 8B 0D F8 04 96 58: mov ecx, dword ptr [0x589604f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 1cch], ecx
        lea edx, [ebp - 118h]
        push edx
        mov eax, dword ptr [ebp - 1c8h]
        push eax
        mov ecx, dword ptr [ebp - 1cch]
        push ecx
        mov edx, dword ptr [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 25 1B F4 FF: call 0x58589690
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1b
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 1cch]
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 1cch]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 46 01 00 00: jmp 0x58647cd6
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 1d4h]
        ; Exact mapped bytes 0F 85 31 01 00 00: jne 0x58647cd6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 15 38 05 96 58: movsx edx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, 6
        ; Exact mapped bytes 0F 85 FF 00 00 00: jne 0x58647cb4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov byte ptr [eax + 1e0h], 2
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + 1dch], 0
        mov dword ptr [ebp - 120h], 0
        mov dword ptr [ebp - 11ch], 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 CF ED E3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xed
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, 197h
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 A9 44 E4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x44
        __asm _emit 0xe4
        __asm _emit 0xff
        add eax, 7dh
        mov dword ptr [ebp - 11ch], eax
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 1cch]
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 6C 1D F4 FF: call 0x585899a0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 1cch]
        mov dword ptr [ebp - 1e0h], eax
        push 588af2f8h
        ; Exact mapped bytes E8 A0 A3 ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa3
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1d8h], eax
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 1e4h]
        mov dword ptr [ebp - 1dch], edx
        lea eax, [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        mov edx, dword ptr [ebp - 1dch]
        push edx
        mov eax, dword ptr [ebp - 100h]
        push eax
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 FE 19 F4 FF: call 0x58589690
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x19
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 1cch]
        mov eax, dword ptr [ebp - 100h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 1cch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 22: jmp 0x58647cd6
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 37 F5 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf5
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        push 0
        push 0
        push 0
        push 475h
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 9B 10 E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x10
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 0D 38 05 96 58: movsx ecx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x58647d95
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58647d01
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 104h]
        add edx, 1
        mov dword ptr [ebp - 104h], edx
        cmp dword ptr [ebp - 104h], 5
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58647d95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 1b0h]
        ; Exact mapped bytes 75 6A: jne 0x58647d90
        __asm _emit 0x75
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [eax + 30ch], ecx
        mov edx, dword ptr [ebp - 100h]
        mov byte ptr [edx + 308h], 2
        mov eax, dword ptr [ebp - 100h]
        mov byte ptr [eax + 309h], 8
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 1e8h], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 1ech], eax
        push 1
        push 0f231h
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes FF 95 14 FE FF FF: call dword ptr [ebp - 0x1ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x58647cf2
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0E 05 00 00: jmp 0x586482a8
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f230h
        ; Exact mapped bytes 0F 85 C7 03 00 00: jne 0x5864816e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E F2 E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf2
        __asm _emit 0xe8
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 85 36 03 00 00: jne 0x586480f1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        movzx eax, byte ptr [edx + 308h]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 13 02 00 00: jne 0x58647fe4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [edx + 264h]
        ; Exact mapped bytes E8 EA 23 E6 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x23
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        push 18h
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 7E C3 16 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc3
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 100h]
        add ecx, 24ch
        mov dword ptr [ebp - 218h], ecx
        lea edx, [ebp - 110h]
        push edx
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 57 02 E4 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 15: jmp 0x58647e41
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        lea eax, [ebp - 23ch]
        push eax
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 40 FC E3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 100h]
        add ecx, 24ch
        mov dword ptr [ebp - 1f4h], ecx
        lea edx, [ebp - 240h]
        push edx
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 2B 03 E4 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0xe4
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 5F FB E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfb
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58647f03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 B9 FB E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 66: jne 0x58647efe
        __asm _emit 0x75
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 264h]
        ; Exact mapped bytes E8 37 23 E6 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x23
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0E F1 E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 57 8E FE FF: call 0x58630d20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 0cch]
        push eax
        ; Exact mapped bytes 8B 0D 34 05 96 58: mov ecx, dword ptr [0x58960534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 15 30 05 96 58: mov edx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 4E F3 FF: call 0x5857cd30
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4e
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 AC 03 00 00: jmp 0x586482aa
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 29 FF FF FF: jmp 0x58647e2c
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 100h]
        add eax, 190h
        mov dword ptr [ebp - 1f8h], eax
        lea ecx, [ebp - 108h]
        push ecx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 5A 01 E4 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 15: jmp 0x58647f3e
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        lea edx, [ebp - 234h]
        push edx
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 D3 EC FF FF: call 0x58646c10
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 100h]
        add eax, 190h
        mov dword ptr [ebp - 1fch], eax
        lea ecx, [ebp - 238h]
        push ecx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 2F 02 E4 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0xe4
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 63 FA E3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xe3
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 6B: je 0x58647fdf
        __asm _emit 0x74
        __asm _emit 0x6b
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 C1 FA E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0xe3
        __asm _emit 0xff
        add eax, 2dh
        push eax
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x58647fda
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 F0 E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7D 8D FE FF: call 0x58630d20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 8C FA E3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        mov ecx, dword ptr [ebp - 200h]
        push ecx
        mov edx, dword ptr [ebp - 204h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 51 F3 FF: call 0x5857d170
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x51
        __asm _emit 0xf3
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 D0 02 00 00: jmp 0x586482aa
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x58647f29
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0B 01 00 00: jmp 0x586480ef
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        movzx ecx, byte ptr [eax + 308h]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x586480b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        movzx eax, byte ptr [edx + 309h]
        cmp eax, 8
        ; Exact mapped bytes 75 45: jne 0x58648051
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 EF E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 02 8D FE FF: call 0x58630d20
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 18h
        mov ecx, dword ptr [ebp - 100h]
        add ecx, 310h
        push ecx
        ; Exact mapped bytes E8 4D C1 16 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xc1
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 15 34 05 96 58: mov edx, dword ptr [0x58960534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 30 05 96 58: mov eax, dword ptr [0x58960530]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 4D F3 FF: call 0x5857cd90
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4d
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5F: jmp 0x586480b0
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ecx + 264h]
        ; Exact mapped bytes E8 7E 21 E6 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x21
        __asm _emit 0xe6
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 0fch]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 EF E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9E 8C FE FF: call 0x58630d20
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 0e4h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp - 0fch]
        push ecx
        ; Exact mapped bytes 8B 15 34 05 96 58: mov edx, dword ptr [0x58960534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes A1 30 05 96 58: mov eax, dword ptr [0x58960530]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 53 F3 FF: call 0x5857d400
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x586480ef
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 100h]
        movzx edx, byte ptr [ecx + 308h]
        cmp edx, 3
        ; Exact mapped bytes 75 2B: jne 0x586480ef
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 EF E8 FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4A 8C FE FF: call 0x58630d20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        mov eax, dword ptr [ebp - 208h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 52 F3 FF: call 0x5857d3a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x52
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 78: jmp 0x58648169
        __asm _emit 0xeb
        __asm _emit 0x78
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes 75 6D: jne 0x58648169
        __asm _emit 0x75
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 100h]
        mov ecx, dword ptr [edx + 0d4h]
        ; Exact mapped bytes E8 A3 D6 E4 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 100h]
        sub eax, dword ptr [ecx + 1dch]
        mov dword ptr [ebp - 20ch], eax
        ; Exact mapped bytes 79 24: jns 0x58648145
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes E8 CA F0 E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        push 0
        push 0
        push 0
        push 481h
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 2E 0C E9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0c
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 24: jmp 0x58648169
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 1dch]
        push ecx
        ; Exact mapped bytes 8B 15 30 05 96 58: mov edx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 6E F3 FF: call 0x5857efa0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6e
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x586482a8
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f235h
        ; Exact mapped bytes 0F 85 2D 01 00 00: jne 0x586482a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea eax, [ebp - 9ch]
        push eax
        ; Exact mapped bytes E8 82 4C 20 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x4c
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 100h]
        movzx edx, byte ptr [ecx + 1e0h]
        cmp edx, 1
        ; Exact mapped bytes 75 7C: jne 0x5864821f
        __asm _emit 0x75
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 1d8h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 1d8h]
        push eax
        push 588af31ch
        lea ecx, [ebp - 9ch]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx + 1cch]
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 1cch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E8 F8 EF E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        push 0
        push 0
        lea ecx, [ebp - 9ch]
        push ecx
        push 142h
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 A7 95 E9 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x95
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x586482a8
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        movzx eax, byte ptr [edx + 1e0h]
        cmp eax, 2
        ; Exact mapped bytes 75 77: jne 0x586482a8
        __asm _emit 0x75
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 100h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 1dch], edx
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 1dch]
        push ecx
        push 588af320h
        lea edx, [ebp - 9ch]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 100h]
        mov ecx, dword ptr [eax + 1cch]
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 1cch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E8 6A EF E8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        push 0
        push 0
        lea eax, [ebp - 9ch]
        push eax
        push 143h
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 19 95 E9 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x95
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        xor eax, eax
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 9B 8D 1E 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x8d
        __asm _emit 0x1e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
