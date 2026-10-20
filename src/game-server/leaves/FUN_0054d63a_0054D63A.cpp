// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054D63A .. +0x3AC bytes.
extern "C" __declspec(naked) void FUN_0054d63a_0054D63A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f3fah
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
        sub esp, 12ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x54d66f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 1C 28 5E 00: call dword ptr [0x5e281c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54d683
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d8h
        push 5ccb40h
        ; Exact mapped bytes E8 82 73 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54d683
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x54d65b
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0E: je 0x54d69d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 1C 28 5E 00: call dword ptr [0x5e281c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54d6b1
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d9h
        push 5ccb40h
        ; Exact mapped bytes E8 54 73 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54d6b1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x54d689
        __asm _emit 0x75
        __asm _emit 0xd2
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 00 28 5E 00: call dword ptr [0x5e2800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 1A: je 0x54d700
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 74 14: je 0x54d700
        __asm _emit 0x74
        __asm _emit 0x14
        push 1e4h
        push 5ccb40h
        ; Exact mapped bytes E8 05 73 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54d700
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x54d6e0
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 08: jne 0x54d714
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x54d726
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D 6C 02 00 00: jge 0x54d99e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 EC 27 5E 00: call dword ptr [0x5e27ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        push 400h
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 F8 27 5E 00: call dword ptr [0x5e27f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 64: jne 0x54d7c3
        __asm _emit 0x75
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 28h]
        and edx, 800h
        test edx, edx
        ; Exact mapped bytes 74 57: je 0x54d7c3
        __asm _emit 0x74
        __asm _emit 0x57
        cmp dword ptr [ebp + 14h], 5
        ; Exact mapped bytes 7E 14: jle 0x54d786
        __asm _emit 0x7e
        __asm _emit 0x14
        push 1f1h
        push 5ccb40h
        ; Exact mapped bytes E8 7F 72 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54d786
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54d76c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + ecx*4], eax
        mov dword ptr [ebp - 20h], 0
        cmp dword ptr [ebp + 14h], 5
        ; Exact mapped bytes 7D 10: jge 0x54d7b5
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [edx + ecx*4 + 4]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 2
        mov dword ptr [ebp + 14h], ecx
        ; Exact mapped bytes E9 D6 01 00 00: jmp 0x54d999
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], 0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 26: je 0x54d7f9
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp + 14h], 5
        ; Exact mapped bytes 75 20: jne 0x54d7f9
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax + edx*4], 1
        ; Exact mapped bytes 75 14: jne 0x54d7f9
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 EC 27 5E 00: call dword ptr [0x5e27ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 130h], eax
        push 400h
        push 100h
        lea eax, [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 F4 27 5E 00: call dword ptr [0x5e27f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x54d92e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x54d8df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 72 7D FE FF: call 0x5355ac
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 92 00 FA FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 34 37 FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x54d869
        __asm _emit 0x75
        __asm _emit 0x0d
        push 20h
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 47 07 FA FF: call 0x4edfb0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x07
        __asm _emit 0xfa
        __asm _emit 0xff
        lea eax, [ebp - 12ch]
        push eax
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 DA 06 FA FF: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0xfa
        __asm _emit 0xff
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 24 37 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 10h
        mov edx, dword ptr [ebp - 130h]
        push edx
        ; Exact mapped bytes FF 15 14 28 5E 00: call dword ptr [0x5e2814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + eax*4], 0
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + edx*4 - 4]
        add ecx, 1
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + edx*4 - 4], ecx
        mov dword ptr [ebp - 24h], 1
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 6F FF F9 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 4D: jmp 0x54d92c
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 00 28 5E 00: call dword ptr [0x5e2800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x54d92c
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ffh
        or al, 10h
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 12ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 28h]
        or ah, 4
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 E8 27 5E 00: call dword ptr [0x5e27e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 6B: jmp 0x54d999
        __asm _emit 0xeb
        __asm _emit 0x6b
        cmp dword ptr [ebp - 134h], 0
        ; Exact mapped bytes 7E 62: jle 0x54d999
        __asm _emit 0x7e
        __asm _emit 0x62
        ; Exact mapped bytes 0F BE 95 D4 FE FF FF: movsx edx, byte ptr [ebp - 0x12c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x54d956
        __asm _emit 0x75
        __asm _emit 0x14
        push 233h
        push 5ccb40h
        ; Exact mapped bytes E8 AF 70 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54d956
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x54d937
        __asm _emit 0x75
        __asm _emit 0xdb
        lea ecx, [ebp - 12ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 FC 27 5E 00: call dword ptr [0x5e27fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 28h]
        or ch, 4
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E8 27 5E 00: call dword ptr [0x5e27e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes E9 7F FD FF FF: jmp 0x54d71d
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 2C: jne 0x54d9d0
        __asm _emit 0x75
        __asm _emit 0x2c
        cmp dword ptr [ebp + 14h], 5
        ; Exact mapped bytes 7E 14: jle 0x54d9be
        __asm _emit 0x7e
        __asm _emit 0x14
        push 242h
        push 5ccb40h
        ; Exact mapped bytes E8 47 70 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54d9be
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54d9a4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + ecx*4], eax
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
