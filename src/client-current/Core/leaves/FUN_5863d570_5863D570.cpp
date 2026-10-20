// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5863D570 .. +0x716 bytes.
extern "C" __declspec(naked) void FUN_5863d570_5863D570() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2dch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 208h], ecx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 99 06 ED FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xff
        shr eax, 8
        ; Exact mapped bytes 66 89 85 F4 FD FF FF: mov word ptr [ebp - 0x20c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 2d8h], edx
        movzx eax, word ptr [ebp - 20ch]
        add eax, 69h
        push eax
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 75 E4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x75
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        mov ecx, dword ptr [ebp - 2a4h]
        push ecx
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 52 89 E4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 218h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 75 05 ED FF: call 0x5850db70
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 210h], eax
        mov edx, dword ptr [ebp - 210h]
        push edx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 00 E8 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        mov eax, dword ptr [ebp - 214h]
        push eax
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 02 89 E4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x89
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 64 FE EC FF: call 0x5850d4a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 C6 FF EC FF: call 0x5850d610
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 38 FF EC FF: call 0x5850d590
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 AA FE EC FF: call 0x5850d510
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 21ch], eax
        mov ecx, dword ptr [ebp - 208h]
        movzx edx, byte ptr [ecx + 21ch]
        imul eax, edx, 18h
        mov ecx, dword ptr [ebp - 208h]
        lea edx, [ecx + eax + 144h]
        push edx
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 02 8A E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x8a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 224h], ecx
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 15 05 ED FF: call 0x5850dbd0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        mov eax, dword ptr [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 CD 89 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x89
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 22ch], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 AD 04 ED FF: call 0x5850dba0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 95 89 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x89
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 234h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 75 06 ED FF: call 0x5850dda0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        mov edx, dword ptr [ebp - 230h]
        push edx
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 4D DA 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xda
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 4F 06 ED FF: call 0x5850dda0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 0c0h], eax
        mov byte ptr [ebp - 204h], 20h
        push 0ffh
        push 0
        lea edx, [ebp - 203h]
        push edx
        ; Exact mapped bytes E8 99 F6 20 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf6
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 18 06 ED FF: call 0x5850dda0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 76 7F: jbe 0x5863d80b
        __asm _emit 0x76
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 06 06 ED FF: call 0x5850dda0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 73 6C: jae 0x5863d80b
        __asm _emit 0x73
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 F3 05 ED FF: call 0x5850dda0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xff
        add eax, 1
        imul eax, eax, 3e8h
        mov dword ptr [ebp - 238h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 D6 05 ED FF: call 0x5850dda0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xff
        add eax, 1
        mov dword ptr [ebp - 23ch], eax
        push 588af0e0h
        ; Exact mapped bytes E8 13 48 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x48
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 240h], eax
        mov edx, dword ptr [ebp - 238h]
        push edx
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 240h]
        push ecx
        lea edx, [ebp - 204h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 244h], ecx
        lea edx, [ebp - 204h]
        push edx
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 71 88 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 24ch], ecx
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 21 05 ED FF: call 0x5850dd70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        mov eax, dword ptr [ebp - 248h]
        push eax
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 29 D9 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xd9
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 254h], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 59 02 ED FF: call 0x5850dae0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        mov ecx, dword ptr [ebp - 250h]
        push ecx
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 F1 D8 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd8
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 258h], eax
        push 0
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 72 6F 18 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x6f
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 25ch], edx
        push 0
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 B3 D8 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd8
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 264h], ecx
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 13 02 ED FF: call 0x5850db10
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        mov eax, dword ptr [ebp - 260h]
        push eax
        mov ecx, dword ptr [ebp - 264h]
        ; Exact mapped bytes E8 7B D8 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd8
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 26ch], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 7B 01 ED FF: call 0x5850dab0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        mov ecx, dword ptr [ebp - 268h]
        push ecx
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 43 D8 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd8
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 270h], eax
        push 0
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 C4 6E 18 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6e
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 274h], edx
        push 0
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 05 D8 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 07 00 ED FF: call 0x5850d9a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        push 588af10ch
        ; Exact mapped bytes E8 47 46 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x46
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 27ch], eax
        push 0f4240h
        mov ecx, dword ptr [ebp - 278h]
        push ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 254h]
        mov dword ptr [ebp - 280h], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 A7 86 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 69 FF EC FF: call 0x5850d970
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        push 588af134h
        ; Exact mapped bytes E8 D9 45 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 288h], eax
        push 0f4240h
        mov edx, dword ptr [ebp - 284h]
        push edx
        mov eax, dword ptr [ebp - 288h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 258h]
        mov dword ptr [ebp - 28ch], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 39 86 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 294h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 D9 01 ED FF: call 0x5850dc60
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 290h], edx
        mov eax, dword ptr [ebp - 290h]
        push eax
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 EE D6 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd6
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 29ch], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 BE 01 ED FF: call 0x5850dc80
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 298h], ecx
        mov edx, dword ptr [ebp - 298h]
        push edx
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 B3 D6 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd6
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 2c0h], ecx
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 A3 01 ED FF: call 0x5850dca0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, ax
        mov dword ptr [ebp - 2a0h], eax
        mov ecx, dword ptr [ebp - 2a0h]
        push ecx
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 78 D6 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd6
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 104h]
        mov dword ptr [ebp - 2ach], eax
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 88 01 ED FF: call 0x5850dcc0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 2a8h], edx
        mov eax, dword ptr [ebp - 2a8h]
        push eax
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 3D D6 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd6
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 2b4h], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 8D 01 ED FF: call 0x5850dd00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 2b0h], ecx
        mov edx, dword ptr [ebp - 2b0h]
        push edx
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 02 D6 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd6
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 10ch]
        mov dword ptr [ebp - 2bch], ecx
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 22 02 ED FF: call 0x5850ddd0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, ax
        mov dword ptr [ebp - 2b8h], eax
        mov ecx, dword ptr [ebp - 2b8h]
        push ecx
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 C7 D5 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd5
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 208h]
        mov eax, dword ptr [edx + 110h]
        mov dword ptr [ebp - 2c4h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 67 01 ED FF: call 0x5850dd50
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, ax
        mov dword ptr [ebp - 2dch], edx
        mov eax, dword ptr [ebp - 2dch]
        push eax
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 8C D5 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd5
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [ebp - 2cch], edx
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 BC 00 ED FF: call 0x5850dce0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, ax
        mov dword ptr [ebp - 2c8h], ecx
        mov edx, dword ptr [ebp - 2c8h]
        push edx
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 51 D5 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd5
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 208h]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 2d4h], ecx
        mov edx, dword ptr [ebp - 208h]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 C1 00 ED FF: call 0x5850dd20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        mov eax, dword ptr [ebp - 2d0h]
        push eax
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 19 D5 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd5
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CE 33 1F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x33
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
