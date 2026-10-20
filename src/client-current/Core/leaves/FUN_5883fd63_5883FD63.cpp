// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883FD63 .. +0x73F bytes.
extern "C" __declspec(naked) void FUN_5883fd63_5883FD63() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 466ch
        ; Exact mapped bytes E8 80 1D FF FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 460ch], ecx
        mov dword ptr [ebp - 4618h], 145h
        and dword ptr [ebp - 4664h], 0
        and dword ptr [ebp - 4668h], 0
        mov byte ptr [ebp - 208h], 0
        push 103h
        push 0
        lea eax, [ebp - 207h]
        push eax
        ; Exact mapped bytes E8 5E D0 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 4608h], 0
        push 13ffh
        push 0
        lea eax, [ebp - 4607h]
        push eax
        ; Exact mapped bytes E8 41 D0 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 3208h], 0
        push 13ffh
        push 0
        lea eax, [ebp - 3207h]
        push eax
        ; Exact mapped bytes E8 24 D0 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 608h], 0
        push 3ffh
        push 0
        lea eax, [ebp - 607h]
        push eax
        ; Exact mapped bytes E8 07 D0 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 400h
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 608h]
        push eax
        ; Exact mapped bytes E8 B0 6D 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 4610h], 0
        mov dword ptr [ebp - 466ch], 800h
        mov dword ptr [ebp - 4628h], 5000h
        mov byte ptr [ebp - 0a08h], 0
        push 3ffh
        push 0
        lea eax, [ebp - 0a07h]
        push eax
        ; Exact mapped bytes E8 B8 CF 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 4620h], 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D C4 FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 463ch], eax
        xor eax, eax
        ; Exact mapped bytes 66 89 85 F8 E9 FF FF: mov word ptr [ebp - 0x1608], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        push 7feh
        push 0
        lea eax, [ebp - 1606h]
        push eax
        ; Exact mapped bytes E8 83 CF 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 400h
        lea eax, [ebp - 1608h]
        push eax
        lea eax, [ebp - 608h]
        push eax
        ; Exact mapped bytes E8 D8 12 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        lea eax, [ebp - 608h]
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov byte ptr [ebp - 0e08h], 0
        push 3ffh
        push 0
        lea eax, [ebp - 0e07h]
        push eax
        ; Exact mapped bytes E8 3A CF 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 0
        push 400h
        lea eax, [ebp - 0e08h]
        push eax
        push -1
        lea eax, [ebp - 1608h]
        push eax
        push 0
        push 0caedh
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 0e08h]
        push eax
        ; Exact mapped bytes E8 EC C3 FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 4654h], eax
        push 0
        push 0
        push 400h
        lea eax, [ebp - 608h]
        push eax
        push -1
        lea eax, [ebp - 1608h]
        push eax
        push 0
        push 0fde9h
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 C3 FF FF: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 104h], 0
        push 0ffh
        push 0
        lea eax, [ebp - 103h]
        push eax
        ; Exact mapped bytes E8 B9 CE 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 0
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 38 05 00 00: call 0x588404a2
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 11: je 0x5883ff84
        __asm _emit 0x74
        __asm _emit 0x11
        lea eax, [ebp - 104h]
        push eax
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 1E 9B 01 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        push 588f2b64h
        ; Exact mapped bytes E8 C5 C3 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 208h]
        push eax
        ; Exact mapped bytes E8 C4 CB CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xcb
        __asm _emit 0xcc
        __asm _emit 0xff
        pop ecx
        pop ecx
        lea eax, [ebp - 104h]
        push eax
        lea eax, [ebp - 608h]
        push eax
        push dword ptr [ebp + 8]
        push 588f2b78h
        ; Exact mapped bytes E8 9A C3 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 4608h]
        push eax
        ; Exact mapped bytes E8 99 CB CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xcb
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 14h
        mov eax, dword ptr [ebp - 460ch]
        push dword ptr [eax + 84h]
        lea eax, [ebp - 4608h]
        push eax
        mov ecx, dword ptr [ebp - 460ch]
        ; Exact mapped bytes E8 96 5E 00 00: call 0x58845e7e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 460ch]
        push dword ptr [eax + 84h]
        lea eax, [ebp - 4608h]
        push eax
        push 588f2b88h
        ; Exact mapped bytes E8 4E C3 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 3208h]
        push eax
        ; Exact mapped bytes E8 4D CB CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xcb
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 10h
        lea eax, [ebp - 3208h]
        push eax
        ; Exact mapped bytes E8 5E 11 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 4648h], eax
        and dword ptr [ebp - 4614h], 0
        mov dword ptr [ebp - 4634h], 84400100h
        mov eax, dword ptr [ebp - 460ch]
        movzx eax, word ptr [eax + 6ch]
        cmp eax, 1bbh
        ; Exact mapped bytes 75 11: jne 0x5884005c
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4634h]
        or eax, 803000h
        mov dword ptr [ebp - 4634h], eax
        push 0
        push dword ptr [ebp - 4634h]
        push 0
        push 0
        push 0
        lea eax, [ebp - 208h]
        push eax
        push 588f21fch
        ; Exact mapped bytes E8 D8 C2 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        mov eax, dword ptr [ebp - 460ch]
        push dword ptr [eax + 78h]
        mov eax, dword ptr [ebp - 460ch]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov dword ptr [ebp - 4614h], eax
        cmp dword ptr [ebp - 4614h], 0
        ; Exact mapped bytes 0F 84 AD 02 00 00: je 0x5884034f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 460ch]
        movzx eax, word ptr [eax + 6ch]
        cmp eax, 1bbh
        ; Exact mapped bytes 75 58: jne 0x5884010b
        __asm _emit 0x75
        __asm _emit 0x58
        and dword ptr [ebp - 462ch], 0
        mov dword ptr [ebp - 465ch], 4
        lea eax, [ebp - 465ch]
        push eax
        lea eax, [ebp - 462ch]
        push eax
        push 1fh
        push dword ptr [ebp - 4614h]
        ; Exact mapped bytes FF 15 0C 45 89 58: call dword ptr [0x5889450c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 462ch]
        or eax, 3380h
        mov dword ptr [ebp - 462ch], eax
        push 4
        lea eax, [ebp - 462ch]
        push eax
        push 1fh
        push dword ptr [ebp - 4614h]
        mov eax, dword ptr [ebp - 460ch]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        push dword ptr [ebp - 4648h]
        push 588f2b18h
        ; Exact mapped bytes E8 38 C2 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 0a08h]
        push eax
        ; Exact mapped bytes E8 37 CA CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xca
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 0ch
        push dword ptr [ebp - 4648h]
        lea eax, [ebp - 3208h]
        push eax
        lea eax, [ebp - 0a08h]
        push eax
        ; Exact mapped bytes E8 3B 10 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 0a08h]
        push eax
        push dword ptr [ebp - 4614h]
        mov ecx, dword ptr [ebp - 460ch]
        ; Exact mapped bytes E8 54 17 00 00: call 0x588418b3
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 01 00 00: je 0x5884030c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1e08h], 0
        push 7ffh
        push 0
        lea eax, [ebp - 1e07h]
        push eax
        ; Exact mapped bytes E8 8F CC 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 461ch], 0
        and dword ptr [ebp - 4624h], 0
        push dword ptr [ebp - 4628h]
        ; Exact mapped bytes E8 A5 0E FF FF: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 4660h], eax
        mov eax, dword ptr [ebp - 4660h]
        mov dword ptr [ebp - 4610h], eax
        cmp dword ptr [ebp - 4610h], 0
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x5884030a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 461ch], 0
        push 0
        push 0
        lea eax, [ebp - 4624h]
        push eax
        push dword ptr [ebp - 4614h]
        mov eax, dword ptr [ebp - 460ch]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x588401e7
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x588402f4
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4624h], 800h
        ; Exact mapped bytes 76 0A: jbe 0x588401fd
        __asm _emit 0x76
        __asm _emit 0x0a
        mov dword ptr [ebp - 4624h], 800h
        cmp dword ptr [ebp - 4624h], 0
        ; Exact mapped bytes 0F 86 DD 00 00 00: jbe 0x588402e7
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 461ch]
        push eax
        push dword ptr [ebp - 4624h]
        lea eax, [ebp - 1e08h]
        push eax
        push dword ptr [ebp - 4614h]
        mov eax, dword ptr [ebp - 460ch]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x588402e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4620h]
        add eax, dword ptr [ebp - 461ch]
        cmp eax, dword ptr [ebp - 4628h]
        ; Exact mapped bytes 72 6A: jb 0x588402b3
        __asm _emit 0x72
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 4628h]
        shl eax, 1
        mov dword ptr [ebp - 4628h], eax
        push dword ptr [ebp - 4628h]
        ; Exact mapped bytes E8 E0 0D FF FF: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 464ch], eax
        mov eax, dword ptr [ebp - 464ch]
        mov dword ptr [ebp - 4644h], eax
        push dword ptr [ebp - 4620h]
        push dword ptr [ebp - 4610h]
        push dword ptr [ebp - 4644h]
        ; Exact mapped bytes E8 04 C6 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4610h]
        mov dword ptr [ebp - 4650h], eax
        push dword ptr [ebp - 4650h]
        ; Exact mapped bytes E8 A5 0D FF FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, dword ptr [ebp - 4644h]
        mov dword ptr [ebp - 4610h], eax
        push dword ptr [ebp - 461ch]
        lea eax, [ebp - 1e08h]
        push eax
        mov eax, dword ptr [ebp - 4610h]
        add eax, dword ptr [ebp - 4620h]
        push eax
        ; Exact mapped bytes E8 BE C5 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4620h]
        add eax, dword ptr [ebp - 461ch]
        mov dword ptr [ebp - 4620h], eax
        cmp dword ptr [ebp - 461ch], 0
        ; Exact mapped bytes 0F 85 C9 FE FF FF: jne 0x588401bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4610h]
        add eax, dword ptr [ebp - 4620h]
        mov byte ptr [eax], 0
        and dword ptr [ebp - 4618h], 0
        ; Exact mapped bytes EB 2B: jmp 0x58840337
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        push 588f221ch
        ; Exact mapped bytes E8 36 C0 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 460ch]
        ; Exact mapped bytes E8 77 16 00 00: call 0x588419a1
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4618h], 0cdh
        cmp dword ptr [ebp - 4614h], 0
        ; Exact mapped bytes 74 0F: je 0x5884034f
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [ebp - 4614h]
        mov eax, dword ptr [ebp - 460ch]
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        push 0
        mov ecx, dword ptr [ebp - 460ch]
        ; Exact mapped bytes E8 B0 F1 FF FF: call 0x5883f50c
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4618h], 0
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x5884045f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4610h], 0
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x5884045f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 4630h], 0
        and dword ptr [ebp - 4640h], 0
        and dword ptr [ebp - 4638h], 0
        push dword ptr [ebp - 4610h]
        push 588f2228h
        ; Exact mapped bytes E8 B8 BF FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 460ch]
        ; Exact mapped bytes E8 F9 15 00 00: call 0x588419a1
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 4638h]
        push eax
        push dword ptr [ebp + 10h]
        lea eax, [ebp - 4640h]
        push eax
        push 588f2b98h
        push dword ptr [ebp - 4610h]
        ; Exact mapped bytes E8 DB C7 FF FF: call 0x5883cba7
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov eax, dword ptr [ebp - 460ch]
        mov eax, dword ptr [eax + 84h]
        xor eax, dword ptr [ebp - 463ch]
        xor eax, dword ptr [ebp - 4654h]
        xor eax, dword ptr [ebp - 4640h]
        mov dword ptr [ebp - 4630h], eax
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 460ch]
        mov eax, dword ptr [eax]
        xor eax, dword ptr [ecx + 84h]
        xor eax, 0f9efbbech
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 463ch]
        xor eax, 782b1efdh
        xor eax, dword ptr [ebp - 4638h]
        mov ecx, dword ptr [ebp - 460ch]
        mov dword ptr [ecx + 18h], eax
        cmp dword ptr [ebp - 4630h], 73171914h
        ; Exact mapped bytes 75 0C: jne 0x58840440
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 4618h], 147h
        ; Exact mapped bytes EB 1F: jmp 0x5884045f
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp dword ptr [ebp - 4630h], 0f79fabefh
        ; Exact mapped bytes 75 09: jne 0x58840455
        __asm _emit 0x75
        __asm _emit 0x09
        and dword ptr [ebp - 4618h], 0
        ; Exact mapped bytes EB 0A: jmp 0x5884045f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 4618h], 16dh
        cmp dword ptr [ebp - 4610h], 0
        ; Exact mapped bytes 74 1F: je 0x58840487
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4610h]
        mov dword ptr [ebp - 4658h], eax
        push dword ptr [ebp - 4658h]
        ; Exact mapped bytes E8 CC 0B FF FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4610h], 0
        ; Exact mapped bytes E8 CE BD FF FF: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4618h]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B4 0B FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
