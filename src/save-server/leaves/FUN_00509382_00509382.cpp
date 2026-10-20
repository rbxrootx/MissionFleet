// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509382 .. +0x83E bytes.
extern "C" __declspec(naked) void FUN_00509382_00509382() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ech
        mov dword ptr [ebp - 0c8h], ecx
        push 173h
        push 6791a4h
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 B9 0E FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 0D 57 FF FF: call 0x4feacb
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 DC 87 02 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 94h
        ; Exact mapped bytes E8 07 90 02 00: call 0x5323de
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x509400
        __asm _emit 0x75
        __asm _emit 0x25
        lea ecx, [ebp - 0ach]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 94h
        ; Exact mapped bytes E8 EA 8E 02 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 3C: jmp 0x50943c
        __asm _emit 0xeb
        __asm _emit 0x3c
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 BF 8D 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 5F 96 FC FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        lea ecx, [ebp - 64h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 39 27 02 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 0b4h]
        push edx
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 AC 8E 02 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 0c8h]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 74 0C: je 0x509457
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes EB 1B: jmp 0x509472
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 45 CF 01 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 A8 BE 68 00: call dword ptr [0x68bea8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes 8B 15 C4 6D 68 00: mov edx, dword ptr [0x686dc4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        push edx
        ; Exact mapped bytes A1 C0 6D 68 00: mov eax, dword ptr [0x686dc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        push eax
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 C8 89 02 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x5094b4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 E8 CE 01 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 0F 8D 42 06 00 00: jge 0x509b0d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 A1 09 00 00: call 0x509e7b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 3E D0 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 70h], ecx
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 0F 84 12 05 00 00: je 0x509a10
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E4 04 00 00: je 0x5099f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + 64h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 1E: je 0x509549
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x509549
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 94h]
        or edx, 6
        mov dword ptr [ebp - 94h], edx
        ; Exact mapped bytes EB 2F: jmp 0x509578
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 0a000h
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x50956a
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 94h]
        or edx, 0ah
        mov dword ptr [ebp - 94h], edx
        ; Exact mapped bytes EB 0E: jmp 0x509578
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 94h]
        or al, 10h
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        push -1
        lea edx, [ebp - 9ch]
        push edx
        mov eax, dword ptr [ebp - 6ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 0b8h], ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0c4h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0c0h], edx
        mov eax, dword ptr [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 5D 8C 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 D8 8B 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 14 25 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 43 E3 FD FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 F5 01 00 00: je 0x509809
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 80h]
        cmp ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes 7E 23: jle 0x509642
        __asm _emit 0x7e
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 0c8h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 17: jne 0x509642
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        mov eax, dword ptr [ebp - 80h]
        sub eax, dword ptr [ebp - 90h]
        push eax
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 30 8F 02 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 88h]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7E 71: jle 0x5096be
        __asm _emit 0x7e
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 0c8h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 65: jne 0x5096be
        __asm _emit 0x75
        __asm _emit 0x65
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 4C 8C 02 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 2B 05 C0 6D 68 00: sub eax, dword ptr [0x686dc0]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 0a0h]
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7E 11: jle 0x50968f
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 0d0h], ecx
        ; Exact mapped bytes EB 09: jmp 0x509698
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0d0h], edx
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 0a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        sub ecx, dword ptr [ebp - 90h]
        push ecx
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 B4 8E 02 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 25: je 0x5096e9
        __asm _emit 0x74
        __asm _emit 0x25
        mov dword ptr [ebp - 2ch], 0
        push 0
        mov edx, dword ptr [ebp - 90h]
        ; Exact mapped bytes 03 15 C0 6D 68 00: add edx, dword ptr [0x686dc0]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        push edx
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 8B 8E 02 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 5C: jmp 0x509745
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 2B 05 C0 6D 68 00: sub eax, dword ptr [0x686dc0]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 90h], eax
        ; Exact mapped bytes 7C 4B: jl 0x509745
        __asm _emit 0x7c
        __asm _emit 0x4b
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 7E 45: jle 0x509745
        __asm _emit 0x7e
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 18 CE 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 2B: je 0x509745
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1
        push 0
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 53 5C FB FF: call 0x4bf383
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5c
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 70h], 0
        mov dword ptr [ebp - 2ch], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x509804
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 80h]
        push eax
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 E5 8E 02 00: call 0x532643
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 62: je 0x5097c4
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 0c8h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 75 3C: jne 0x5097ad
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x5097ad
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + 74h]
        add edx, 94h
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [edx + 0ch], ecx
        lea edx, [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 6E 9E FC FF: call 0x4d3632
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 90h]
        add eax, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 2B 05 C0 6D 68 00: sub eax, dword ptr [0x686dc0]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes 7E 0B: jle 0x5097ef
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0d4h], edx
        ; Exact mapped bytes EB 0C: jmp 0x5097fb
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E9 EF 01 00 00: jmp 0x5099f8
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7ch]
        cmp edx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes 7E 23: jle 0x509837
        __asm _emit 0x7e
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 0c8h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 17: jne 0x509837
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 7ch]
        sub ecx, dword ptr [ebp - 8ch]
        push ecx
        push 0
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 3B 8D 02 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 84h]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 7E 71: jle 0x5098b3
        __asm _emit 0x7e
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 0c8h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 65: jne 0x5098b3
        __asm _emit 0x75
        __asm _emit 0x65
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 6D 8A 02 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 2B 05 C4 6D 68 00: sub eax, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, dword ptr [ebp - 0a4h]
        cmp ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 7E 11: jle 0x509884
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 20h]
        sub edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 0d8h], edx
        ; Exact mapped bytes EB 09: jmp 0x50988d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 0a4h]
        sub edx, dword ptr [ebp - 8ch]
        push edx
        push 0
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 BF 8C 02 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 25: je 0x5098de
        __asm _emit 0x74
        __asm _emit 0x25
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 8ch]
        ; Exact mapped bytes 03 05 C4 6D 68 00: add eax, dword ptr [0x686dc4]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        push eax
        push 0
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 96 8C 02 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 5C: jmp 0x50993a
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 2B 0D C4 6D 68 00: sub ecx, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 8ch], ecx
        ; Exact mapped bytes 7C 4B: jl 0x50993a
        __asm _emit 0x7c
        __asm _emit 0x4b
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 7E 45: jle 0x50993a
        __asm _emit 0x7e
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 28h]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 23 CC 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 2B: je 0x50993a
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1
        push 0
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        add ecx, 7ch
        ; Exact mapped bytes E8 5E 5A FB FF: call 0x4bf383
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x5a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 70h], 0
        mov dword ptr [ebp - 2ch], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x5099f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 80h]
        push ecx
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 F0 8C 02 00: call 0x532643
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 61: je 0x5099b8
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 0c8h]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 75 3B: jne 0x5099a1
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 2E: jne 0x5099a1
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [edx + 74h]
        add eax, 94h
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [eax + 0ch], edx
        lea eax, [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        lea eax, [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 7A 9C FC FF: call 0x4d3632
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes 2B 0D C4 6D 68 00: sub ecx, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 7E 0B: jle 0x5099e3
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0C: jmp 0x5099ef
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 0dch], ecx
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 12: jne 0x509a10
        __asm _emit 0x75
        __asm _emit 0x12
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x509b08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 0F 85 E4 00 00 00: jne 0x509b08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x509b08
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 68: je 0x509a9c
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 2B 05 C4 6D 68 00: sub eax, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        add ecx, eax
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7E 0B: jle 0x509a58
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 09: jmp 0x509a61
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 7E 0B: jle 0x509a7d
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0e4h], ecx
        ; Exact mapped bytes EB 09: jmp 0x509a86
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0e4h], edx
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D C0 6D 68 00: mov ecx, dword ptr [0x686dc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg ecx
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes EB 65: jmp 0x509b01
        __asm _emit 0xeb
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 2B 15 C0 6D 68 00: sub edx, dword ptr [0x686dc0]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        add eax, edx
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 7E 0B: jle 0x509ac0
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0e8h], edx
        ; Exact mapped bytes EB 09: jmp 0x509ac9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 7E 0B: jle 0x509ae5
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 09: jmp 0x509aee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ech], ecx
        mov edx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes A1 C4 6D 68 00: mov eax, dword ptr [0x686dc4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes E9 9E F9 FF FF: jmp 0x5094ab
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0c8h]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 75 26: jne 0x509b42
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 0E: je 0x509b30
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 54h]
        push edx
        ; Exact mapped bytes FF 15 B0 BE 68 00: call dword ptr [0x68beb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x509b42
        __asm _emit 0x75
        __asm _emit 0x12
        push 6791d0h
        push 679208h
        ; Exact mapped bytes E8 D6 6A F9 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7D 86 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 51 89 02 00: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 21 68 FF FF: call 0x500386
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x509b71
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 16: jne 0x509b87
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 10: je 0x509b87
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        neg edx
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        add eax, edx
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x509b93
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 16: je 0x509ba9
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 10: je 0x509ba9
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        neg ecx
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 14h]
        add edx, ecx
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
