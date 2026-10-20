// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00448A87 .. +0xE8C bytes.
extern "C" __declspec(naked) void FUN_00448a87_00448A87() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b03eh
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
        sub esp, 34ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 358h]
        mov ecx, 0d3h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 33ch], ecx
        mov dword ptr [ebp - 2f0h], 0bh
        mov dword ptr [ebp - 2f4h], 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 2f8h], ecx
        lea edx, [ebp - 2f0h]
        push edx
        lea eax, [ebp - 2f4h]
        push eax
        lea ecx, [ebp - 2f8h]
        push ecx
        ; Exact mapped bytes E8 C5 AC FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xac
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 EC 0D 00 00: je 0x4498f2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 F0 83 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 340h], ecx
        mov edx, dword ptr [ebp - 340h]
        sub edx, 1
        mov dword ptr [ebp - 340h], edx
        cmp dword ptr [ebp - 340h], 8
        ; Exact mapped bytes 0F 87 2C 0D 00 00: ja 0x44987d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 340h]
        ; Exact mapped bytes FF 24 85 13 99 44 00: jmp dword ptr [eax*4 + 0x449913]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x99
        __asm _emit 0x44
        __asm _emit 0x00
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 0A 37 00 00: call 0x44c270
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        push 0
        lea ecx, [ebp - 6ch]
        push ecx
        ; Exact mapped bytes E8 FD 07 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 34h], 1
        mov edx, dword ptr [ebp - 33ch]
        add edx, 150h
        mov esi, esp
        push edx
        lea eax, [ebp - 4ch]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 43 FC 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 2fch]
        push ecx
        ; Exact mapped bytes E8 EE 67 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 FC 8A 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 33ch]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 4E 87 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 6D: je 0x448c48
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 37 87 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ecx + 1b0h]
        add edx, 1
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 17 87 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 1b0h], edx
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 6ch], eax
        push 0
        push 40h
        lea ecx, [ebp - 6ch]
        push ecx
        push 0
        push 1
        push 80018006h
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 E3 86 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x86
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 EA E5 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 33ch]
        add eax, 150h
        push eax
        push 5b6ad8h
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 FA 5C 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        mov ecx, esp
        mov dword ptr [ebp - 300h], esp
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 04 48 0A 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 344h], eax
        push 1
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 E0 BD 00 00: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 39 0C 00 00: jmp 0x4498c6
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 08 36 00 00: call 0x44c2a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        push 44h
        push 0
        lea eax, [ebp - 0b4h]
        push eax
        ; Exact mapped bytes E8 C8 06 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 7ch], 2
        mov ecx, dword ptr [ebp - 33ch]
        add ecx, 150h
        mov esi, esp
        push ecx
        lea edx, [ebp - 94h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0B FB 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfb
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 304h]
        push eax
        ; Exact mapped bytes E8 B6 66 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0b0h]
        ; Exact mapped bytes E8 C1 89 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x89
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 55 8C: mov word ptr [ebp - 0x74], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x8c
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 40c78h]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 08 86 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x86
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7C: je 0x448d9d
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 F1 85 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [edx + 1b0h]
        add eax, 1
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 CE 85 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [edx + 1b0h], eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 0b4h], ecx
        push 0
        push 44h
        lea edx, [ebp - 0b4h]
        push edx
        push 0
        push 2
        push 80018006h
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 8E 85 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 95 E4 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        push edx
        mov eax, dword ptr [ebp - 33ch]
        add eax, 150h
        push eax
        push 5b6aech
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 9B 5B 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x5b
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, esp
        mov dword ptr [ebp - 308h], esp
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 A5 46 0A 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 348h], eax
        push 2
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 81 BC 00 00: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA 0A 00 00: jmp 0x4498c6
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 100h]
        ; Exact mapped bytes E8 D9 34 00 00: call 0x44c2d0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        push 48h
        push 0
        lea eax, [ebp - 100h]
        push eax
        ; Exact mapped bytes E8 69 05 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0c8h], 3
        mov ecx, dword ptr [ebp - 33ch]
        add ecx, 150h
        mov esi, esp
        push ecx
        lea edx, [ebp - 0e0h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A9 F9 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 30ch]
        push eax
        ; Exact mapped bytes E8 54 65 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 5F 88 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x88
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 33ch]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 0c4h], eax
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 99 84 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7C: je 0x448f0c
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 82 84 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [eax + 1b0h]
        add ecx, 1
        mov dword ptr [ebp - 104h], ecx
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 5F 84 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [eax + 1b0h], ecx
        mov edx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 100h], edx
        push 0
        push 48h
        lea eax, [ebp - 100h]
        push eax
        push 0
        push 3
        push 80018006h
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 1F 84 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 26 E3 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 33ch]
        add eax, 150h
        push eax
        push 5b6b34h
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 25 5A 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        mov ecx, esp
        mov dword ptr [ebp - 310h], esp
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 2F 45 0A 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 34ch], eax
        push 3
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 0B BB 00 00: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 64 09 00 00: jmp 0x4498c6
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 148h]
        ; Exact mapped bytes E8 93 33 00 00: call 0x44c300
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        push 44h
        push 0
        lea eax, [ebp - 148h]
        push eax
        ; Exact mapped bytes E8 F3 03 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 110h], 4
        mov ecx, dword ptr [ebp - 33ch]
        add ecx, 150h
        mov esi, esp
        push ecx
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 33 F8 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf8
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 314h]
        push eax
        ; Exact mapped bytes E8 DE 63 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 144h]
        ; Exact mapped bytes E8 E9 86 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 0E: mov dx, word ptr [ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0e
        ; Exact mapped bytes 66 89 95 F8 FE FF FF: mov word ptr [ebp - 0x108], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 8D FA FE FF FF: mov word ptr [ebp - 0x106], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 33ch]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 10ch], ecx
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 1C 83 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7C: je 0x449089
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 05 83 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ecx + 1b0h]
        add edx, 1
        mov dword ptr [ebp - 14ch], edx
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 E2 82 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ebp - 14ch]
        mov dword ptr [ecx + 1b0h], edx
        mov eax, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 148h], eax
        push 0
        push 44h
        lea ecx, [ebp - 148h]
        push ecx
        push 0
        push 4
        push 80018006h
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 A2 82 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 A9 E1 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        push ecx
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0E: mov ax, word ptr [edx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0e
        push eax
        mov ecx, dword ptr [ebp - 33ch]
        add ecx, 150h
        push ecx
        push 5b6b6ch
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 A4 58 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 10h
        mov ecx, esp
        mov dword ptr [ebp - 318h], esp
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 AE 43 0A 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x43
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 350h], eax
        push 4
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 8A B9 00 00: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 07 00 00: jmp 0x4498c6
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 190h]
        ; Exact mapped bytes E8 42 32 00 00: call 0x44c330
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 44h
        push 0
        lea ecx, [ebp - 190h]
        push ecx
        ; Exact mapped bytes E8 72 02 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 158h], 5
        mov edx, dword ptr [ebp - 33ch]
        add edx, 150h
        mov esi, esp
        push edx
        lea eax, [ebp - 170h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B2 F6 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf6
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 31ch]
        push ecx
        ; Exact mapped bytes E8 5D 62 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 68 85 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 33ch]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 154h], eax
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 AB 81 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7C: je 0x4491fa
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 94 81 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [eax + 1b0h]
        add ecx, 1
        mov dword ptr [ebp - 194h], ecx
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 71 81 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [ebp - 194h]
        mov dword ptr [eax + 1b0h], ecx
        mov edx, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 190h], edx
        push 0
        push 44h
        lea eax, [ebp - 190h]
        push eax
        push 0
        push 5
        push 80018006h
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 31 81 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 38 E0 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 33ch]
        add ecx, 150h
        push ecx
        push 5b6bbch
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 40 57 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, esp
        mov dword ptr [ebp - 320h], esp
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 4A 42 0A 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x42
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 354h], eax
        push 5
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 26 B8 00 00: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7F 06 00 00: jmp 0x4498c6
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1e8h]
        ; Exact mapped bytes E8 0E 31 00 00: call 0x44c360
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        push 0
        lea ecx, [ebp - 1e8h]
        push ecx
        ; Exact mapped bytes E8 0E 01 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1b0h], 6
        mov edx, dword ptr [ebp - 33ch]
        add edx, 150h
        mov esi, esp
        push edx
        lea eax, [ebp - 1c8h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4E F5 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 324h]
        push ecx
        ; Exact mapped bytes E8 F9 60 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 1e4h]
        ; Exact mapped bytes E8 04 84 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, dword ptr [ebp - 33ch]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 1ach], eax
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 47 80 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7C: je 0x44935e
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 30 80 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [eax + 1b0h]
        add ecx, 1
        mov dword ptr [ebp - 1ech], ecx
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 0D 80 FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [ebp - 1ech]
        mov dword ptr [eax + 1b0h], ecx
        mov edx, dword ptr [ebp - 1ech]
        mov dword ptr [ebp - 1e8h], edx
        push 0
        push 54h
        lea eax, [ebp - 1e8h]
        push eax
        push 0
        push 6
        push 80018006h
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 CD 7F FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 D4 DE 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xde
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 63 05 00 00: jmp 0x4498c6
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 234h]
        ; Exact mapped bytes E8 22 30 00 00: call 0x44c390
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 48h
        push 0
        lea edx, [ebp - 234h]
        push edx
        ; Exact mapped bytes E8 F2 FF 05 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1fch], 7
        mov eax, dword ptr [ebp - 33ch]
        add eax, 150h
        mov esi, esp
        push eax
        lea ecx, [ebp - 214h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 33 F4 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        lea edx, [ebp - 328h]
        push edx
        ; Exact mapped bytes E8 DE 5F 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 230h]
        ; Exact mapped bytes E8 E9 82 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 1f4h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1f0h], edx
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 40c78h]
        mov dword ptr [ebp - 1f8h], edx
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 23 7F FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7C: je 0x449482
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 0C 7F FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [edx + 1b0h]
        add eax, 1
        mov dword ptr [ebp - 238h], eax
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 E9 7E FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0fd0h]
        mov eax, dword ptr [ebp - 238h]
        mov dword ptr [edx + 1b0h], eax
        mov ecx, dword ptr [ebp - 238h]
        mov dword ptr [ebp - 234h], ecx
        push 0
        push 48h
        lea edx, [ebp - 234h]
        push edx
        push 0
        push 7
        push 80018006h
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 A9 7E FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 B0 DD 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 33ch]
        add edx, 150h
        push edx
        push 5b6bf4h
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 AE 54 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 14h
        push 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 3D 4B 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push 5b6c30h
        push 5d3fb0h
        ; Exact mapped bytes E8 59 A3 00 00: call 0x453824
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 F3 03 00 00: jmp 0x4498c6
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 280h]
        ; Exact mapped bytes E8 B2 2E 00 00: call 0x44c390
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 48h
        push 0
        lea ecx, [ebp - 280h]
        push ecx
        ; Exact mapped bytes E8 82 FE 05 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 248h], 8
        mov edx, dword ptr [ebp - 33ch]
        add edx, 150h
        mov esi, esp
        push edx
        lea eax, [ebp - 260h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C2 F2 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 32ch]
        push ecx
        ; Exact mapped bytes E8 6D 5E 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x5e
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 27ch]
        ; Exact mapped bytes E8 78 81 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 240h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 23ch], ecx
        mov edx, dword ptr [ebp - 33ch]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 244h], ecx
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 B2 7D FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7C: je 0x4495f3
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 9B 7D FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ecx + 1b0h]
        add edx, 1
        mov dword ptr [ebp - 284h], edx
        mov eax, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 78 7D FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ebp - 284h]
        mov dword ptr [ecx + 1b0h], edx
        mov eax, dword ptr [ebp - 284h]
        mov dword ptr [ebp - 280h], eax
        push 0
        push 48h
        lea ecx, [ebp - 280h]
        push ecx
        push 0
        push 8
        push 80018006h
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 38 7D FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 3F DC 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 33ch]
        add ecx, 150h
        push ecx
        push 5b6c44h
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 3D 53 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 14h
        push 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 CC 49 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x49
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push 5b6c88h
        push 5d3fb0h
        ; Exact mapped bytes E8 E8 A1 00 00: call 0x453824
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 82 02 00 00: jmp 0x4498c6
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 14h
        push 0
        lea eax, [ebp - 2e8h]
        push eax
        ; Exact mapped bytes E8 1C FD 05 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 10h
        ; Exact mapped bytes 0F 82 81 00 00 00: jb 0x4496e5
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 2e4h]
        push eax
        ; Exact mapped bytes E8 AA F9 05 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        mov dword ptr [ebp - 10h], ecx
        push 4
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 2e0h]
        push eax
        ; Exact mapped bytes E8 89 F9 05 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        mov dword ptr [ebp - 10h], ecx
        push 4
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 2dch]
        push eax
        ; Exact mapped bytes E8 68 F9 05 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        mov dword ptr [ebp - 10h], ecx
        push 4
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 2d8h]
        push eax
        ; Exact mapped bytes E8 47 F9 05 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 2d4h]
        ; Exact mapped bytes E8 D0 2C 00 00: call 0x44c3c0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        push 50h
        push 0
        lea edx, [ebp - 2d4h]
        push edx
        ; Exact mapped bytes E8 70 FC 05 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 29ch], 9
        mov eax, dword ptr [ebp - 33ch]
        add eax, 150h
        mov esi, esp
        push eax
        lea ecx, [ebp - 2b4h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B1 F0 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        lea edx, [ebp - 330h]
        push edx
        ; Exact mapped bytes E8 5C 5C 08 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5c
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 2d0h]
        ; Exact mapped bytes E8 67 7F 0E 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x7f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2e4h]
        mov dword ptr [ebp - 294h], eax
        mov ecx, dword ptr [ebp - 2e0h]
        mov dword ptr [ebp - 290h], ecx
        mov edx, dword ptr [ebp - 2dch]
        mov dword ptr [ebp - 28ch], edx
        mov eax, dword ptr [ebp - 2d8h]
        mov dword ptr [ebp - 288h], eax
        mov ecx, dword ptr [ebp - 33ch]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 40c78h]
        mov dword ptr [ebp - 298h], eax
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 86 7B FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 7C: je 0x44981f
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 6F 7B FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [eax + 1b0h]
        add ecx, 1
        mov dword ptr [ebp - 2ech], ecx
        mov edx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 4C 7B FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [ebp - 2ech]
        mov dword ptr [eax + 1b0h], ecx
        mov edx, dword ptr [ebp - 2ech]
        mov dword ptr [ebp - 2d4h], edx
        push 0
        push 50h
        lea eax, [ebp - 2d4h]
        push eax
        push 0
        push 9
        push 80018006h
        mov ecx, dword ptr [ebp - 33ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 0C 7B FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 13 DA 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2d8h]
        push edx
        mov eax, dword ptr [ebp - 2dch]
        push eax
        mov ecx, dword ptr [ebp - 2e0h]
        push ecx
        mov edx, dword ptr [ebp - 2e4h]
        push edx
        mov eax, dword ptr [ebp - 33ch]
        add eax, 150h
        push eax
        push 5b6c9ch
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 07 51 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 334h], esp
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 11 3C 0A 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 358h], eax
        push 0bh
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 ED B1 00 00: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 49: jmp 0x4498c6
        __asm _emit 0xeb
        __asm _emit 0x49
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 33ch]
        add ecx, 150h
        push ecx
        push 5b6d00h
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 B6 50 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 14h
        push 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 45 47 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x47
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push 5b6d30h
        push 5d3fb0h
        ; Exact mapped bytes E8 61 9F 00 00: call 0x453824
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 AD DD FF FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 338h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 62 3F 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 338h]
        ; Exact mapped bytes EB 02: jmp 0x4498f4
        __asm _emit 0xeb
        __asm _emit 0x02
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
        pop esi
        add esp, 358h
        cmp ebp, esp
        ; Exact mapped bytes E8 D3 EE 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
