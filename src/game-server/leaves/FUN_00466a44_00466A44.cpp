// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466A44 .. +0x525 bytes.
extern "C" __declspec(naked) void FUN_00466a44_00466A44() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bb8ah
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
        sub esp, 0cch
        push edi
        push ecx
        lea edi, [ebp - 0d8h]
        mov ecx, 33h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0d0h], ecx
        mov eax, dword ptr [ebp - 0d0h]
        add eax, 1b0h
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 15 86 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 A7 04 00 00: je 0x466f4b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 16ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC 0B FE FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 18h], 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 3F A4 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        and edx, 0ffffh
        mov dword ptr [ebp - 0d4h], edx
        cmp dword ptr [ebp - 0d4h], 8
        ; Exact mapped bytes 0F 87 D5 00 00 00: ja 0x466bc8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes FF 24 85 69 6F 46 00: jmp dword ptr [eax*4 + 0x466f69]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x6f
        __asm _emit 0x46
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        push 5badd4h
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 E9 6F 08 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 4aah
        push 5baddch
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 D5 6F 08 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x466bc8
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 4cah
        push 5bade0h
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 BC 6F 08 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x466bc8
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0be2h
        push 5bade4h
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 A3 6F 08 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 6C: jmp 0x466bc8
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov dword ptr [ebp - 18h], 1308h
        push 5bade8h
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 8D 6F 08 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 56: jmp 0x466bc8
        __asm _emit 0xeb
        __asm _emit 0x56
        mov dword ptr [ebp - 18h], 12f6h
        push 5badech
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 77 6F 08 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 40: jmp 0x466bc8
        __asm _emit 0xeb
        __asm _emit 0x40
        mov dword ptr [ebp - 18h], 1c7ch
        push 5badf0h
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 61 6F 08 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 2A: jmp 0x466bc8
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov dword ptr [ebp - 18h], 1d4eh
        push 5badf4h
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 4B 6F 08 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x466bc8
        __asm _emit 0xeb
        __asm _emit 0x14
        mov dword ptr [ebp - 18h], 0ea60h
        push 5badf8h
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 35 6F 08 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 8B 51 0A: mov dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0a
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        add edx, ecx
        imul edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes DB 45 E8: fild dword ptr [ebp - 0x18]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes D8 0D 5C 1C 58 00: fmul dword ptr [0x581c5c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 F7 28 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes DB 45 E8: fild dword ptr [ebp - 0x18]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes D8 0D 5C 1C 58 00: fmul dword ptr [0x581c5c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 E6 28 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes DB 45 E8: fild dword ptr [ebp - 0x18]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes D8 0D 18 1C 58 00: fmul dword ptr [0x581c18]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 D5 28 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 D5 A2 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 0d0h]
        cmp dword ptr [edx + 134h], 0
        ; Exact mapped bytes 7C 57: jl 0x466c9c
        __asm _emit 0x7c
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 0d0h]
        cmp dword ptr [eax + 124h], 0
        ; Exact mapped bytes 7C 48: jl 0x466c9c
        __asm _emit 0x7c
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx + 124h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7F 37: jg 0x466c9c
        __asm _emit 0x7f
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax + 144h]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7F 26: jg 0x466c9c
        __asm _emit 0x7f
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 13ch]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 77 15: ja 0x466c9c
        __asm _emit 0x77
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx + 120h]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 86 94 02 00 00: jbe 0x466f30
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0b8h]
        ; Exact mapped bytes E8 99 16 00 00: call 0x468340
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push 88h
        push 0
        lea eax, [ebp - 0b8h]
        push eax
        ; Exact mapped bytes E8 B6 26 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 80h], 102h
        lea ecx, [ebp - 0c0h]
        push ecx
        ; Exact mapped bytes E8 C7 86 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 D2 A9 0C 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa9
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0d0h]
        add edx, 1b0h
        push edx
        lea eax, [ebp - 98h]
        push eax
        ; Exact mapped bytes E8 4B 31 04 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 78h], 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 A3 A2 0C 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 74h]
        push ecx
        ; Exact mapped bytes E8 2F 31 04 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 134h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 144h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 89 A5 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa5
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x466e26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 6E A5 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [eax + 1b0h]
        add ecx, 1
        mov dword ptr [ebp - 0bch], ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 4B A5 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [eax + 1b0h], ecx
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 0b8h], edx
        push 0
        push 88h
        lea eax, [ebp - 0b8h]
        push eax
        push 0
        push 102h
        push 80018006h
        mov ecx, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 05 A5 F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 0C 04 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 144h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 13ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 120h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 124h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx + 134h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 0d0h]
        add edx, 1b0h
        push edx
        push 5badfch
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 C6 7A 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 34h
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 0c4h], esp
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 CF 65 08 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        push 0
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 AB DB FE FF: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0d0h]
        mov ecx, dword ptr [eax + 120h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 76 2D: jbe 0x466efb
        __asm _emit 0x76
        __asm _emit 0x2d
        mov dword ptr [ebp - 0c8h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 68 69 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 59 69 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes EB 52: jmp 0x466f4d
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7B 07 FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 33 69 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 24 69 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0cch]
        ; Exact mapped bytes EB 1D: jmp 0x466f4d
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 10 69 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 01 69 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
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
        add esp, 0d8h
        cmp ebp, esp
        ; Exact mapped bytes E8 7B 18 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
