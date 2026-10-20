// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D452 .. +0x1341 bytes.
extern "C" __declspec(naked) void FUN_5884d452_5884D452() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 10h]
        mov eax, ecx
        push ebx
        push esi
        push edi
        sub eax, 0
        ; Exact mapped bytes 0F 84 26 13 00 00: je 0x5884e78c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 84 F7 12 00 00: je 0x5884e766
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 84 BE 12 00 00: je 0x5884e736
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 84 6F 12 00 00: je 0x5884e6f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 0F 84 F7 11 00 00: je 0x5884e681
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov esi, dword ptr [ebp + 8]
        or edi, 0ffffffffh
        inc ebx
        cmp ecx, 20h
        ; Exact mapped bytes 0F 82 F0 03 00 00: jb 0x5884d88f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 74 72: je 0x5884d517
        __asm _emit 0x74
        __asm _emit 0x72
        movzx ecx, al
        movzx eax, byte ptr [edx]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d4b8
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 29 12 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 1]
        movzx eax, byte ptr [edx + 1]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d4d5
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 0C 12 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edx + 2]
        movzx ecx, byte ptr [esi + 2]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d4f2
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 EF 11 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 3]
        movzx eax, byte ptr [edx + 3]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d50f
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 D2 11 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 74 74: je 0x5884d593
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx + 4]
        movzx ecx, byte ptr [esi + 4]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d534
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 AD 11 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edx + 5]
        movzx ecx, byte ptr [esi + 5]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d551
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 90 11 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edx + 6]
        movzx ecx, byte ptr [esi + 6]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d56e
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 73 11 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edx + 7]
        movzx ecx, byte ptr [esi + 7]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d58b
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 56 11 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 74 73: je 0x5884d60e
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx + 8]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d5af
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 32 11 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 9]
        movzx eax, byte ptr [edx + 9]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d5cc
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 15 11 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 0ah]
        movzx eax, byte ptr [edx + 0ah]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d5e9
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 F8 10 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 0bh]
        movzx eax, byte ptr [edx + 0bh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d606
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 DB 10 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 74 74: je 0x5884d68a
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx + 0ch]
        movzx ecx, byte ptr [esi + 0ch]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d62b
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 B6 10 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 0dh]
        movzx eax, byte ptr [edx + 0dh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d648
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 99 10 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 0eh]
        movzx eax, byte ptr [edx + 0eh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d665
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 7C 10 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 0fh]
        movzx eax, byte ptr [edx + 0fh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d682
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 5F 10 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10h]
        cmp eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 74 73: je 0x5884d705
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx + 10h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d6a6
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 3B 10 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 11h]
        movzx eax, byte ptr [edx + 11h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d6c3
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 1E 10 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 12h]
        movzx eax, byte ptr [edx + 12h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d6e0
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 01 10 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 13h]
        movzx eax, byte ptr [edx + 13h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d6fd
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 E4 0F 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 14h]
        cmp eax, dword ptr [edx + 14h]
        ; Exact mapped bytes 74 74: je 0x5884d781
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx + 14h]
        movzx ecx, byte ptr [esi + 14h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d722
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 BF 0F 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 15h]
        movzx eax, byte ptr [edx + 15h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d73f
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A2 0F 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 16h]
        movzx eax, byte ptr [edx + 16h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d75c
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 85 0F 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 17h]
        movzx eax, byte ptr [edx + 17h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d779
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 68 0F 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 18h]
        cmp eax, dword ptr [edx + 18h]
        ; Exact mapped bytes 74 73: je 0x5884d7fc
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx + 18h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d79d
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 44 0F 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 19h]
        movzx eax, byte ptr [edx + 19h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d7ba
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 27 0F 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 1ah]
        movzx eax, byte ptr [edx + 1ah]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d7d7
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 0A 0F 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 1bh]
        movzx eax, byte ptr [edx + 1bh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d7f4
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 ED 0E 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 74 74: je 0x5884d878
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx + 1ch]
        movzx ecx, byte ptr [esi + 1ch]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d819
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 C8 0E 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 1dh]
        movzx eax, byte ptr [edx + 1dh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d836
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 AB 0E 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 1eh]
        movzx eax, byte ptr [edx + 1eh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d853
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 8E 0E 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 1fh]
        movzx eax, byte ptr [edx + 1fh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d870
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 71 0E 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push 20h
        pop eax
        sub ecx, eax
        add esi, eax
        add edx, eax
        mov dword ptr [ebp + 10h], ecx
        cmp ecx, eax
        ; Exact mapped bytes 0F 83 10 FC FF FF: jae 0x5884d49f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, ecx
        add edx, ecx
        ; Exact mapped bytes FF 24 8D 96 E7 84 58: jmp dword ptr [ecx*4 + 0x5884e796]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0xe7
        __asm _emit 0x84
        __asm _emit 0x58
        mov eax, dword ptr [esi - 1ch]
        cmp eax, dword ptr [edx - 1ch]
        ; Exact mapped bytes 74 74: je 0x5884d916
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 1ch]
        movzx ecx, byte ptr [esi - 1ch]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d8b7
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 2A 0E 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1bh]
        movzx eax, byte ptr [edx - 1bh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d8d4
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 0D 0E 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1ah]
        movzx eax, byte ptr [edx - 1ah]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d8f1
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 F0 0D 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 19h]
        movzx eax, byte ptr [edx - 19h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d90e
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 D3 0D 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 18h]
        cmp eax, dword ptr [edx - 18h]
        ; Exact mapped bytes 74 74: je 0x5884d992
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 18h]
        movzx ecx, byte ptr [esi - 18h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d933
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 AE 0D 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 17h]
        movzx eax, byte ptr [edx - 17h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d950
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 91 0D 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 16h]
        movzx eax, byte ptr [edx - 16h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d96d
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 74 0D 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 15h]
        movzx eax, byte ptr [edx - 15h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d98a
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 57 0D 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 14h]
        cmp eax, dword ptr [edx - 14h]
        ; Exact mapped bytes 74 74: je 0x5884da0e
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 14h]
        movzx ecx, byte ptr [esi - 14h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d9af
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 32 0D 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 13h]
        movzx eax, byte ptr [edx - 13h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d9cc
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 15 0D 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 12h]
        movzx eax, byte ptr [edx - 12h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884d9e9
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 F8 0C 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 11h]
        movzx eax, byte ptr [edx - 11h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884da06
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 DB 0C 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 10h]
        cmp eax, dword ptr [edx - 10h]
        ; Exact mapped bytes 74 74: je 0x5884da8a
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 10h]
        movzx ecx, byte ptr [esi - 10h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884da2b
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 B6 0C 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0fh]
        movzx eax, byte ptr [edx - 0fh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884da48
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 99 0C 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0eh]
        movzx eax, byte ptr [edx - 0eh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884da65
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 7C 0C 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0dh]
        movzx eax, byte ptr [edx - 0dh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884da82
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 5F 0C 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 0ch]
        cmp eax, dword ptr [edx - 0ch]
        ; Exact mapped bytes 74 74: je 0x5884db06
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 0ch]
        movzx ecx, byte ptr [esi - 0ch]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884daa7
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 3A 0C 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0bh]
        movzx eax, byte ptr [edx - 0bh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dac4
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 1D 0C 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0ah]
        movzx eax, byte ptr [edx - 0ah]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dae1
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 00 0C 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 9]
        movzx eax, byte ptr [edx - 9]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dafe
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 E3 0B 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 8]
        cmp eax, dword ptr [edx - 8]
        ; Exact mapped bytes 74 74: je 0x5884db82
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 8]
        movzx ecx, byte ptr [esi - 8]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884db23
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 BE 0B 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 7]
        movzx eax, byte ptr [edx - 7]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884db40
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A1 0B 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 6]
        movzx eax, byte ptr [edx - 6]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884db5d
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 84 0B 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 5]
        movzx eax, byte ptr [edx - 5]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884db7a
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 67 0B 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 4]
        cmp eax, dword ptr [edx - 4]
        ; Exact mapped bytes 74 71: je 0x5884dbfb
        __asm _emit 0x74
        __asm _emit 0x71
        movzx ecx, al
        movzx eax, byte ptr [edx - 4]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884db9e
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 43 0B 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 3]
        movzx eax, byte ptr [edx - 3]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dbbb
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 26 0B 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 2]
        movzx eax, byte ptr [edx - 2]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dbd8
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 09 0B 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1]
        movzx eax, byte ptr [edx - 1]
        sub ecx, eax
        ; Exact mapped bytes 74 07: je 0x5884dbf3
        __asm _emit 0x74
        __asm _emit 0x07
        test ecx, ecx
        cmovg edi, ebx
        mov ecx, edi
        test ecx, ecx
        ; Exact mapped bytes 0F 85 EE 0A 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes E9 E7 0A 00 00: jmp 0x5884e6e9
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 1dh]
        cmp eax, dword ptr [edx - 1dh]
        ; Exact mapped bytes 74 73: je 0x5884dc7d
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 1dh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dc1e
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 C3 0A 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1ch]
        movzx eax, byte ptr [edx - 1ch]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dc3b
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A6 0A 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1bh]
        movzx eax, byte ptr [edx - 1bh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dc58
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 89 0A 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1ah]
        movzx eax, byte ptr [edx - 1ah]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dc75
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 6C 0A 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 19h]
        cmp eax, dword ptr [edx - 19h]
        ; Exact mapped bytes 74 74: je 0x5884dcf9
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 19h]
        movzx ecx, byte ptr [esi - 19h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dc9a
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 47 0A 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 18h]
        movzx eax, byte ptr [edx - 18h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dcb7
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 2A 0A 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 17h]
        movzx eax, byte ptr [edx - 17h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dcd4
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 0D 0A 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 16h]
        movzx eax, byte ptr [edx - 16h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dcf1
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 F0 09 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 15h]
        cmp eax, dword ptr [edx - 15h]
        ; Exact mapped bytes 74 74: je 0x5884dd75
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 15h]
        movzx ecx, byte ptr [esi - 15h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dd16
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 CB 09 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 14h]
        movzx eax, byte ptr [edx - 14h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dd33
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 AE 09 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 13h]
        movzx eax, byte ptr [edx - 13h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dd50
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 91 09 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 12h]
        movzx eax, byte ptr [edx - 12h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dd6d
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 74 09 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 11h]
        cmp eax, dword ptr [edx - 11h]
        ; Exact mapped bytes 74 73: je 0x5884ddf0
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 11h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dd91
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 50 09 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 10h]
        movzx eax, byte ptr [edx - 10h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884ddae
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 33 09 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0fh]
        movzx eax, byte ptr [edx - 0fh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884ddcb
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 16 09 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0eh]
        movzx eax, byte ptr [edx - 0eh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dde8
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 F9 08 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 0dh]
        cmp eax, dword ptr [edx - 0dh]
        ; Exact mapped bytes 74 74: je 0x5884de6c
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 0dh]
        movzx ecx, byte ptr [esi - 0dh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884de0d
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 D4 08 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0ch]
        movzx eax, byte ptr [edx - 0ch]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884de2a
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 B7 08 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0bh]
        movzx eax, byte ptr [edx - 0bh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884de47
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 9A 08 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0ah]
        movzx eax, byte ptr [edx - 0ah]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884de64
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 7D 08 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 9]
        cmp eax, dword ptr [edx - 9]
        ; Exact mapped bytes 74 73: je 0x5884dee7
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 9]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884de88
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 59 08 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 8]
        movzx eax, byte ptr [edx - 8]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dea5
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 3C 08 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 7]
        movzx eax, byte ptr [edx - 7]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dec2
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 1F 08 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 6]
        movzx eax, byte ptr [edx - 6]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dedf
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 02 08 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 5]
        cmp eax, dword ptr [edx - 5]
        ; Exact mapped bytes 74 74: je 0x5884df63
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 5]
        movzx ecx, byte ptr [esi - 5]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884df04
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 DD 07 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 4]
        movzx eax, byte ptr [edx - 4]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884df21
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 C0 07 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 3]
        movzx eax, byte ptr [edx - 3]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884df3e
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A3 07 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 2]
        movzx eax, byte ptr [edx - 2]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884df5b
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 86 07 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1]
        movzx eax, byte ptr [edx - 1]
        ; Exact mapped bytes E9 6E 07 00 00: jmp 0x5884e6de
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 1eh]
        cmp eax, dword ptr [edx - 1eh]
        ; Exact mapped bytes 74 73: je 0x5884dfeb
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 1eh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884df8c
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 55 07 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1dh]
        movzx eax, byte ptr [edx - 1dh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dfa9
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 38 07 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1ch]
        movzx eax, byte ptr [edx - 1ch]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dfc6
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 1B 07 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1bh]
        movzx eax, byte ptr [edx - 1bh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884dfe3
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 FE 06 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 1ah]
        cmp eax, dword ptr [edx - 1ah]
        ; Exact mapped bytes 74 73: je 0x5884e066
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 1ah]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e007
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 DA 06 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 19h]
        movzx eax, byte ptr [edx - 19h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e024
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 BD 06 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 18h]
        movzx eax, byte ptr [edx - 18h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e041
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A0 06 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 17h]
        movzx eax, byte ptr [edx - 17h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e05e
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 83 06 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 16h]
        cmp eax, dword ptr [edx - 16h]
        ; Exact mapped bytes 74 73: je 0x5884e0e1
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 16h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e082
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 5F 06 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 15h]
        movzx eax, byte ptr [edx - 15h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e09f
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 42 06 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 14h]
        movzx eax, byte ptr [edx - 14h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e0bc
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 25 06 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 13h]
        movzx eax, byte ptr [edx - 13h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e0d9
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 08 06 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 12h]
        cmp eax, dword ptr [edx - 12h]
        ; Exact mapped bytes 74 73: je 0x5884e15c
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 12h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e0fd
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 E4 05 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 11h]
        movzx eax, byte ptr [edx - 11h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e11a
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 C7 05 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 10h]
        movzx eax, byte ptr [edx - 10h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e137
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 AA 05 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0fh]
        movzx eax, byte ptr [edx - 0fh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e154
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 8D 05 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 0eh]
        cmp eax, dword ptr [edx - 0eh]
        ; Exact mapped bytes 74 73: je 0x5884e1d7
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 0eh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e178
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 69 05 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0dh]
        movzx eax, byte ptr [edx - 0dh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e195
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 4C 05 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0ch]
        movzx eax, byte ptr [edx - 0ch]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e1b2
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 2F 05 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0bh]
        movzx eax, byte ptr [edx - 0bh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e1cf
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 12 05 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 0ah]
        cmp eax, dword ptr [edx - 0ah]
        ; Exact mapped bytes 74 74: je 0x5884e253
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 0ah]
        movzx ecx, byte ptr [esi - 0ah]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e1f4
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 ED 04 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 9]
        movzx eax, byte ptr [edx - 9]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e211
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 D0 04 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 8]
        movzx eax, byte ptr [edx - 8]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e22e
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 B3 04 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 7]
        movzx eax, byte ptr [edx - 7]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e24b
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 96 04 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 6]
        cmp eax, dword ptr [edx - 6]
        ; Exact mapped bytes 74 73: je 0x5884e2ce
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 6]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e26f
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 72 04 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 5]
        movzx eax, byte ptr [edx - 5]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e28c
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 55 04 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 4]
        movzx eax, byte ptr [edx - 4]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e2a9
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 38 04 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 3]
        movzx eax, byte ptr [edx - 3]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e2c6
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 1B 04 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 FE: mov ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xfe
        ; Exact mapped bytes 66 3B 42 FE: cmp ax, word ptr [edx - 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x42
        __asm _emit 0xfe
        ; Exact mapped bytes 0F 84 1F F9 FF FF: je 0x5884dbfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 7D 03 00 00: jmp 0x5884e65e
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 1fh]
        cmp eax, dword ptr [edx - 1fh]
        ; Exact mapped bytes 74 74: je 0x5884e35d
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 1fh]
        movzx ecx, byte ptr [esi - 1fh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e2fe
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 E3 03 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1eh]
        movzx eax, byte ptr [edx - 1eh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e31b
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 C6 03 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1dh]
        movzx eax, byte ptr [edx - 1dh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e338
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A9 03 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1ch]
        movzx eax, byte ptr [edx - 1ch]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e355
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 8C 03 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 1bh]
        cmp eax, dword ptr [edx - 1bh]
        ; Exact mapped bytes 74 73: je 0x5884e3d8
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 1bh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e379
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 68 03 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 1ah]
        movzx eax, byte ptr [edx - 1ah]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e396
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 4B 03 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 19h]
        movzx eax, byte ptr [edx - 19h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e3b3
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 2E 03 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 18h]
        movzx eax, byte ptr [edx - 18h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e3d0
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 11 03 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 17h]
        cmp eax, dword ptr [edx - 17h]
        ; Exact mapped bytes 74 73: je 0x5884e453
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 17h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e3f4
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 ED 02 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 16h]
        movzx eax, byte ptr [edx - 16h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e411
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 D0 02 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 15h]
        movzx eax, byte ptr [edx - 15h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e42e
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 B3 02 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 14h]
        movzx eax, byte ptr [edx - 14h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e44b
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 96 02 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 13h]
        cmp eax, dword ptr [edx - 13h]
        ; Exact mapped bytes 74 74: je 0x5884e4cf
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 13h]
        movzx ecx, byte ptr [esi - 13h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e470
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 71 02 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 12h]
        movzx eax, byte ptr [edx - 12h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e48d
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 54 02 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 11h]
        movzx eax, byte ptr [edx - 11h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e4aa
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 37 02 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 10h]
        movzx eax, byte ptr [edx - 10h]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e4c7
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 1A 02 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 0fh]
        cmp eax, dword ptr [edx - 0fh]
        ; Exact mapped bytes 74 73: je 0x5884e54a
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 0fh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e4eb
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 F6 01 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0eh]
        movzx eax, byte ptr [edx - 0eh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e508
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 D9 01 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0dh]
        movzx eax, byte ptr [edx - 0dh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e525
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 BC 01 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0ch]
        movzx eax, byte ptr [edx - 0ch]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e542
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 9F 01 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 0bh]
        cmp eax, dword ptr [edx - 0bh]
        ; Exact mapped bytes 74 73: je 0x5884e5c5
        __asm _emit 0x74
        __asm _emit 0x73
        movzx ecx, al
        movzx eax, byte ptr [edx - 0bh]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e566
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 7B 01 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 0ah]
        movzx eax, byte ptr [edx - 0ah]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e583
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 5E 01 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 9]
        movzx eax, byte ptr [edx - 9]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e5a0
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 8]
        movzx eax, byte ptr [edx - 8]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e5bd
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 24 01 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 7]
        cmp eax, dword ptr [edx - 7]
        ; Exact mapped bytes 74 74: je 0x5884e641
        __asm _emit 0x74
        __asm _emit 0x74
        movzx eax, byte ptr [edx - 7]
        movzx ecx, byte ptr [esi - 7]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e5e2
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 FF 00 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 6]
        movzx eax, byte ptr [edx - 6]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e5ff
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 E2 00 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 5]
        movzx eax, byte ptr [edx - 5]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e61c
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 4]
        movzx eax, byte ptr [edx - 4]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e639
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi - 3]
        movzx eax, byte ptr [edx - 3]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e656
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edx - 2]
        movzx ecx, byte ptr [esi - 2]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e673
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 72: jne 0x5884e6e9
        __asm _emit 0x75
        __asm _emit 0x72
        movzx eax, byte ptr [edx - 1]
        movzx ecx, byte ptr [esi - 1]
        ; Exact mapped bytes EB 5D: jmp 0x5884e6de
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 0ch]
        push -1
        pop edi
        movzx ecx, byte ptr [edx]
        movzx eax, byte ptr [esi]
        push 1
        pop ebx
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e6a0
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 45: jne 0x5884e6e9
        __asm _emit 0x75
        __asm _emit 0x45
        movzx ecx, byte ptr [edx + 1]
        movzx eax, byte ptr [esi + 1]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e6b9
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 2C: jne 0x5884e6e9
        __asm _emit 0x75
        __asm _emit 0x2c
        movzx ecx, byte ptr [edx + 2]
        movzx eax, byte ptr [esi + 2]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e6d2
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 13: jne 0x5884e6e9
        __asm _emit 0x75
        __asm _emit 0x13
        movzx ecx, byte ptr [edx + 3]
        movzx eax, byte ptr [esi + 3]
        sub ecx, eax
        ; Exact mapped bytes 74 07: je 0x5884e6e9
        __asm _emit 0x74
        __asm _emit 0x07
        test ecx, ecx
        cmovg edi, ebx
        mov ecx, edi
        mov eax, ecx
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x5884e78e
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 0ch]
        push -1
        pop edi
        movzx ecx, byte ptr [edx]
        movzx eax, byte ptr [esi]
        push 1
        pop ebx
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e70f
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x5884e6e9
        __asm _emit 0x75
        __asm _emit 0xd6
        movzx ecx, byte ptr [edx + 1]
        movzx eax, byte ptr [esi + 1]
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e728
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 BD: jne 0x5884e6e9
        __asm _emit 0x75
        __asm _emit 0xbd
        movzx ecx, byte ptr [edx + 2]
        movzx eax, byte ptr [esi + 2]
        ; Exact mapped bytes EB A8: jmp 0x5884e6de
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 0ch]
        push -1
        pop edi
        movzx ecx, byte ptr [edx]
        movzx eax, byte ptr [esi]
        push 1
        pop ebx
        sub ecx, eax
        ; Exact mapped bytes 74 09: je 0x5884e755
        __asm _emit 0x74
        __asm _emit 0x09
        test ecx, ecx
        mov eax, edi
        cmovg eax, ebx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 75 90: jne 0x5884e6e9
        __asm _emit 0x75
        __asm _emit 0x90
        movzx ecx, byte ptr [edx + 1]
        movzx eax, byte ptr [esi + 1]
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x5884e6de
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax]
        mov eax, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [eax]
        sub ecx, eax
        ; Exact mapped bytes 0F 84 6F FF FF FF: je 0x5884e6e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        or eax, 0ffffffffh
        inc edx
        test ecx, ecx
        cmovg eax, edx
        mov ecx, eax
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x5884e6e9
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
