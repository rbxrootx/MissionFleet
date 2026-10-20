// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040729A .. +0x42D bytes.
extern "C" __declspec(naked) void FUN_0040729a_0040729A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 15ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 15ch]
        mov ecx, 57h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 12ch], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 908h], 1
        ; Exact mapped bytes 0F 85 E3 03 00 00: jne 0x4076b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov dword ptr [ebp - 124h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x4072ef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 18h
        ; Exact mapped bytes 7D 1B: jge 0x407310
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 12ch]
        add edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 42 61: movsx eax, byte ptr [edx + 0x61]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x61
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x40730e
        __asm _emit 0x75
        __asm _emit 0x08
        mov cl, byte ptr [ebp - 8]
        mov byte ptr [ebp - 4], cl
        ; Exact mapped bytes EB 02: jmp 0x407310
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D6: jmp 0x4072e6
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        cmp edx, 3
        ; Exact mapped bytes 7C 28: jl 0x407346
        __asm _emit 0x7c
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        cmp eax, 17h
        ; Exact mapped bytes 7F 1B: jg 0x407346
        __asm _emit 0x7f
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 5ch
        push ecx
        ; Exact mapped bytes E8 96 20 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        cmp eax, 5
        ; Exact mapped bytes 0F 83 45 01 00 00: jae 0x40748b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        ; Exact mapped bytes E8 7B 20 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 B5 1C 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        ; Exact mapped bytes E8 53 20 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov byte ptr [ebp + eax - 20h], 0
        mov byte ptr [ebp - 9], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ecx + 3ch]
        add ecx, dword ptr [eax + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 7C: je 0x407421
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 134h], ecx
        mov dword ptr [ebp - 130h], 0
        ; Exact mapped bytes DF AD CC FE FF FF: fild qword ptr [ebp - 0x134]
        __asm _emit 0xdf
        __asm _emit 0xad
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 0D 74 10 58 00: fmul dword ptr [0x581074]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 13ch], ecx
        mov dword ptr [ebp - 138h], 0
        ; Exact mapped bytes DF AD C4 FE FF FF: fild qword ptr [ebp - 0x13c]
        __asm _emit 0xdf
        __asm _emit 0xad
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 144h], ecx
        mov dword ptr [ebp - 140h], 0
        ; Exact mapped bytes DF AD BC FE FF FF: fild qword ptr [ebp - 0x144]
        __asm _emit 0xdf
        __asm _emit 0xad
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 0D 74 10 58 00: fmul dword ptr [0x581074]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes DE F9: fdivp st(1)
        __asm _emit 0xde
        __asm _emit 0xf9
        ; Exact mapped bytes D9 9D DC FE FF FF: fstp dword ptr [ebp - 0x124]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        mov esi, esp
        push edx
        push 5a05cch
        mov eax, dword ptr [ebp - 12ch]
        add eax, 20h
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 94 13 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes D9 85 DC FE FF FF: fld dword ptr [ebp - 0x124]
        __asm _emit 0xd9
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 0D 70 10 58 00: fmul dword ptr [0x581070]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 9F 20 0A 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        push 5a05d0h
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 5A 13 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 9E 01 00 00: jmp 0x407629
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 61h
        push ecx
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 79 1B 0A 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        mov byte ptr [ebp + eax - 20h], 0
        mov byte ptr [ebp - 9], 0
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 DF 7B 03 00: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 128h], eax
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x407601
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 14ch], edx
        mov dword ptr [ebp - 148h], 0
        ; Exact mapped bytes DF AD B4 FE FF FF: fild qword ptr [ebp - 0x14c]
        __asm _emit 0xdf
        __asm _emit 0xad
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 0D 74 10 58 00: fmul dword ptr [0x581074]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 154h], edx
        mov dword ptr [ebp - 150h], 0
        ; Exact mapped bytes DF AD AC FE FF FF: fild qword ptr [ebp - 0x154]
        __asm _emit 0xdf
        __asm _emit 0xad
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 128h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 15ch], edx
        mov dword ptr [ebp - 158h], 0
        ; Exact mapped bytes DF AD A4 FE FF FF: fild qword ptr [ebp - 0x15c]
        __asm _emit 0xdf
        __asm _emit 0xad
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 0D 74 10 58 00: fmul dword ptr [0x581074]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes DE F9: fdivp st(1)
        __asm _emit 0xde
        __asm _emit 0xf9
        ; Exact mapped bytes D9 9D DC FE FF FF: fstp dword ptr [ebp - 0x124]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 128h]
        add eax, 150h
        mov esi, esp
        push eax
        push 5a05ech
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 4E 12 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x12
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes D9 85 DC FE FF FF: fld dword ptr [ebp - 0x124]
        __asm _emit 0xd9
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D8 0D 70 10 58 00: fmul dword ptr [0x581070]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 1F 0A 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push eax
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 44h]
        push ecx
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        mov edx, dword ptr [ebp - 128h]
        add edx, 150h
        push edx
        push 5a05f0h
        lea eax, [ebp - 120h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 1ch
        cmp esi, esp
        ; Exact mapped bytes E8 E1 11 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 28: jmp 0x407629
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 12ch]
        mov byte ptr [ecx + 20h], 0
        mov esi, esp
        push 5a0620h
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 B7 11 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        push 30h
        mov eax, dword ptr [ebp - 12ch]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 83 99 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 120h]
        push ecx
        ; Exact mapped bytes E8 81 1D 0A 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        lea edx, [ebp - 120h]
        push edx
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 5B 99 00 00: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 15 2E 00 00: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 38h
        ; Exact mapped bytes E8 E6 2D 00 00: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + 460h]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + 45ch]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 FB 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 15ch
        cmp ebp, esp
        ; Exact mapped bytes E8 1F 11 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
