// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046BB40 .. +0x36E bytes.
extern "C" __declspec(naked) void FUN_0046bb40_0046BB40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        ; Exact mapped bytes A1 98 DB 67 00: mov eax, dword ptr [0x67db98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0xdb
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x46bb68
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 73 33: jae 0x46bba1
        __asm _emit 0x73
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        ; Exact mapped bytes E8 C3 9B FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4 + 1ch]
        push ecx
        ; Exact mapped bytes E8 AE 9B FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, dword ptr [ebp - 8]
        lea edx, [eax + esi + 2]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB BE: jmp 0x46bb5f
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x46bbb3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes 73 34: jae 0x46bbed
        __asm _emit 0x73
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 38h]
        push eax
        ; Exact mapped bytes E8 77 9B FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 68h]
        push eax
        ; Exact mapped bytes E8 62 9B FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, dword ptr [ebp - 8]
        lea ecx, [eax + esi + 2]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB BD: jmp 0x46bbaa
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 44 9B FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 9ch]
        push edx
        ; Exact mapped bytes E8 30 9B FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, dword ptr [ebp - 8]
        lea eax, [eax + esi + 2]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0a0h]
        push edx
        ; Exact mapped bytes E8 14 9B FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0a4h]
        push ecx
        ; Exact mapped bytes E8 F8 9A FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        ; Exact mapped bytes E8 DC 9A FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 0ach
        push eax
        ; Exact mapped bytes E8 11 AB FF FF: call 0x466790
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 17 02 00 00: je 0x46bea6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0ach
        mov dword ptr [ebp - 14h], edx
        push 0ach
        ; Exact mapped bytes A1 98 DB 67 00: mov eax, dword ptr [0x67db98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0xdb
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 4B 96 FF FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x46bcca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 73 6E: jae 0x46bd3e
        __asm _emit 0x73
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + eax*4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 81 9C FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 48 9A FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + eax*4 + 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 1ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 4A 9C FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 11 9A FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 83: jmp 0x46bcc1
        __asm _emit 0xeb
        __asm _emit 0x83
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x46bd50
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes 73 70: jae 0x46bdc6
        __asm _emit 0x73
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + ecx*4 + 38h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 38h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 F9 9B FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 C0 99 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + ecx*4 + 68h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 68h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 C2 9B FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 89 99 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 81: jmp 0x46bd47
        __asm _emit 0xeb
        __asm _emit 0x81
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 98h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 8B 9B FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 52 99 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 9ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 9ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 56 9B FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 1D 99 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0a0h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 21 9B FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 E8 98 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0a4h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 EC 9A FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 B3 98 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 4]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
