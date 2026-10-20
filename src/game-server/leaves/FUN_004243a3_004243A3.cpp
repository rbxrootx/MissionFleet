// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004243A3 .. +0xE23 bytes.
extern "C" __declspec(naked) void FUN_004243a3_004243A3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a8h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0a8h]
        mov ecx, 2ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0a0h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        shr ecx, 10h
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov dword ptr [ebp - 4ch], 63h
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 54h], edx
        lea eax, [ebp - 4ch]
        push eax
        lea ecx, [ebp - 50h]
        push ecx
        lea edx, [ebp - 54h]
        push edx
        ; Exact mapped bytes E8 B8 F3 FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x424418
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], -1
        ; Exact mapped bytes 75 1F: jne 0x424437
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 37ch
        cmp dword ptr [edx + ecx + 2e4h], 0
        ; Exact mapped bytes 74 26: je 0x42445d
        __asm _emit 0x74
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 80011035h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DC 2D 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 54 0D 00 00: jmp 0x4251b1
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 8], -1
        ; Exact mapped bytes 0F 85 F1 03 00 00: jne 0x42485b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        cmp edx, 0ffffh
        ; Exact mapped bytes 0F 85 F4 01 00 00: jne 0x424673
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x424491
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 64h
        ; Exact mapped bytes 0F 83 C5 00 00 00: jae 0x424560
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 0
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x42455b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 0ch
        and ecx, 0fh
        test ecx, ecx
        ; Exact mapped bytes 74 7D: je 0x42455b
        __asm _emit 0x74
        __asm _emit 0x7d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        and dh, 0fh
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + eax + 234h], edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 37ch
        mov dword ptr [eax + ecx + 2bch], 0ffffffffh
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 10h
        or edx, 4
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 5A E1 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe1
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 28 FF FF FF: jmp 0x424488
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 10h], 32h
        ; Exact mapped bytes 0F 83 CF 00 00 00: jae 0x424640
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 0
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x42463b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push -1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16e4ch]
        push ecx
        ; Exact mapped bytes E8 B9 4D 08 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push -1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16ecch]
        push edx
        ; Exact mapped bytes E8 90 4D 08 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 370h
        mov eax, dword ptr [ecx + edx + 16be0h]
        and al, 0feh
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 16be0h], eax
        mov eax, dword ptr [ebp - 10h]
        shl eax, 10h
        or al, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 7A E0 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 27 FF FF FF: jmp 0x424567
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 16ch], 0ffffffffh
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80000510h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 2B 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 01 00 00: jmp 0x424856
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        imul edx, edx, 370h
        cmp dword ptr [ecx + edx + 16bdch], 0
        ; Exact mapped bytes 0F 85 BD 01 00 00: jne 0x424856
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x4246ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes 0F 8D 0A 01 00 00: jge 0x4247bf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4 + 270h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], -1
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x4247ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        and ch, 0fh
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + edx + 234h], ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 37ch
        mov dword ptr [edx + eax + 2bch], 0ffffffffh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + edx*4 + 270h], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + ecx*4 + 2f0h], 0ffffffffh
        mov edx, dword ptr [ebp - 18h]
        shl edx, 10h
        or edx, 4
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 19ch]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 FB DE 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 FE FF FF: jmp 0x4246a2
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        imul edx, edx, 370h
        mov eax, dword ptr [ecx + edx + 16be0h]
        and al, 0feh
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 16be0h], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        shl eax, 10h
        or al, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 8D DE 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 16ch], 0ffffffffh
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80000510h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DC 29 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 51 09 00 00: jmp 0x4251ac
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        cmp eax, 0ffffh
        ; Exact mapped bytes 0F 85 47 02 00 00: jne 0x424ab5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        cmp ecx, 0ffffh
        ; Exact mapped bytes 0F 85 2D 02 00 00: jne 0x424ab0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 2bch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [edx + ecx + 234h]
        shr edx, 0ch
        and edx, 0fh
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 58h], 31h
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 60h], eax
        lea ecx, [ebp - 58h]
        push ecx
        lea edx, [ebp - 5ch]
        push edx
        lea eax, [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 D4 EE FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x42491f
        __asm _emit 0x74
        __asm _emit 0x2c
        mov dword ptr [ebp - 64h], 1fh
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 6ch], ecx
        lea edx, [ebp - 64h]
        push edx
        lea eax, [ebp - 68h]
        push eax
        lea ecx, [ebp - 6ch]
        push ecx
        ; Exact mapped bytes E8 A8 EE FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x424945
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 80011035h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F4 28 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 6C 08 00 00: jmp 0x4251b1
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 50: jne 0x42499b
        __asm _emit 0x75
        __asm _emit 0x50
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 370h
        mov ecx, dword ptr [edx + eax + 16be0h]
        and ecx, 0fffffffeh
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 370h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + edx + 16be0h], ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        cmp edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 0D: jne 0x42499b
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 16ch], 0ffffffffh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + edx*4 + 2f0h], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + ecx*4 + 270h], 0ffffffffh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        imul edx, edx, 37ch
        mov dword ptr [eax + edx + 2bch], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ecx + eax + 234h]
        and ch, 0fh
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + eax + 234h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        shl ecx, 10h
        or ecx, 4
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax + 19ch]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 45 DC 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 19ch]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 26 DC 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80000510h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 27 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 F7 06 00 00: jmp 0x4251ac
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 37ch
        ; Exact mapped bytes 66 8B 94 0A 4E 02 00 00: mov dx, word ptr [edx + ecx + 0x24e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 C8: mov word ptr [ebp - 0x38], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 37ch
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 01 30 02 00 00: mov dx, word ptr [ecx + eax + 0x230]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], edx
        ; Exact mapped bytes DB 85 5C FF FF FF: fild dword ptr [ebp - 0xa4]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        and eax, 0ffffh
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes DB 85 58 FF FF FF: fild dword ptr [ebp - 0xa8]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes DE F9: fdivp st(1)
        __asm _emit 0xde
        __asm _emit 0xf9
        ; Exact mapped bytes D9 5D C0: fstp dword ptr [ebp - 0x40]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xc0
        ; Exact mapped bytes D9 45 C0: fld dword ptr [ebp - 0x40]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes DC 1D 68 11 58 00: fcomp qword ptr [0x581168]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 26: jne 0x424b50
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 80011035h
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 26 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 61 06 00 00: jmp 0x4251b1
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], 31h
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        mov dword ptr [ebp - 78h], eax
        lea ecx, [ebp - 70h]
        push ecx
        lea edx, [ebp - 74h]
        push edx
        lea eax, [ebp - 78h]
        push eax
        ; Exact mapped bytes E8 46 EC FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x424ba7
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 80011035h
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 26 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 0A 06 00 00: jmp 0x4251b1
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA 2A 02 00: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 60: je 0x424c21
        __asm _emit 0x74
        __asm _emit 0x60
        mov dword ptr [ebp - 7ch], 1fh
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        mov dword ptr [ebp - 84h], ecx
        lea edx, [ebp - 7ch]
        push edx
        lea eax, [ebp - 80h]
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        ; Exact mapped bytes E8 CE EB FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x424c1f
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 80011035h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 26 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 92 05 00 00: jmp 0x4251b1
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x424c47
        __asm _emit 0xeb
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 80011035h
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F2 25 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 6A 05 00 00: jmp 0x4251b1
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ecx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 33: jne 0x424ca3
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 74 26: je 0x424ca3
        __asm _emit 0x74
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 80011035h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 25 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 0E 05 00 00: jmp 0x4251b1
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        imul ecx, ecx, 370h
        cmp dword ptr [eax + ecx + 16bdch], 1
        ; Exact mapped bytes 75 26: jne 0x424ceb
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 80011035h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E 25 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 C6 04 00 00: jmp 0x4251b1
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [edx + ecx + 2bch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ecx + eax + 234h]
        shr ecx, 0ch
        and ecx, 0fh
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 88h], 31h
        mov dword ptr [ebp - 8ch], 0ffffffffh
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 90h], edx
        lea eax, [ebp - 88h]
        push eax
        lea ecx, [ebp - 8ch]
        push ecx
        lea edx, [ebp - 90h]
        push edx
        ; Exact mapped bytes E8 5A EA FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x424dab
        __asm _emit 0x74
        __asm _emit 0x3e
        mov dword ptr [ebp - 94h], 0ah
        mov dword ptr [ebp - 98h], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 9ch], eax
        lea ecx, [ebp - 94h]
        push ecx
        lea edx, [ebp - 98h]
        push edx
        lea eax, [ebp - 9ch]
        push eax
        ; Exact mapped bytes E8 1C EA FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x424dd1
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 80011035h
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 24 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 E0 03 00 00: jmp 0x4251b1
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        cmp dword ptr [eax + ecx*4 + 270h], -1
        ; Exact mapped bytes 0F 84 67 01 00 00: je 0x424f6e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        mov ecx, dword ptr [edx + eax*4 + 270h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 48h]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [eax + ecx + 2bch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 48h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp - 3ch]
        and eax, 0fh
        shl eax, 0ch
        mov ecx, dword ptr [ecx + edx + 234h]
        and ch, 0fh
        or ecx, eax
        mov edx, dword ptr [ebp - 48h]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + edx + 234h], ecx
        mov ecx, dword ptr [ebp - 48h]
        shl ecx, 10h
        or ecx, 4
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 19ch]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 F6 D7 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd7
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp - 34h], -1
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x424f6c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [eax + ecx*4 + 270h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov esi, dword ptr [ebp - 34h]
        imul esi, esi, 370h
        lea edx, [edx + esi + 16bdch]
        mov esi, dword ptr [ebp - 3ch]
        mov eax, dword ptr [eax + ecx*4 + 2f0h]
        mov dword ptr [edx + esi*4 + 2f0h], eax
        mov ecx, dword ptr [ebp - 34h]
        shl ecx, 10h
        or ecx, 2
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 19ch]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 49 D7 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd7
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 79: jmp 0x424fe7
        __asm _emit 0xeb
        __asm _emit 0x79
        cmp dword ptr [ebp - 34h], -1
        ; Exact mapped bytes 74 73: je 0x424fe7
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 34h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [eax + ecx*4 + 2f0h], 0ffffffffh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [edx + eax*4 + 270h], 0ffffffffh
        mov ecx, dword ptr [ebp - 34h]
        shl ecx, 10h
        or ecx, 2
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax + 19ch]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 CE D6 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp - 34h], -1
        ; Exact mapped bytes 74 56: je 0x425043
        __asm _emit 0x74
        __asm _emit 0x56
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 75 50: jne 0x425043
        __asm _emit 0x75
        __asm _emit 0x50
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 34h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [eax + ecx + 16be0h]
        and edx, 0fffffffeh
        mov eax, dword ptr [ebp - 34h]
        imul eax, eax, 370h
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + eax + 16be0h], edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        cmp eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 75 0D: jne 0x425043
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 16ch], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 8]
        imul eax, eax, 37ch
        mov dword ptr [ecx + eax + 2bch], edx
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [edx + 8]
        imul edx, edx, 37ch
        and ecx, 0fh
        shl ecx, 0ch
        mov eax, dword ptr [eax + edx + 234h]
        and ah, 0fh
        or eax, ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        imul edx, edx, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + edx + 234h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov esi, dword ptr [ebp - 4]
        and esi, 0ffffh
        imul esi, esi, 370h
        lea ecx, [ecx + esi + 16bdch]
        mov esi, dword ptr [ebp - 8]
        and esi, 0ffffh
        mov edx, dword ptr [eax + edx*4 + 94h]
        mov dword ptr [ecx + esi*4 + 2f0h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [edx + 8]
        mov dword ptr [eax + ecx*4 + 270h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        shl ecx, 10h
        or ecx, 4
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 19ch]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 59 D5 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        shl eax, 10h
        or al, 2
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax + 19ch]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 2A D5 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 80000510h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 20 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 0a8h
        cmp ebp, esp
        ; Exact mapped bytes E8 20 36 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
