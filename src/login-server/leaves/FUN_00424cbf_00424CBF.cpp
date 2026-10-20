// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424CBF .. +0x721 bytes.
extern "C" __declspec(naked) void FUN_00424cbf_00424CBF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 248h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        xor esi, esi
        mov bl, byte ptr [edi]
        inc edi
        test bl, bl
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 14h], esi
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 0F 84 F4 06 00 00: je 0x4253d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes EB 08: jmp 0x424cf3
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 30h]
        xor edx, edx
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 0F 8C DC 06 00 00: jl 0x4253d8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xdc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp bl, 20h
        ; Exact mapped bytes 7C 13: jl 0x424d14
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp bl, 78h
        ; Exact mapped bytes 7F 0E: jg 0x424d14
        __asm _emit 0x7f
        __asm _emit 0x0e
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        mov al, byte ptr [eax + 43ff88h]
        and eax, 0fh
        ; Exact mapped bytes EB 02: jmp 0x424d16
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 0F BE 84 C6 A8 FF 43 00: movsx eax, byte ptr [esi + eax*8 + 0x43ffa8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0x43
        __asm _emit 0x00
        sar eax, 4
        cmp eax, 7
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes 0F 87 9A 06 00 00: ja 0x4253c7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 E0 53 42 00: jmp dword ptr [eax*4 + 0x4253e0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x53
        __asm _emit 0x42
        __asm _emit 0x00
        or dword ptr [ebp - 10h], 0ffffffffh
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes E9 78 06 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        sub eax, 20h
        ; Exact mapped bytes 74 3B: je 0x424d92
        __asm _emit 0x74
        __asm _emit 0x3b
        sub eax, 3
        ; Exact mapped bytes 74 2D: je 0x424d89
        __asm _emit 0x74
        __asm _emit 0x2d
        sub eax, 8
        ; Exact mapped bytes 74 1F: je 0x424d80
        __asm _emit 0x74
        __asm _emit 0x1f
        dec eax
        dec eax
        ; Exact mapped bytes 74 12: je 0x424d77
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, 3
        ; Exact mapped bytes 0F 85 59 06 00 00: jne 0x4253c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 8
        ; Exact mapped bytes E9 50 06 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 4
        ; Exact mapped bytes E9 47 06 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 1
        ; Exact mapped bytes E9 3E 06 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [ebp - 4], 80h
        ; Exact mapped bytes E9 35 06 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 2
        ; Exact mapped bytes E9 2C 06 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp bl, 2ah
        ; Exact mapped bytes 75 23: jne 0x424dc3
        __asm _emit 0x75
        __asm _emit 0x23
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 F5 06 00 00: call 0x42549e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 0F 8D 12 06 00 00: jge 0x4253c7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 4
        neg eax
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E9 04 06 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE CB: movsx ecx, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xcb
        lea eax, [eax + eax*4]
        lea eax, [ecx + eax*2 - 30h]
        ; Exact mapped bytes EB E9: jmp 0x424dbb
        __asm _emit 0xeb
        __asm _emit 0xe9
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 ED 05 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp bl, 2ah
        ; Exact mapped bytes 75 1E: jne 0x424dfd
        __asm _emit 0x75
        __asm _emit 0x1e
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 B6 06 00 00: call 0x42549e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 0F 8D D3 05 00 00: jge 0x4253c7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 10h], 0ffffffffh
        ; Exact mapped bytes E9 CA 05 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + ecx*4]
        ; Exact mapped bytes 0F BE CB: movsx ecx, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xcb
        lea eax, [ecx + eax*2 - 30h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 B8 05 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp bl, 49h
        ; Exact mapped bytes 74 2E: je 0x424e42
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp bl, 68h
        ; Exact mapped bytes 74 20: je 0x424e39
        __asm _emit 0x74
        __asm _emit 0x20
        cmp bl, 6ch
        ; Exact mapped bytes 74 12: je 0x424e30
        __asm _emit 0x74
        __asm _emit 0x12
        cmp bl, 77h
        ; Exact mapped bytes 0F 85 A0 05 00 00: jne 0x4253c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [ebp - 3], 8
        ; Exact mapped bytes E9 97 05 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 10h
        ; Exact mapped bytes E9 8E 05 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 20h
        ; Exact mapped bytes E9 85 05 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi], 36h
        ; Exact mapped bytes 75 14: jne 0x424e5b
        __asm _emit 0x75
        __asm _emit 0x14
        cmp byte ptr [edi + 1], 34h
        ; Exact mapped bytes 75 0E: jne 0x424e5b
        __asm _emit 0x75
        __asm _emit 0x0e
        inc edi
        inc edi
        or byte ptr [ebp - 3], 80h
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes E9 6C 05 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes 8B 0D C0 AC 44 00: mov ecx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], edx
        movzx eax, bl
        test byte ptr [ecx + eax*2 + 1], 80h
        ; Exact mapped bytes 74 19: je 0x424e8a
        __asm _emit 0x74
        __asm _emit 0x19
        lea eax, [ebp - 14h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        push eax
        ; Exact mapped bytes E8 7F 05 00 00: call 0x425400
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov bl, byte ptr [edi]
        add esp, 0ch
        inc edi
        mov dword ptr [ebp + 0ch], edi
        lea eax, [ebp - 14h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        push eax
        ; Exact mapped bytes E8 66 05 00 00: call 0x425400
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 25 05 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        cmp eax, 67h
        ; Exact mapped bytes 0F 8F 1C 02 00 00: jg 0x4250ca
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 65h
        ; Exact mapped bytes 0F 8D 96 00 00 00: jge 0x424f4d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 58h
        ; Exact mapped bytes 0F 8F EB 00 00 00: jg 0x424fab
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 78 02 00 00: je 0x42513e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 43h
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x424f6e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        dec eax
        ; Exact mapped bytes 74 70: je 0x424f43
        __asm _emit 0x74
        __asm _emit 0x70
        dec eax
        dec eax
        ; Exact mapped bytes 74 6C: je 0x424f43
        __asm _emit 0x74
        __asm _emit 0x6c
        sub eax, 0ch
        ; Exact mapped bytes 0F 85 E9 03 00 00: jne 0x4252c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 F7 45 FC 30 08: test word ptr [ebp - 4], 0x830
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x30
        __asm _emit 0x08
        ; Exact mapped bytes 75 04: jne 0x424eec
        __asm _emit 0x75
        __asm _emit 0x04
        or byte ptr [ebp - 3], 8
        mov esi, dword ptr [ebp - 10h]
        cmp esi, -1
        ; Exact mapped bytes 75 05: jne 0x424ef9
        __asm _emit 0x75
        __asm _emit 0x05
        mov esi, 7fffffffh
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 9C 05 00 00: call 0x42549e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 F7 45 FC 10 08: test word ptr [ebp - 4], 0x810
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x10
        __asm _emit 0x08
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 0F 84 FE 01 00 00: je 0x425112
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x424f21
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 0D 44 D0 44 00: mov ecx, dword ptr [0x44d044]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 24h], 1
        mov eax, ecx
        mov edx, esi
        dec esi
        test edx, edx
        ; Exact mapped bytes 0F 84 D4 01 00 00: je 0x425109
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 38 00: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CA 01 00 00: je 0x425109
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        inc eax
        ; Exact mapped bytes EB E7: jmp 0x424f2a
        __asm _emit 0xeb
        __asm _emit 0xe7
        mov dword ptr [ebp - 34h], 1
        add bl, 20h
        or dword ptr [ebp - 4], 40h
        lea edi, [ebp - 248h]
        cmp ecx, edx
        mov dword ptr [ebp - 8], edi
        ; Exact mapped bytes 0F 8D CF 00 00 00: jge 0x425031
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 6
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x42503f
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 F7 45 FC 30 08: test word ptr [ebp - 4], 0x830
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x30
        __asm _emit 0x08
        ; Exact mapped bytes 75 04: jne 0x424f7a
        __asm _emit 0x75
        __asm _emit 0x04
        or byte ptr [ebp - 3], 8
        ; Exact mapped bytes 66 F7 45 FC 10 08: test word ptr [ebp - 4], 0x810
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x10
        __asm _emit 0x08
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes 74 3B: je 0x424fc1
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes E8 30 05 00 00: call 0x4254bb
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 248h]
        push eax
        ; Exact mapped bytes E8 25 1E 00 00: call 0x426dbd
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        test eax, eax
        ; Exact mapped bytes 7D 32: jge 0x424fd4
        __asm _emit 0x7d
        __asm _emit 0x32
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 29: jmp 0x424fd4
        __asm _emit 0xeb
        __asm _emit 0x29
        sub eax, 5ah
        ; Exact mapped bytes 74 32: je 0x424fe2
        __asm _emit 0x74
        __asm _emit 0x32
        sub eax, 9
        ; Exact mapped bytes 74 C5: je 0x424f7a
        __asm _emit 0x74
        __asm _emit 0xc5
        dec eax
        ; Exact mapped bytes 0F 84 E8 01 00 00: je 0x4251a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 08 03 00 00: jmp 0x4252c9
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D8 04 00 00: call 0x42549e
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov byte ptr [ebp - 248h], al
        mov dword ptr [ebp - 0ch], 1
        lea eax, [ebp - 248h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 E7 02 00 00: jmp 0x4252c9
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 B3 04 00 00: call 0x42549e
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 33: je 0x425023
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 2C: je 0x425023
        __asm _emit 0x74
        __asm _emit 0x2c
        test byte ptr [ebp - 3], 8
        ; Exact mapped bytes 74 17: je 0x425014
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        shr eax, 1
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes E9 B5 02 00 00: jmp 0x4252c9
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        ; Exact mapped bytes E9 A3 02 00 00: jmp 0x4252c6
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 D0 44 00: mov eax, dword ptr [0x44d040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push eax
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x4250bf
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x42503f
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp bl, 67h
        ; Exact mapped bytes 75 07: jne 0x42503f
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        mov eax, dword ptr [ebp + 10h]
        push dword ptr [ebp - 34h]
        add eax, 8
        mov dword ptr [ebp + 10h], eax
        push dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax - 8]
        mov dword ptr [ebp - 48h], ecx
        mov eax, dword ptr [eax - 4]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        push eax
        lea eax, [ebp - 248h]
        push eax
        lea eax, [ebp - 48h]
        push eax
        ; Exact mapped bytes FF 15 50 D0 44 00: call dword ptr [0x44d050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 4]
        add esp, 14h
        and esi, 80h
        ; Exact mapped bytes 74 14: je 0x425091
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0E: jne 0x425091
        __asm _emit 0x75
        __asm _emit 0x0e
        lea eax, [ebp - 248h]
        push eax
        ; Exact mapped bytes FF 15 5C D0 44 00: call dword ptr [0x44d05c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        pop ecx
        cmp bl, 67h
        ; Exact mapped bytes 75 12: jne 0x4250a8
        __asm _emit 0x75
        __asm _emit 0x12
        test esi, esi
        ; Exact mapped bytes 75 0E: jne 0x4250a8
        __asm _emit 0x75
        __asm _emit 0x0e
        lea eax, [ebp - 248h]
        push eax
        ; Exact mapped bytes FF 15 54 D0 44 00: call dword ptr [0x44d054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        pop ecx
        cmp byte ptr [ebp - 248h], 2dh
        ; Exact mapped bytes 75 0D: jne 0x4250be
        __asm _emit 0x75
        __asm _emit 0x0d
        or byte ptr [ebp - 3], 1
        lea edi, [ebp - 247h]
        mov dword ptr [ebp - 8], edi
        push edi
        ; Exact mapped bytes E8 7C 9A FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes E9 FC 01 00 00: jmp 0x4252c6
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 69h
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x4251a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 5
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x42517a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x425167
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 51: je 0x425137
        __asm _emit 0x74
        __asm _emit 0x51
        sub eax, 3
        ; Exact mapped bytes 0F 84 FD FD FF FF: je 0x424eec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x4251a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 3
        ; Exact mapped bytes 0F 85 C9 01 00 00: jne 0x4252c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 27h
        ; Exact mapped bytes EB 3C: jmp 0x425145
        __asm _emit 0xeb
        __asm _emit 0x3c
        sub eax, ecx
        sar eax, 1
        ; Exact mapped bytes E9 B4 01 00 00: jmp 0x4252c6
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x42511f
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 0D 40 D0 44 00: mov ecx, dword ptr [0x44d040]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 8], ecx
        mov eax, ecx
        mov edx, esi
        dec esi
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x425130
        __asm _emit 0x74
        __asm _emit 0x08
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 03: je 0x425130
        __asm _emit 0x74
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB F1: jmp 0x425121
        __asm _emit 0xeb
        __asm _emit 0xf1
        sub eax, ecx
        ; Exact mapped bytes E9 8F 01 00 00: jmp 0x4252c6
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 8
        mov dword ptr [ebp - 2ch], 7
        test byte ptr [ebp - 4], 80h
        mov dword ptr [ebp - 0ch], 10h
        ; Exact mapped bytes 74 5D: je 0x4251af
        __asm _emit 0x74
        __asm _emit 0x5d
        mov al, byte ptr [ebp - 2ch]
        mov byte ptr [ebp - 16h], 30h
        add al, 51h
        mov dword ptr [ebp - 1ch], 2
        mov byte ptr [ebp - 15h], al
        ; Exact mapped bytes EB 48: jmp 0x4251af
        __asm _emit 0xeb
        __asm _emit 0x48
        test byte ptr [ebp - 4], 80h
        mov dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 74 3B: je 0x4251af
        __asm _emit 0x74
        __asm _emit 0x3b
        or byte ptr [ebp - 3], 2
        ; Exact mapped bytes EB 35: jmp 0x4251af
        __asm _emit 0xeb
        __asm _emit 0x35
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 1B 03 00 00: call 0x42549e
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [ebp - 4], 20h
        pop ecx
        ; Exact mapped bytes 74 09: je 0x425193
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 8B 4D EC: mov cx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes EB 05: jmp 0x425198
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes E9 23 02 00 00: jmp 0x4253c7
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 40h
        mov dword ptr [ebp - 0ch], 0ah
        test byte ptr [ebp - 3], 80h
        ; Exact mapped bytes 74 0C: je 0x4251c1
        __asm _emit 0x74
        __asm _emit 0x0c
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 ED 02 00 00: call 0x4254ab
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB 41: jmp 0x425202
        __asm _emit 0xeb
        __asm _emit 0x41
        test byte ptr [ebp - 4], 20h
        ; Exact mapped bytes 74 21: je 0x4251e8
        __asm _emit 0x74
        __asm _emit 0x21
        test byte ptr [ebp - 4], 40h
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes 74 0C: je 0x4251dd
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 C8 02 00 00: call 0x42549e
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        cdq
        ; Exact mapped bytes EB 25: jmp 0x425202
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes E8 BC 02 00 00: call 0x42549e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        movzx eax, ax
        ; Exact mapped bytes EB F2: jmp 0x4251da
        __asm _emit 0xeb
        __asm _emit 0xf2
        test byte ptr [ebp - 4], 40h
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes 74 08: je 0x4251fa
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes E8 A7 02 00 00: call 0x42549e
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes EB E0: jmp 0x4251da
        __asm _emit 0xeb
        __asm _emit 0xe0
        ; Exact mapped bytes E8 9F 02 00 00: call 0x42549e
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        xor edx, edx
        test byte ptr [ebp - 4], 40h
        ; Exact mapped bytes 74 1B: je 0x425223
        __asm _emit 0x74
        __asm _emit 0x1b
        test edx, edx
        ; Exact mapped bytes 7F 17: jg 0x425223
        __asm _emit 0x7f
        __asm _emit 0x17
        ; Exact mapped bytes 7C 04: jl 0x425212
        __asm _emit 0x7c
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 73 11: jae 0x425223
        __asm _emit 0x73
        __asm _emit 0x11
        neg eax
        adc edx, 0
        mov esi, eax
        neg edx
        or byte ptr [ebp - 3], 1
        mov edi, edx
        ; Exact mapped bytes EB 04: jmp 0x425227
        __asm _emit 0xeb
        __asm _emit 0x04
        mov esi, eax
        mov edi, edx
        test byte ptr [ebp - 3], 80h
        ; Exact mapped bytes 75 03: jne 0x425230
        __asm _emit 0x75
        __asm _emit 0x03
        and edi, 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 09: jge 0x42523f
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 04: jmp 0x425243
        __asm _emit 0xeb
        __asm _emit 0x04
        and dword ptr [ebp - 4], 0fffffff7h
        mov eax, esi
        or eax, edi
        ; Exact mapped bytes 75 04: jne 0x42524d
        __asm _emit 0x75
        __asm _emit 0x04
        and dword ptr [ebp - 1ch], 0
        lea eax, [ebp - 49h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 10h]
        dec dword ptr [ebp - 10h]
        test eax, eax
        ; Exact mapped bytes 7F 06: jg 0x425263
        __asm _emit 0x7f
        __asm _emit 0x06
        mov eax, esi
        or eax, edi
        ; Exact mapped bytes 74 3B: je 0x42529e
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        push edx
        push eax
        push edi
        push esi
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes E8 EA 95 FF FF: call 0x41e860
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 3ch]
        mov ebx, eax
        add ebx, 30h
        push dword ptr [ebp - 40h]
        push edi
        push esi
        ; Exact mapped bytes E8 68 95 FF FF: call 0x41e7f0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ebx, 39h
        mov esi, eax
        mov edi, edx
        ; Exact mapped bytes 7E 03: jle 0x425294
        __asm _emit 0x7e
        __asm _emit 0x03
        add ebx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 8]
        dec dword ptr [ebp - 8]
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB B5: jmp 0x425253
        __asm _emit 0xeb
        __asm _emit 0xb5
        lea eax, [ebp - 49h]
        sub eax, dword ptr [ebp - 8]
        inc dword ptr [ebp - 8]
        test byte ptr [ebp - 3], 2
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 74 19: je 0x4252c9
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        cmp byte ptr [ecx], 30h
        ; Exact mapped bytes 75 04: jne 0x4252bc
        __asm _emit 0x75
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x4252c9
        __asm _emit 0x75
        __asm _emit 0x0d
        dec dword ptr [ebp - 8]
        inc eax
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx], 30h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 85 F4 00 00 00: jne 0x4253c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 4]
        test bl, 40h
        ; Exact mapped bytes 74 26: je 0x425301
        __asm _emit 0x74
        __asm _emit 0x26
        test bh, 1
        ; Exact mapped bytes 74 06: je 0x4252e6
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 16h], 2dh
        ; Exact mapped bytes EB 14: jmp 0x4252fa
        __asm _emit 0xeb
        __asm _emit 0x14
        test bl, 1
        ; Exact mapped bytes 74 06: je 0x4252f1
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 16h], 2bh
        ; Exact mapped bytes EB 09: jmp 0x4252fa
        __asm _emit 0xeb
        __asm _emit 0x09
        test bl, 2
        ; Exact mapped bytes 74 0B: je 0x425301
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [ebp - 16h], 20h
        mov dword ptr [ebp - 1ch], 1
        mov esi, dword ptr [ebp - 20h]
        sub esi, dword ptr [ebp - 1ch]
        sub esi, dword ptr [ebp - 0ch]
        test bl, 0ch
        ; Exact mapped bytes 75 12: jne 0x425321
        __asm _emit 0x75
        __asm _emit 0x12
        lea eax, [ebp - 14h]
        push eax
        push dword ptr [ebp + 8]
        push esi
        push 20h
        ; Exact mapped bytes E8 17 01 00 00: call 0x425435
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 16h]
        push dword ptr [ebp + 8]
        push dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 32 01 00 00: call 0x425466
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test bl, 8
        ; Exact mapped bytes 74 17: je 0x425353
        __asm _emit 0x74
        __asm _emit 0x17
        test bl, 4
        ; Exact mapped bytes 75 12: jne 0x425353
        __asm _emit 0x75
        __asm _emit 0x12
        lea eax, [ebp - 14h]
        push eax
        push dword ptr [ebp + 8]
        push esi
        push 30h
        ; Exact mapped bytes E8 E5 00 00 00: call 0x425435
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 41: je 0x42539a
        __asm _emit 0x74
        __asm _emit 0x41
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 3B: jle 0x42539a
        __asm _emit 0x7e
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 0ch]
        mov ebx, dword ptr [ebp - 8]
        lea edi, [eax - 1]
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        inc ebx
        push eax
        lea eax, [ebp - 38h]
        push eax
        inc ebx
        ; Exact mapped bytes E8 46 1A 00 00: call 0x426dbd
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 7E 32: jle 0x4253af
        __asm _emit 0x7e
        __asm _emit 0x32
        lea ecx, [ebp - 14h]
        push ecx
        push dword ptr [ebp + 8]
        push eax
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 D8 00 00 00: call 0x425466
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov eax, edi
        dec edi
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x425368
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact mapped bytes EB 15: jmp 0x4253af
        __asm _emit 0xeb
        __asm _emit 0x15
        lea eax, [ebp - 14h]
        push eax
        push dword ptr [ebp + 8]
        push dword ptr [ebp - 0ch]
        push dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BA 00 00 00: call 0x425466
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test byte ptr [ebp - 4], 4
        ; Exact mapped bytes 74 12: je 0x4253c7
        __asm _emit 0x74
        __asm _emit 0x12
        lea eax, [ebp - 14h]
        push eax
        push dword ptr [ebp + 8]
        push esi
        push 20h
        ; Exact mapped bytes E8 71 00 00 00: call 0x425435
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov edi, dword ptr [ebp + 0ch]
        mov bl, byte ptr [edi]
        inc edi
        test bl, bl
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 0F 85 13 F9 FF FF: jne 0x424ceb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
