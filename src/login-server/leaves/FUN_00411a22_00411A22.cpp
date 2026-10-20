// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411A22 .. +0x217 bytes.
extern "C" __declspec(naked) void FUN_00411a22_00411A22() {
    __asm {
        mov eax, 43a418h
        ; Exact mapped bytes E8 DC DB 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 260h
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 0F 84 E9 01 00 00: je 0x411c2a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        push ebx
        push edi
        mov dword ptr [ebp - 10h], eax
        and dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 14h], eax
        push 4359afh
        mov ecx, 44dc10h
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 E3 53 02 00: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 16h]
        mov edi, 1ffh
        push ecx
        lea ecx, [ebp - 26ch]
        push edi
        push ecx
        lea ecx, [ebp - 20h]
        mov dword ptr [ebp - 28h], eax
        push ecx
        lea ecx, [ebp - 1ch]
        push ecx
        push dword ptr [ebp + 0ch]
        push dword ptr [esi + 4]
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 C9 AA 01 00: call 0x42c558
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, eax
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 97 C2 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, 43d5bch
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 0A: je 0x411ab1
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 FB 01: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 5F 01 00 00: jne 0x411c10
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 43d5b4h
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 15 68 C2 43 00: call dword ptr [0x43c268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 49 01 00 00: je 0x411c10
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 26ch]
        lea ecx, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 5E C2 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [ebp - 20h]
        lea eax, [ebp - 6ch]
        push 43d5a0h
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 6ch]
        lea ecx, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 2A C4 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax - 8], 0
        ; Exact mapped bytes 74 77: je 0x411b77
        __asm _emit 0x74
        __asm _emit 0x77
        cmp byte ptr [eax], 5bh
        ; Exact mapped bytes 75 72: jne 0x411b77
        __asm _emit 0x75
        __asm _emit 0x72
        push 5dh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0F C5 01 00: call 0x42e01e
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 7C 62: jl 0x411b77
        __asm _emit 0x7c
        __asm _emit 0x62
        inc ebx
        lea eax, [ebp - 2ch]
        push ebx
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BE AB 01 00: call 0x42c6e1
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 14h]
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes E8 2D C4 01 00: call 0x42df5d
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 6F C0 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx - 8]
        cmp ebx, eax
        ; Exact mapped bytes 7D 07: jge 0x411b4d
        __asm _emit 0x7d
        __asm _emit 0x07
        cmp byte ptr [ebx + ecx], 20h
        ; Exact mapped bytes 75 01: jne 0x411b4d
        __asm _emit 0x75
        __asm _emit 0x01
        inc ebx
        sub eax, ebx
        lea ecx, [ebp - 10h]
        push eax
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 09 AB 01 00: call 0x42c665
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        mov byte ptr [ebp - 4], 3
        ; Exact mapped bytes E8 7B C1 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 36 C0 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 80: jmp 0x411af7
        __asm _emit 0xeb
        __asm _emit 0x80
        push esi
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A1 C3 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 38h]
        push 43d598h
        push eax
        ; Exact mapped bytes E8 BC C2 01 00: call 0x42de4e
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 24h]
        push eax
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebx + 10h]
        ; Exact mapped bytes E8 BB C3 01 00: call 0x42df5d
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 38h]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 FD BF 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push esi
        push eax
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 1E C2 01 00: call 0x42ddda
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebx + 0ch]
        mov byte ptr [ebp - 4], 5
        ; Exact mapped bytes E8 94 C3 01 00: call 0x42df5d
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 D6 BF 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 16h]
        push eax
        lea eax, [ebp - 26ch]
        push edi
        push eax
        lea eax, [ebp - 20h]
        push eax
        lea eax, [ebp - 1ch]
        push eax
        mov eax, dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        push dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 28h]
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 5B A9 01 00: call 0x42c558
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, eax
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 29 C1 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 92 FE FF FF: jmp 0x411aa2
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 8F BF 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 83 BF 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop ebx
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
