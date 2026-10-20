// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042B1D5 .. +0x109F bytes.
extern "C" __declspec(naked) void FUN_0042b1d5_0042B1D5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 344h
        push ebx
        push edi
        push ecx
        lea edi, [ebp - 344h]
        mov ecx, 0d1h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 338h], ecx
        mov dword ptr [ebp - 224h], 0
        mov dword ptr [ebp - 220h], 0
        mov dword ptr [ebp - 118h], 0
        mov dword ptr [ebp - 230h], 0
        mov dword ptr [ebp - 22ch], 0
        mov dword ptr [ebp - 2b4h], 0
        mov dword ptr [ebp - 110h], 0
        mov dword ptr [ebp - 228h], 0
        mov dword ptr [ebp - 10ch], 0
        mov dword ptr [ebp - 108h], 0
        mov dword ptr [ebp - 104h], 0
        mov dword ptr [ebp - 100h], 0
        mov dword ptr [ebp - 0fch], 0
        mov dword ptr [ebp - 0f8h], 0
        mov dword ptr [ebp - 0f4h], 0
        mov dword ptr [ebp - 0f0h], 0
        mov dword ptr [ebp - 0ech], 0
        mov dword ptr [ebp - 0e8h], 0
        mov dword ptr [ebp - 0e4h], 0
        mov dword ptr [ebp - 0e0h], 0
        mov dword ptr [ebp - 0dch], 0
        mov dword ptr [ebp - 0d8h], 0
        mov dword ptr [ebp - 0d4h], 0
        mov dword ptr [ebp - 0d0h], 0
        mov dword ptr [ebp - 0cch], 0
        mov dword ptr [ebp - 0c8h], 0
        mov dword ptr [ebp - 0c4h], 0
        mov dword ptr [ebp - 0c0h], 0
        mov dword ptr [ebp - 0bch], 0
        mov dword ptr [ebp - 0b8h], 0
        mov dword ptr [ebp - 0b4h], 0
        mov dword ptr [ebp - 0b0h], 0
        mov dword ptr [ebp - 0ach], 0
        mov dword ptr [ebp - 0a8h], 0
        mov dword ptr [ebp - 0a4h], 0
        mov dword ptr [ebp - 0a0h], 0
        mov dword ptr [ebp - 9ch], 0
        mov dword ptr [ebp - 98h], 0
        mov dword ptr [ebp - 94h], 0
        mov dword ptr [ebp - 90h], 0
        mov dword ptr [ebp - 334h], 0
        mov dword ptr [ebp - 330h], 0
        mov dword ptr [ebp - 32ch], 0
        mov dword ptr [ebp - 328h], 0
        mov dword ptr [ebp - 324h], 0
        mov dword ptr [ebp - 320h], 0
        mov dword ptr [ebp - 31ch], 0
        mov dword ptr [ebp - 318h], 0
        mov dword ptr [ebp - 314h], 0
        mov dword ptr [ebp - 310h], 0
        mov dword ptr [ebp - 30ch], 0
        mov dword ptr [ebp - 308h], 0
        mov dword ptr [ebp - 304h], 0
        mov dword ptr [ebp - 300h], 0
        mov dword ptr [ebp - 2fch], 0
        mov dword ptr [ebp - 2f8h], 0
        mov dword ptr [ebp - 2f4h], 0
        mov dword ptr [ebp - 2f0h], 0
        mov dword ptr [ebp - 2ech], 0
        mov dword ptr [ebp - 2e8h], 0
        mov dword ptr [ebp - 2e4h], 0
        mov dword ptr [ebp - 2e0h], 0
        mov dword ptr [ebp - 2dch], 0
        mov dword ptr [ebp - 2d8h], 0
        mov dword ptr [ebp - 2d4h], 0
        mov dword ptr [ebp - 2d0h], 0
        mov dword ptr [ebp - 2cch], 0
        mov dword ptr [ebp - 2c8h], 0
        mov dword ptr [ebp - 2c4h], 0
        mov dword ptr [ebp - 2c0h], 0
        mov dword ptr [ebp - 2bch], 0
        mov dword ptr [ebp - 2b8h], 0
        mov dword ptr [ebp - 8ch], 0
        mov dword ptr [ebp - 88h], 0
        mov dword ptr [ebp - 84h], 0
        mov dword ptr [ebp - 80h], 0
        mov dword ptr [ebp - 7ch], 0
        mov dword ptr [ebp - 78h], 0
        mov dword ptr [ebp - 74h], 0
        mov dword ptr [ebp - 70h], 0
        mov dword ptr [ebp - 6ch], 0
        mov dword ptr [ebp - 68h], 0
        mov dword ptr [ebp - 64h], 0
        mov dword ptr [ebp - 60h], 0
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 58h], 0
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 44h], 0
        mov dword ptr [ebp - 40h], 0
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 2b0h], 0
        mov dword ptr [ebp - 2ach], 0
        mov dword ptr [ebp - 2a8h], 0
        mov dword ptr [ebp - 2a4h], 0
        mov dword ptr [ebp - 2a0h], 0
        mov dword ptr [ebp - 29ch], 0
        mov dword ptr [ebp - 298h], 0
        mov dword ptr [ebp - 294h], 0
        mov dword ptr [ebp - 290h], 0
        mov dword ptr [ebp - 28ch], 0
        mov dword ptr [ebp - 288h], 0
        mov dword ptr [ebp - 284h], 0
        mov dword ptr [ebp - 280h], 0
        mov dword ptr [ebp - 27ch], 0
        mov dword ptr [ebp - 278h], 0
        mov dword ptr [ebp - 274h], 0
        mov dword ptr [ebp - 270h], 0
        mov dword ptr [ebp - 26ch], 0
        mov dword ptr [ebp - 268h], 0
        mov dword ptr [ebp - 264h], 0
        mov dword ptr [ebp - 260h], 0
        mov dword ptr [ebp - 25ch], 0
        mov dword ptr [ebp - 258h], 0
        mov dword ptr [ebp - 254h], 0
        mov dword ptr [ebp - 250h], 0
        mov dword ptr [ebp - 24ch], 0
        mov dword ptr [ebp - 248h], 0
        mov dword ptr [ebp - 244h], 0
        mov dword ptr [ebp - 240h], 0
        mov dword ptr [ebp - 23ch], 0
        mov dword ptr [ebp - 238h], 0
        mov dword ptr [ebp - 234h], 0
        mov dword ptr [ebp - 218h], 0
        mov dword ptr [ebp - 214h], 0
        mov dword ptr [ebp - 210h], 0
        mov dword ptr [ebp - 20ch], 0
        mov dword ptr [ebp - 208h], 0
        mov dword ptr [ebp - 204h], 0
        mov dword ptr [ebp - 200h], 0
        mov dword ptr [ebp - 1fch], 0
        mov dword ptr [ebp - 1f8h], 0
        mov dword ptr [ebp - 1f4h], 0
        mov dword ptr [ebp - 1f0h], 0
        mov dword ptr [ebp - 1ech], 0
        mov dword ptr [ebp - 1e8h], 0
        mov dword ptr [ebp - 1e4h], 0
        mov dword ptr [ebp - 1e0h], 0
        mov dword ptr [ebp - 1dch], 0
        mov dword ptr [ebp - 1d8h], 0
        mov dword ptr [ebp - 1d4h], 0
        mov dword ptr [ebp - 1d0h], 0
        mov dword ptr [ebp - 1cch], 0
        mov dword ptr [ebp - 1c8h], 0
        mov dword ptr [ebp - 1c4h], 0
        mov dword ptr [ebp - 1c0h], 0
        mov dword ptr [ebp - 1bch], 0
        mov dword ptr [ebp - 1b8h], 0
        mov dword ptr [ebp - 1b4h], 0
        mov dword ptr [ebp - 1b0h], 0
        mov dword ptr [ebp - 1ach], 0
        mov dword ptr [ebp - 1a8h], 0
        mov dword ptr [ebp - 1a4h], 0
        mov dword ptr [ebp - 1a0h], 0
        mov dword ptr [ebp - 19ch], 0
        mov dword ptr [ebp - 198h], 0
        mov dword ptr [ebp - 194h], 0
        mov dword ptr [ebp - 190h], 0
        mov dword ptr [ebp - 18ch], 0
        mov dword ptr [ebp - 188h], 0
        mov dword ptr [ebp - 184h], 0
        mov dword ptr [ebp - 180h], 0
        mov dword ptr [ebp - 17ch], 0
        mov dword ptr [ebp - 178h], 0
        mov dword ptr [ebp - 174h], 0
        mov dword ptr [ebp - 170h], 0
        mov dword ptr [ebp - 16ch], 0
        mov dword ptr [ebp - 168h], 0
        mov dword ptr [ebp - 164h], 0
        mov dword ptr [ebp - 160h], 0
        mov dword ptr [ebp - 15ch], 0
        mov dword ptr [ebp - 158h], 0
        mov dword ptr [ebp - 154h], 0
        mov dword ptr [ebp - 150h], 0
        mov dword ptr [ebp - 14ch], 0
        mov dword ptr [ebp - 148h], 0
        mov dword ptr [ebp - 144h], 0
        mov dword ptr [ebp - 140h], 0
        mov dword ptr [ebp - 13ch], 0
        mov dword ptr [ebp - 138h], 0
        mov dword ptr [ebp - 134h], 0
        mov dword ptr [ebp - 130h], 0
        mov dword ptr [ebp - 12ch], 0
        mov dword ptr [ebp - 128h], 0
        mov dword ptr [ebp - 124h], 0
        mov dword ptr [ebp - 120h], 0
        mov dword ptr [ebp - 11ch], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 54 E1 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        cmp dword ptr [ebp - 220h], 0
        ; Exact mapped bytes 75 0B: jne 0x42b9b2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 224h]
        ; Exact mapped bytes E9 AD 08 00 00: jmp 0x42c25f
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c06h]
        push ecx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 15 E1 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16c08h]
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 EA E0 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c0ch]
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 BF E0 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c0ah]
        push ecx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 94 E0 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16c10h]
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 69 E0 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16c0eh]
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 3E E0 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        mov dword ptr [ebp - 21ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x42bacf
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 21ch]
        add ecx, 1
        mov dword ptr [ebp - 21ch], ecx
        cmp dword ptr [ebp - 21ch], 20h
        ; Exact mapped bytes 0F 83 08 01 00 00: jae 0x42bbe4
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 21ch]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 02 2E 01 00 00: mov cx, word ptr [edx + eax + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x42bbdf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 21ch]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 9E DF FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 21ch]
        mov dword ptr [ebp + edx*4 - 10ch], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 21ch]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 130h]
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 5C DF FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 21ch]
        mov dword ptr [ebp + ecx*8 - 218h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 21ch]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 132h]
        push ecx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 1A DF FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 21ch]
        mov dword ptr [ebp + edx*8 - 214h], eax
        ; Exact mapped bytes E9 DC FE FF FF: jmp 0x42bac0
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x42bbff
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 21ch]
        add eax, 1
        mov dword ptr [ebp - 21ch], eax
        cmp dword ptr [ebp - 21ch], 20h
        ; Exact mapped bytes 0F 83 C5 00 00 00: jae 0x42bcd1
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 21ch]
        imul edx, edx, 0ah
        ; Exact mapped bytes 66 8B 84 11 2E 01 00 00: mov ax, word ptr [ecx + edx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 6
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x42bccc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 21ch]
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 6F DE FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 21ch]
        mov dword ptr [ebp + ecx*4 - 334h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 21ch]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 130h]
        push ecx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 2D DE FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 21ch]
        mov dword ptr [ebp + edx*4 - 2b0h], eax
        ; Exact mapped bytes E9 1F FF FF FF: jmp 0x42bbf0
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x42bcec
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 21ch]
        add eax, 1
        mov dword ptr [ebp - 21ch], eax
        cmp dword ptr [ebp - 21ch], 20h
        ; Exact mapped bytes 73 7F: jae 0x42bd74
        __asm _emit 0x73
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 21ch]
        imul edx, edx, 0ah
        ; Exact mapped bytes 66 8B 84 11 2E 01 00 00: mov ax, word ptr [ecx + edx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0dh
        ; Exact mapped bytes 75 42: jne 0x42bd6f
        __asm _emit 0x75
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 21ch]
        imul edx, edx, 0ah
        lea eax, [ecx + edx + 12eh]
        push eax
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 8A DD FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 21ch]
        mov dword ptr [ebp + ecx*4 - 8ch], eax
        ; Exact mapped bytes E9 69 FF FF FF: jmp 0x42bcdd
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 220h], 0
        ; Exact mapped bytes 74 15: je 0x42bd92
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 220h]
        mov eax, dword ptr [ebp - 224h]
        add eax, dword ptr [edx + 4ch]
        mov dword ptr [ebp - 224h], eax
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 15: je 0x42bdb0
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 118h]
        mov edx, dword ptr [ebp - 224h]
        add edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 224h], edx
        cmp dword ptr [ebp - 230h], 0
        ; Exact mapped bytes 74 15: je 0x42bdce
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 230h]
        mov ecx, dword ptr [ebp - 224h]
        add ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 224h], ecx
        cmp dword ptr [ebp - 22ch], 0
        ; Exact mapped bytes 74 6F: je 0x42be46
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 8B 8C 02 14 6C 01 00: mov cx, word ptr [edx + eax + 0x16c14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x14
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D FA: mov word ptr [ebp - 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfa
        mov edx, dword ptr [ebp - 220h]
        ; Exact mapped bytes 66 8B 82 0A 01 00 00: mov ax, word ptr [edx + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        push 2
        push 0
        lea ecx, [ebp - 0ah]
        push ecx
        ; Exact mapped bytes E8 50 D5 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 66 C7 45 FC 00 00: mov word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 E3 60 00 00: call 0x431f1b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 224h]
        sub ecx, eax
        mov dword ptr [ebp - 224h], ecx
        cmp dword ptr [ebp - 2b4h], 0
        ; Exact mapped bytes 74 6F: je 0x42bebe
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 8B 8C 02 12 6C 01 00: mov cx, word ptr [edx + eax + 0x16c12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x12
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D FA: mov word ptr [ebp - 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfa
        mov edx, dword ptr [ebp - 220h]
        ; Exact mapped bytes 66 8B 82 0C 01 00 00: mov ax, word ptr [edx + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        push 2
        push 0
        lea ecx, [ebp - 0ah]
        push ecx
        ; Exact mapped bytes E8 D8 D4 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 66 C7 45 FC 00 00: mov word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 6B 60 00 00: call 0x431f1b
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 224h]
        sub ecx, eax
        mov dword ptr [ebp - 224h], ecx
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 6F: je 0x42bf36
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 110h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 8B 8C 02 18 6C 01 00: mov cx, word ptr [edx + eax + 0x16c18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x18
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D FA: mov word ptr [ebp - 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfa
        mov edx, dword ptr [ebp - 220h]
        ; Exact mapped bytes 66 8B 82 10 01 00 00: mov ax, word ptr [edx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        push 2
        push 0
        lea ecx, [ebp - 0ah]
        push ecx
        ; Exact mapped bytes E8 60 D4 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 66 C7 45 FC 00 00: mov word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 56 62 00 00: call 0x43217e
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 224h]
        sub ecx, eax
        mov dword ptr [ebp - 224h], ecx
        cmp dword ptr [ebp - 228h], 0
        ; Exact mapped bytes 74 6F: je 0x42bfae
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 228h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 370h
        ; Exact mapped bytes 66 8B 8C 02 16 6C 01 00: mov cx, word ptr [edx + eax + 0x16c16]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x16
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D FA: mov word ptr [ebp - 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfa
        mov edx, dword ptr [ebp - 220h]
        ; Exact mapped bytes 66 8B 82 0E 01 00 00: mov ax, word ptr [edx + 0x10e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        push 2
        push 0
        lea ecx, [ebp - 0ah]
        push ecx
        ; Exact mapped bytes E8 E8 D3 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 66 C7 45 FC 00 00: mov word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 7B 5F 00 00: call 0x431f1b
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 224h]
        sub ecx, eax
        mov dword ptr [ebp - 224h], ecx
        mov dword ptr [ebp - 21ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x42bfc9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 21ch]
        add edx, 1
        mov dword ptr [ebp - 21ch], edx
        cmp dword ptr [ebp - 21ch], 20h
        ; Exact mapped bytes 0F 83 D1 01 00 00: jae 0x42c1a7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 21ch]
        cmp dword ptr [ebp + eax*4 - 10ch], 0
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x42c0be
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 21ch]
        mov edx, dword ptr [ebp + ecx*4 - 10ch]
        mov eax, dword ptr [ebp - 224h]
        add eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 224h], eax
        mov ecx, dword ptr [ebp - 21ch]
        cmp dword ptr [ebp + ecx*8 - 218h], 0
        ; Exact mapped bytes 74 4C: je 0x42c062
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 21ch]
        mov eax, dword ptr [ebp + edx*8 - 218h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov ecx, dword ptr [ebp - 21ch]
        imul ecx, ecx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [edx + ecx + 134h]
        mov edx, dword ptr [eax + 74h]
        imul edx, ebx
        mov eax, dword ptr [ebp - 224h]
        add eax, edx
        mov dword ptr [ebp - 224h], eax
        mov ecx, dword ptr [ebp - 21ch]
        cmp dword ptr [ebp + ecx*8 - 214h], 0
        ; Exact mapped bytes 74 4C: je 0x42c0be
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 21ch]
        mov eax, dword ptr [ebp + edx*8 - 214h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov ecx, dword ptr [ebp - 21ch]
        imul ecx, ecx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [edx + ecx + 135h]
        mov edx, dword ptr [eax + 74h]
        imul edx, ebx
        mov eax, dword ptr [ebp - 224h]
        add eax, edx
        mov dword ptr [ebp - 224h], eax
        mov ecx, dword ptr [ebp - 21ch]
        cmp dword ptr [ebp + ecx*4 - 334h], 0
        ; Exact mapped bytes 74 78: je 0x42c146
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 21ch]
        mov eax, dword ptr [ebp + edx*4 - 334h]
        mov ecx, dword ptr [ebp - 224h]
        add ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 224h], ecx
        mov edx, dword ptr [ebp - 21ch]
        cmp dword ptr [ebp + edx*4 - 2b0h], 0
        ; Exact mapped bytes 74 4C: je 0x42c146
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 21ch]
        mov ecx, dword ptr [ebp + eax*4 - 2b0h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov edx, dword ptr [ebp - 21ch]
        imul edx, edx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [eax + edx + 134h]
        mov eax, dword ptr [ecx + 74h]
        imul eax, ebx
        mov ecx, dword ptr [ebp - 224h]
        add ecx, eax
        mov dword ptr [ebp - 224h], ecx
        mov edx, dword ptr [ebp - 21ch]
        cmp dword ptr [ebp + edx*4 - 8ch], 0
        ; Exact mapped bytes 74 4C: je 0x42c1a2
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 21ch]
        mov ecx, dword ptr [ebp + eax*4 - 8ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov edx, dword ptr [ebp - 21ch]
        imul edx, edx, 0ah
        xor ebx, ebx
        mov bl, byte ptr [eax + edx + 134h]
        mov eax, dword ptr [ecx + 74h]
        imul eax, ebx
        mov ecx, dword ptr [ebp - 224h]
        add ecx, eax
        mov dword ptr [ebp - 224h], ecx
        ; Exact mapped bytes E9 13 FE FF FF: jmp 0x42bfba
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 10h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp - 220h]
        mov edx, dword ptr [edx + 54h]
        sub edx, dword ptr [eax + ecx + 16be4h]
        test edx, edx
        ; Exact mapped bytes 7D 0C: jge 0x42c1d9
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 33ch], 0
        ; Exact mapped bytes EB 28: jmp 0x42c201
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 370h
        mov eax, dword ptr [ebp - 220h]
        mov eax, dword ptr [eax + 54h]
        sub eax, dword ptr [ecx + edx + 16be4h]
        mov dword ptr [ebp - 33ch], eax
        mov ecx, dword ptr [ebp - 220h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 344h], edx
        mov dword ptr [ebp - 340h], 0
        ; Exact mapped bytes DF AD BC FC FF FF: fild qword ptr [ebp - 0x344]
        __asm _emit 0xdf
        __asm _emit 0xad
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 59 D7 07 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd7
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DC 35 28 11 58 00: fdiv qword ptr [0x581128]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 20 11 58 00: fmul qword ptr [0x581120]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DA 8D C4 FC FF FF: fimul dword ptr [ebp - 0x33c]
        __asm _emit 0xda
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes D9 95 EC FE FF FF: fst dword ptr [ebp - 0x114]
        __asm _emit 0xd9
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 B1 D2 07 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd2
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 224h]
        sub ecx, eax
        mov dword ptr [ebp - 224h], ecx
        mov eax, dword ptr [ebp - 224h]
        pop edi
        pop ebx
        add esp, 344h
        cmp ebp, esp
        ; Exact mapped bytes E8 72 C5 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc5
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
