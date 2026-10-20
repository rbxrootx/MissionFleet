// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043629B .. +0x3A2 bytes.
extern "C" __declspec(naked) void FUN_0043629b_0043629B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a324h
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
        mov eax, 0a100h
        ; Exact mapped bytes E8 03 35 07 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        push edi
        push ecx
        lea edi, [ebp - 0a10ch]
        mov ecx, 2840h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0a10ch], ecx
        mov dword ptr [ebp - 0a0ech], 0
        lea ecx, [ebp - 0a0e8h]
        ; Exact mapped bytes E8 C3 03 00 00: call 0x4366b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0a0dch
        push 0
        lea eax, [ebp - 0a0e8h]
        push eax
        ; Exact mapped bytes E8 70 30 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 0a108h]
        push ecx
        ; Exact mapped bytes E8 88 90 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0a0e8h]
        ; Exact mapped bytes E8 93 B3 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a10ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 50h]
        and dl, 7fh
        mov byte ptr [ebp - 0a038h], dl
        mov eax, dword ptr [ebp - 0a10ch]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 104h]
        add eax, 1
        mov dword ptr [ebp - 0a034h], eax
        mov ecx, dword ptr [ebp - 0a10ch]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 64h]
        mov byte ptr [ebp - 0a030h], cl
        mov edx, dword ptr [ebp - 0a10ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + 0d78h]
        ; Exact mapped bytes 66 8B 91 EC 00 00 00: mov dx, word ptr [ecx + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 95 D2 5F FF FF: mov word ptr [ebp - 0xa02e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0a10ch]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx + 40c78h]
        mov dword ptr [ebp - 0a040h], edx
        mov eax, dword ptr [ebp - 0a10ch]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes E8 74 AF FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 0F 84 62 02 00 00: je 0x43661b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0a10ch]
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes E8 59 AF FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [edx + 1b4h]
        add eax, 1
        mov dword ptr [ebp - 0a0f0h], eax
        mov ecx, dword ptr [ebp - 0a0f0h]
        mov dword ptr [ebp - 0a03ch], ecx
        mov edx, dword ptr [ebp - 0a0f0h]
        push edx
        mov eax, dword ptr [ebp - 0a10ch]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 55 D2 FC FF: call 0x403652
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0a10ch]
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes E8 15 AF FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [ebp - 0a0f0h]
        mov dword ptr [edx + 1b4h], eax
        mov dword ptr [ebp - 0a0f4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x436438
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a0f4h]
        add ecx, 1
        mov dword ptr [ebp - 0a0f4h], ecx
        mov edx, dword ptr [ebp - 0a10ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 0b2h]
        and dl, 0fh
        and edx, 0ffh
        cmp dword ptr [ebp - 0a0f4h], edx
        ; Exact mapped bytes 0F 8D 7F 01 00 00: jge 0x4365e1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a0f4h]
        imul eax, eax, 1404h
        mov ecx, dword ptr [ebp - 0a0f4h]
        mov dword ptr [ebp + eax - 0a02ch], ecx
        mov edx, dword ptr [ebp - 0a10ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 0a0f4h]
        shl ecx, 6
        cmp dword ptr [eax + ecx + 0cd4h], 0
        ; Exact mapped bytes 0F 84 1C 01 00 00: je 0x4365b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a10ch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 0a0f4h]
        shl ecx, 6
        mov edx, dword ptr [eax + ecx + 0cd4h]
        mov dword ptr [ebp - 0a0fch], edx
        mov dword ptr [ebp - 0a0f8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4364d5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0a0f8h]
        add eax, 1
        mov dword ptr [ebp - 0a0f8h], eax
        cmp dword ptr [ebp - 0a0f8h], 80h
        ; Exact mapped bytes 0F 8D D2 00 00 00: jge 0x4365b7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a0fch], 0
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x4365b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        mov ecx, dword ptr [ebp - 0a0fch]
        add ecx, 150h
        push ecx
        mov edx, dword ptr [ebp - 0a0f4h]
        imul edx, edx, 1404h
        lea eax, [ebp + edx - 0a02ch]
        mov ecx, dword ptr [ebp - 0a0f8h]
        imul ecx, ecx, 18h
        lea edx, [eax + ecx + 4]
        push edx
        ; Exact mapped bytes E8 F9 2A 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 0a100h]
        ; Exact mapped bytes E8 D2 A9 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa9
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 0a104h]
        push eax
        lea ecx, [ebp - 0a100h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0fch]
        ; Exact mapped bytes E8 82 1A 05 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        push 10h
        lea ecx, [ebp - 0a100h]
        ; Exact mapped bytes E8 48 AA 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xaa
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 0a0f4h]
        imul edx, edx, 1404h
        lea eax, [ebp + edx - 0a02ch]
        mov ecx, dword ptr [ebp - 0a0f8h]
        shl ecx, 4
        lea edx, [eax + ecx + 0c04h]
        push edx
        ; Exact mapped bytes E8 94 2A 07 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0a0fch]
        ; Exact mapped bytes E8 46 01 00 00: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0fch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0a100h]
        ; Exact mapped bytes E8 9A 72 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x72
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x4364c6
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0a0f0h]
        push eax
        mov ecx, dword ptr [ebp - 0a10ch]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [ebp - 0a0f4h]
        shl eax, 6
        lea ecx, [edx + eax + 0cb0h]
        ; Exact mapped bytes E8 07 5E 04 00: call 0x47c3e3
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 FE FF FF: jmp 0x436429
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0a0dch
        lea ecx, [ebp - 0a0e8h]
        push ecx
        push 0
        push 1
        push 80018002h
        mov edx, dword ptr [ebp - 0a10ch]
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes E8 1A AD FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 21 0C 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0ech], 1
        mov eax, dword ptr [ebp - 0a0ech]
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
        add esp, 0a10ch
        cmp ebp, esp
        ; Exact mapped bytes E8 A7 21 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
