// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544D54 .. +0x3DA bytes.
extern "C" __declspec(naked) void FUN_00544d54_00544D54() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e460h
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
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 4
        ; Exact mapped bytes E8 CA 1B FE FF: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x544d95
        __asm _emit 0x74
        __asm _emit 0x11
        push 7ch
        push 678024h
        ; Exact mapped bytes E8 B0 3F FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544d95
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x544d75
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 64 FF FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 55 FF FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 BE CC FE FF: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 9F A3 F9 FF: call 0x4df164
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 4
        ; Exact mapped bytes E8 87 1C FE FF: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 09: jmp 0x544de5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 13 03 00 00: je 0x545102
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 4
        ; Exact mapped bytes E8 7B 1C FE FF: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 FC FE FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 F0 FE FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E4 FE FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        push 5
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 0F 84 99 02 00 00: je 0x5450d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 44 FF FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 89 02 00 00: jne 0x5450d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x544e71
        __asm _emit 0x75
        __asm _emit 0x0c
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 75 7C F8 FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        push 20h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 AA 85 F8 FF: call 0x4cd425
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 74 14: je 0x544e94
        __asm _emit 0x74
        __asm _emit 0x14
        push 90h
        push 678024h
        ; Exact mapped bytes E8 B1 3E FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544e94
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x544e71
        __asm _emit 0x75
        __asm _emit 0xd7
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 08 FF FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0a8h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 F5 CC F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xcc
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EE FE FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 8E FC FF FF: call 0x544b50
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x544ee7
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 AD FE FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x544f6e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 63a050h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 B6 FE FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0e0h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 A3 CC F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 9C FE FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 3C FC FF FF: call 0x544b50
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 63a050h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 89 FE FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0cch
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 76 CC F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xcc
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 6F FE FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 0F FC FF FF: call 0x544b50
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 63a050h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 5C FE FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0b8h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 49 CC F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xcc
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 42 FE FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E2 FB FF FF: call 0x544b50
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 63a090h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 2F FE FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0e0h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 1C CC F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xcc
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 15 FE FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 B5 FB FF FF: call 0x544b50
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 63a090h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 02 FE FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0cch
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 EF CB F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xcb
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E8 FD FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 88 FB FF FF: call 0x544b50
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 63a090h
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 D5 FD FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0b8h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 C2 CB F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xcb
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BB FD FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 5B FB FF FF: call 0x544b50
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7E FD FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x5450d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 63 FF FD FF: call 0x524f83
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        cmp eax, 2eh
        ; Exact mapped bytes 74 14: je 0x54503c
        __asm _emit 0x74
        __asm _emit 0x14
        push 0bbh
        push 678024h
        ; Exact mapped bytes E8 09 3D FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54503c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x545016
        __asm _emit 0x75
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], 208h
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3F 80 F8 FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x80
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 48 FD FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 80000000h
        ; Exact mapped bytes FF 15 B8 B2 68 00: call dword ptr [0x68b2b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        push -1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 58 81 F8 FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 22: jne 0x5450a3
        __asm _emit 0x75
        __asm _emit 0x22
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 03 FD FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x5450a3
        __asm _emit 0x75
        __asm _emit 0x16
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 51 FF FD FF: call 0x524feb
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x5450d9
        __asm _emit 0x74
        __asm _emit 0x36
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 FF FC FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a09ch
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 EC CA F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xca
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E5 FC FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 85 FA FF FF: call 0x544b50
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D7 FC FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 77 FA FF FF: call 0x544b50
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 07 78 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 FB 77 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 EF 77 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 DA FC FF FF: jmp 0x544ddc
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 DE 77 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 CF 77 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
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
        ret
    }
}
