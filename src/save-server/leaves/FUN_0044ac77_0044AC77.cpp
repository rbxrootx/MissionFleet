// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044AC77 .. +0x67A bytes.
extern "C" __declspec(naked) void FUN_0044ac77_0044AC77() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c728h
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
        sub esp, 0b8h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0bch], ecx
        mov eax, dword ptr [ebp + 14h]
        add eax, 12h
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 79: je 0x44ad26
        __asm _emit 0x74
        __asm _emit 0x79
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 94h]
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 4D A0: mov word ptr [ebp - 0x60], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa0
        mov edx, dword ptr [ebp - 94h]
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 89 45 A2: mov word ptr [ebp - 0x5e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa2
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes 66 8B 51 10: mov dx, word ptr [ecx + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 55 A4: mov word ptr [ebp - 0x5c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xa4
        mov eax, dword ptr [ebp - 94h]
        ; Exact mapped bytes 66 8B 48 12: mov cx, word ptr [eax + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x12
        ; Exact mapped bytes 66 89 4D A6: mov word ptr [ebp - 0x5a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa6
        mov edx, dword ptr [ebp - 94h]
        ; Exact mapped bytes 66 8B 42 14: mov ax, word ptr [edx + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 45 A8: mov word ptr [ebp - 0x58], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa8
        lea ecx, [ebp - 68h]
        mov dword ptr [ebp + 14h], ecx
        mov edx, dword ptr [ebp - 94h]
        add edx, 18h
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BF 48 0A: movsx ecx, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BF 42 0E: movsx eax, word ptr [edx + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x0e
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BF 51 08: movsx edx, word ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BF 48 0C: movsx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x0c
        add edx, ecx
        push edx
        mov edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BF 42 0A: movsx eax, word ptr [edx + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x0a
        push eax
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BF 51 08: movsx edx, word ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x08
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 75 74 0E 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x74
        __asm _emit 0x0e
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 4C BD 68 00: call dword ptr [0x68bd4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 0
        cmp dword ptr [ebp + 20h], 4
        ; Exact mapped bytes 72 59: jb 0x44add7
        __asm _emit 0x72
        __asm _emit 0x59
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp + 20h]
        sub eax, 4
        mov dword ptr [ebp + 20h], eax
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 76 33: jbe 0x44add7
        __asm _emit 0x76
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        ; Exact mapped bytes FF 15 0C BB 68 00: call dword ptr [0x68bb0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 98h]
        mov ecx, dword ptr [ebp + 1ch]
        lea edx, [ecx + eax*2]
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp - 98h]
        shl eax, 1
        mov ecx, dword ptr [ebp + 20h]
        sub ecx, eax
        mov dword ptr [ebp + 20h], ecx
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ffffh
        cmp edx, 378h
        ; Exact mapped bytes 75 1A: jne 0x44ae02
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 14: je 0x44ae02
        __asm _emit 0x74
        __asm _emit 0x14
        push 242h
        push 67288ch
        ; Exact mapped bytes E8 43 DF 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xdf
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44ae02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x44add7
        __asm _emit 0x75
        __asm _emit 0xcf
        mov dword ptr [ebp - 24h], 0
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 F0 9E 0D 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 66 C7 85 7C FF FF FF 00 00: mov word ptr [ebp - 0x84], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], 0
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 0ffffh
        cmp ecx, 37ah
        ; Exact mapped bytes 74 15: je 0x44ae5e
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ffffh
        cmp edx, 37bh
        ; Exact mapped bytes 0F 85 52 02 00 00: jne 0x44b0b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 0a0h]
        sub edx, 4
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp + 1ch]
        add eax, 4
        mov dword ptr [ebp + 1ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0a4h], edx
        mov eax, dword ptr [ebp - 9ch]
        sub eax, 4
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        cmp dword ptr [ebp - 0a4h], 1
        ; Exact mapped bytes 74 14: je 0x44aec1
        __asm _emit 0x74
        __asm _emit 0x14
        push 255h
        push 67288ch
        ; Exact mapped bytes E8 84 DE 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44aec1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x44aea4
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 9ch]
        sub eax, 4
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 0F 86 AC 01 00 00: jbe 0x44b098
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp - 9ch]
        sub edx, 4
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 8D 58 FF FF FF: mov word ptr [ebp - 0xa8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 1ch]
        add edx, 2
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp - 9ch]
        sub eax, 2
        mov dword ptr [ebp - 9ch], eax
        cmp dword ptr [ebp - 0ach], 80010001h
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x44b023
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 9ch]
        sub eax, 4
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 9ch]
        sub ecx, 4
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp + 1ch]
        cmp dword ptr [eax], 80010002h
        ; Exact mapped bytes 74 14: je 0x44afa6
        __asm _emit 0x74
        __asm _emit 0x14
        push 270h
        push 67288ch
        ; Exact mapped bytes E8 9F DD 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdd
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44afa6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x44af87
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp + 1ch]
        add edx, 4
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp - 9ch]
        sub eax, 4
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 4
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp - 9ch]
        sub edx, 4
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 B5 1B 08 00: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x1b
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 70 9D 0D 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp + 1ch], edx
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 5E 9D 0D 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        add eax, 1
        mov ecx, dword ptr [ebp - 9ch]
        sub ecx, eax
        mov dword ptr [ebp - 9ch], ecx
        ; Exact mapped bytes 66 8B 95 58 FF FF FF: mov dx, word ptr [ebp - 0xa8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 95 7C FF FF FF: mov word ptr [ebp - 0x84], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 70: jmp 0x44b093
        __asm _emit 0xeb
        __asm _emit 0x70
        push 27bh
        push 67288ch
        push 1ch
        ; Exact mapped bytes E8 9F 10 08 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 26: je 0x44b070
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 66 8B 85 58 FF FF FF: mov ax, word ptr [ebp - 0xa8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 1A 93 00 00: call 0x454382
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x44b07a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes E9 47 FE FF FF: jmp 0x44aedf
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 20h]
        sub edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp + 20h], edx
        ; Exact mapped bytes 66 8B 45 18: mov ax, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 66 2D 04 00: sub ax, 4
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 18: mov word ptr [ebp + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 28h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        cmp edx, 7bh
        ; Exact mapped bytes 75 13: jne 0x44b0d0
        __asm _emit 0x75
        __asm _emit 0x13
        lea eax, [ebp - 7ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 C0 C2 68 00: call dword ptr [0x68c2c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 11: jmp 0x44b0e1
        __asm _emit 0xeb
        __asm _emit 0x11
        lea edx, [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 15 E4 C2 68 00: call dword ptr [0x68c2e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 7D 41: jge 0x44b128
        __asm _emit 0x7d
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        push 672914h
        ; Exact mapped bytes E8 20 55 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x55
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 6ch]
        push edx
        push 67293ch
        ; Exact mapped bytes E8 0F 55 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x55
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 28h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 7bh
        ; Exact mapped bytes 74 12: je 0x44b128
        __asm _emit 0x74
        __asm _emit 0x12
        push 672958h
        push 672984h
        ; Exact mapped bytes E8 F0 54 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        push 0
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 C2 8D 0B 00: call 0x503efc
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 0ffffh
        sub ecx, 378h
        neg ecx
        sbb ecx, ecx
        lea edx, [ebp - 50h]
        and ecx, edx
        mov dword ptr [ebp - 88h], ecx
        mov dword ptr [ebp - 90h], 0
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 0F 8C 0D 01 00 00: jl 0x44b27d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 0C 00 00: call 0x44be4a
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x44b27d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ffffh
        xor eax, eax
        cmp edx, 377h
        sete al
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 10: mov ax, word ptr [edx + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x10
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        push eax
        push 0
        lea ecx, [ebp - 7ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 34h]
        ; Exact mapped bytes E8 BA 0F 00 00: call 0x44c188
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x44b27d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 75 14: jne 0x44b1f3
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a7h
        push 67288ch
        ; Exact mapped bytes E8 52 DB 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44b1f3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x44b1d6
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 FE 43 00 00: call 0x44f604
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        push 13h
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes FF 15 54 BF 68 00: call dword ptr [0x68bf54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 8ch], edx
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        add ecx, 9ch
        ; Exact mapped bytes E8 9E 18 08 00: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes 66 8B 95 7C FF FF FF: mov dx, word ptr [ebp - 0x84]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 91 90 00 00 00: mov word ptr [ecx + 0x90], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 94h], ecx
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 98h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 0A: je 0x44b28d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes FF 15 5C BB 68 00: call dword ptr [0x68bb5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 11: je 0x44b2a7
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx + 20h]
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x44b2b1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 0b8h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 9A 8D 0B 00: call 0x504063
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 14 16 08 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0b8h]
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
