// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004655B5 .. +0x323 bytes.
extern "C" __declspec(naked) void FUN_004655b5_004655B5() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 6fc0h
        ; Exact mapped bytes E8 FE 41 04 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        push esi
        push edi
        push ecx
        lea edi, [ebp - 6fc0h]
        mov ecx, 1bf0h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 6fc0h], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 6fc0h]
        ; Exact mapped bytes E8 B0 F7 FF FF: call 0x464dab
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 6fc0h]
        ; Exact mapped bytes E8 70 0B 00 00: call 0x466193
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 6fc0h]
        ; Exact mapped bytes E8 D8 0B 00 00: call 0x46620e
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x465648
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D 44 02 00 00: jge 0x465896
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4 + 270h]
        mov dword ptr [ebp - 6fa8h], ecx
        mov dword ptr [ebp - 6fb4h], 63h
        mov dword ptr [ebp - 6fb8h], 0
        mov edx, dword ptr [ebp - 6fa8h]
        mov dword ptr [ebp - 6fbch], edx
        lea eax, [ebp - 6fb4h]
        push eax
        lea ecx, [ebp - 6fb8h]
        push ecx
        lea edx, [ebp - 6fbch]
        push edx
        ; Exact mapped bytes E8 05 E1 F9 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 CB 01 00 00: je 0x465891
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6fa8h]
        shl eax, 10h
        or al, 4
        mov dword ptr [ebp - 6fach], eax
        mov ecx, dword ptr [ebp - 6fa8h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA E2 F9 FF: call 0x403990
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe2
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A3 01 00 00: je 0x465891
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6fc0h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 114h], 0
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x465855
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6fb0h], 0
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 6
        mov eax, dword ptr [ebp - 6fc0h]
        lea ecx, [eax + edx + 5eh]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 6fa8h]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        push edx
        mov ecx, dword ptr [ebp - 6fc0h]
        ; Exact mapped bytes E8 EF 08 00 00: call 0x46603c
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 6fa8h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 6fc0h]
        ; Exact mapped bytes E8 9A 20 00 00: call 0x467801
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 6fb0h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 6fa8h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 6fc0h]
        ; Exact mapped bytes E8 06 08 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6fc0h]
        ; Exact mapped bytes DB 80 24 01 00 00: fild dword ptr [eax + 0x124]
        __asm _emit 0xdb
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D8 85 50 90 FF FF: fadd dword ptr [ebp - 0x6fb0]
        __asm _emit 0xd8
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 9D 50 90 FF FF: fstp dword ptr [ebp - 0x6fb0]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov dl, byte ptr [ebp - 18h]
        push edx
        mov al, byte ptr [ebp - 1ch]
        push eax
        mov cl, byte ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 6fb0h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 6fa8h]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        push eax
        mov ecx, dword ptr [ebp - 6fc0h]
        ; Exact mapped bytes E8 E2 0B 00 00: call 0x4663d3
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 6fa8h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 6fc0h]
        ; Exact mapped bytes E8 FF F7 FF FF: call 0x465006
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 6fa8h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 6fa8h]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        push ecx
        mov ecx, dword ptr [ebp - 6fc0h]
        ; Exact mapped bytes E8 38 18 00 00: call 0x46706e
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6fach]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 6fc0h]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 60 CE 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 6fa8h]
        imul edx, edx, 37ch
        lea esi, [ecx + edx + 224h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 37ch
        lea edi, [ebp + eax - 6fa4h]
        mov ecx, 0dfh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E9 A9 FD FF FF: jmp 0x46563f
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1D: je 0x4658c1
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 37ch
        push ecx
        lea edx, [ebp - 6fa4h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 62 37 04 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        pop edi
        pop esi
        add esp, 6fc0h
        cmp ebp, esp
        ; Exact mapped bytes E8 0E 2F 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
