// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00480083 .. +0x287 bytes.
extern "C" __declspec(naked) void FUN_00480083_00480083() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 28h], 1fh
        mov dword ptr [ebp - 2ch], 1
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 F9 36 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x36
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 33: jne 0x480101
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 F9 92 02 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 10h], eax
        ; Exact mapped bytes 75 1C: jne 0x480101
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 36 71 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F2 01 00 00: jmp 0x4802f3
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 5c441ch
        lea eax, [ebp - 24h]
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
        ; Exact mapped bytes E8 C0 86 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C3 DF FF FF: call 0x47e0ef
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 88 01 00 00: je 0x4802c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x4802c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 A2 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7C 3E F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3e
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 2E 01 00 00: jne 0x48028d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 A2 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 62 3E F8 FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x3e
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 0F 85 14 01 00 00: jne 0x48028d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F A2 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 A2 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 FA 00 00 00: jne 0x48028d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 A2 F8 FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 EC 00 00 00: mov cx, word ptr [eax + 0xec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x48028d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8ech], 1
        ; Exact mapped bytes 75 72: jne 0x480231
        __asm _emit 0x75
        __asm _emit 0x72
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8ech], 1
        ; Exact mapped bytes 75 66: jne 0x480231
        __asm _emit 0x75
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ech], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ech], 0
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8e8h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        ; Exact mapped bytes E8 C2 91 02 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        push 0
        push 0
        push 80020d00h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 03 70 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5A: jmp 0x48028b
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8ech], 0
        ; Exact mapped bytes 74 4E: je 0x48028b
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ech], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 54 E0 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        ; Exact mapped bytes E8 67 91 02 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 0
        push 0
        push 80020d0eh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 6F 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x4802bf
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8ech], 1
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 04 E0 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 6F 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x4802f3
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ech], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8e8h]
        ; Exact mapped bytes E8 D0 DF FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F 6F 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 DC 84 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
