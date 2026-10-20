// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864DD10 .. +0x1ABF bytes.
extern "C" __declspec(naked) void FUN_5864dd10_5864DD10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 330h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588af55ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2f0h], 0
        ; Exact mapped bytes 74 49: je 0x5864dd7a
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2f0h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 20: je 0x5864dd63
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 11ch], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 95 E4 FE FF FF: call dword ptr [ebp - 0x11c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864dd6d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2f0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2ech], 0
        ; Exact mapped bytes 74 49: je 0x5864ddcf
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ech]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x5864ddb8
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 124h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 95 DC FE FF FF: call dword ptr [ebp - 0x124]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ddc2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ech], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2e8h], 0
        ; Exact mapped bytes 74 49: je 0x5864de24
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2e8h]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x5864de0d
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 12ch], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 D4 FE FF FF: call dword ptr [ebp - 0x12c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864de17
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2e8h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 13ch], 0
        ; Exact mapped bytes 74 49: je 0x5864de79
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 20: je 0x5864de62
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 134h], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 95 CC FE FF FF: call dword ptr [ebp - 0x134]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864de6c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 13ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 138h], 0
        ; Exact mapped bytes 74 49: je 0x5864dece
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x5864deb7
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 13ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 C4 FE FF FF: call dword ptr [ebp - 0x13c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864dec1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 138h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 134h], 0
        ; Exact mapped bytes 74 49: je 0x5864df23
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x5864df0c
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 144h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 BC FE FF FF: call dword ptr [ebp - 0x144]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864df16
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 134h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 130h], 0
        ; Exact mapped bytes 74 49: je 0x5864df78
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x5864df61
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14ch], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 B4 FE FF FF: call dword ptr [ebp - 0x14c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864df6b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 130h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0bch], 0
        ; Exact mapped bytes 74 49: je 0x5864dfcd
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x5864dfb6
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 154h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 AC FE FF FF: call dword ptr [ebp - 0x154]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864dfc0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0bch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864dfdf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 63: jge 0x5864e048
        __asm _emit 0x7d
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 15ch], 0
        ; Exact mapped bytes 74 51: je 0x5864e046
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 15ch]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x5864e02b
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 15ch], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 A4 FE FF FF: call dword ptr [ebp - 0x15c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e035
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 15ch], 0
        ; Exact mapped bytes EB 8E: jmp 0x5864dfd6
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864e05a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 63: jge 0x5864e0c3
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 94h], 0
        ; Exact mapped bytes 74 51: je 0x5864e0c1
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 94h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x5864e0a6
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 164h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 9C FE FF FF: call dword ptr [ebp - 0x164]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e0b0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 94h], 0
        ; Exact mapped bytes EB 8E: jmp 0x5864e051
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864e0d5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 63: jge 0x5864e13e
        __asm _emit 0x7d
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 9ch], 0
        ; Exact mapped bytes 74 51: je 0x5864e13c
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 9ch]
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x5864e121
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 16ch], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 94 FE FF FF: call dword ptr [ebp - 0x16c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e12b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 9ch], 0
        ; Exact mapped bytes EB 8E: jmp 0x5864e0cc
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864e150
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 63: jge 0x5864e1b9
        __asm _emit 0x7d
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 0a4h], 0
        ; Exact mapped bytes 74 51: je 0x5864e1b7
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x5864e19c
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 174h], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 8C FE FF FF: call dword ptr [ebp - 0x174]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e1a6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0a4h], 0
        ; Exact mapped bytes EB 8E: jmp 0x5864e147
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 74 49: je 0x5864e20e
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x5864e1f7
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 17ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 84 FE FF FF: call dword ptr [ebp - 0x17c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e201
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 49: je 0x5864e263
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x5864e24c
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 184h], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 7C FE FF FF: call dword ptr [ebp - 0x184]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e256
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b4h], 0
        ; Exact mapped bytes 74 49: je 0x5864e2b8
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x5864e2a1
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 18ch], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 74 FE FF FF: call dword ptr [ebp - 0x18c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e2ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b4h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b8h], 0
        ; Exact mapped bytes 74 49: je 0x5864e30d
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x5864e2f6
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 194h], ecx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 6C FE FF FF: call dword ptr [ebp - 0x194]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e300
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b8h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c0h], 0
        ; Exact mapped bytes 74 49: je 0x5864e362
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x5864e34b
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 19ch], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 64 FE FF FF: call dword ptr [ebp - 0x19c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e355
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c0h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c4h], 0
        ; Exact mapped bytes 74 49: je 0x5864e3b7
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x5864e3a0
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 5C FE FF FF: call dword ptr [ebp - 0x1a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e3aa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c4h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c8h], 0
        ; Exact mapped bytes 74 49: je 0x5864e40c
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x5864e3f5
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 54 FE FF FF: call dword ptr [ebp - 0x1ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e3ff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c8h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0cch], 0
        ; Exact mapped bytes 74 49: je 0x5864e461
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x5864e44a
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1b4h], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 4C FE FF FF: call dword ptr [ebp - 0x1b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e454
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0d0h], 0
        ; Exact mapped bytes 74 49: je 0x5864e4b6
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x5864e49f
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1bch], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 44 FE FF FF: call dword ptr [ebp - 0x1bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e4a9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0d4h], 0
        ; Exact mapped bytes 74 49: je 0x5864e50b
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x5864e4f4
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1c4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 3C FE FF FF: call dword ptr [ebp - 0x1c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e4fe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d4h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 74 49: je 0x5864e560
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x5864e549
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1cch], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 34 FE FF FF: call dword ptr [ebp - 0x1cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e553
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d8h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0dch], 0
        ; Exact mapped bytes 74 49: je 0x5864e5b5
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x5864e59e
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1d4h], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 2C FE FF FF: call dword ptr [ebp - 0x1d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e5a8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0dch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864e5c7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7D 63: jge 0x5864e630
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 0e0h], 0
        ; Exact mapped bytes 74 51: je 0x5864e62e
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0e0h]
        mov dword ptr [ebp - 70h], ecx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x5864e613
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1dch], ecx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 24 FE FF FF: call dword ptr [ebp - 0x1dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e61d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e0h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 0e0h], 0
        ; Exact mapped bytes EB 8E: jmp 0x5864e5be
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864e642
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7D 63: jge 0x5864e6ab
        __asm _emit 0x7d
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 108h], 0
        ; Exact mapped bytes 74 51: je 0x5864e6a9
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 108h]
        mov dword ptr [ebp - 74h], eax
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x5864e68e
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1e4h], eax
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 1C FE FF FF: call dword ptr [ebp - 0x1e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e698
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e8h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 108h], 0
        ; Exact mapped bytes EB 8E: jmp 0x5864e639
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 140h], 0
        ; Exact mapped bytes 74 49: je 0x5864e700
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 78h], edx
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x5864e6e9
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ech], edx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 14 FE FF FF: call dword ptr [ebp - 0x1ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e6f3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 140h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864e712
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 63: jge 0x5864e77b
        __asm _emit 0x7d
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 144h], 0
        ; Exact mapped bytes 74 51: je 0x5864e779
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 144h]
        mov dword ptr [ebp - 7ch], eax
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x5864e75e
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 0C FE FF FF: call dword ptr [ebp - 0x1f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e768
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f8h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 144h], 0
        ; Exact mapped bytes EB 8E: jmp 0x5864e709
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 14ch], 0
        ; Exact mapped bytes 74 49: je 0x5864e7d0
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14ch]
        mov dword ptr [ebp - 80h], edx
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 20: je 0x5864e7b9
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1fch], edx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 04 FE FF FF: call dword ptr [ebp - 0x1fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e7c3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 200h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 150h], 0
        ; Exact mapped bytes 74 55: je 0x5864e831
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 150h]
        mov dword ptr [ebp - 84h], eax
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 26: je 0x5864e81a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 204h], eax
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 95 FC FD FF FF: call dword ptr [ebp - 0x204]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e824
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 208h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 150h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 154h], 0
        ; Exact mapped bytes 74 55: je 0x5864e892
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 154h]
        mov dword ptr [ebp - 88h], ecx
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 26: je 0x5864e87b
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 20ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 F4 FD FF FF: call dword ptr [ebp - 0x20c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e885
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 210h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 154h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 158h], 0
        ; Exact mapped bytes 74 55: je 0x5864e8f3
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 158h]
        mov dword ptr [ebp - 8ch], edx
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 26: je 0x5864e8dc
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 214h], edx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 EC FD FF FF: call dword ptr [ebp - 0x214]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e8e6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 218h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 158h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864e905
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x5864e97a
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 15ch], 0
        ; Exact mapped bytes 74 5D: je 0x5864e978
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 15ch]
        mov dword ptr [ebp - 90h], eax
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 26: je 0x5864e95d
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 21ch], eax
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 E4 FD FF FF: call dword ptr [ebp - 0x21c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e967
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 220h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 15ch], 0
        ; Exact mapped bytes EB 82: jmp 0x5864e8fc
        __asm _emit 0xeb
        __asm _emit 0x82
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 74 55: je 0x5864e9db
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov dword ptr [ebp - 94h], edx
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 26: je 0x5864e9c4
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 224h], edx
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 95 DC FD FF FF: call dword ptr [ebp - 0x224]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864e9ce
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 228h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 170h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 174h], 0
        ; Exact mapped bytes 74 55: je 0x5864ea3c
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 26: je 0x5864ea25
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 22ch], eax
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 D4 FD FF FF: call dword ptr [ebp - 0x22c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ea2f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 230h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 174h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 178h], 0
        ; Exact mapped bytes 74 55: je 0x5864ea9d
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 178h]
        mov dword ptr [ebp - 9ch], ecx
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 26: je 0x5864ea86
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 234h], ecx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 CC FD FF FF: call dword ptr [ebp - 0x234]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ea90
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 238h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 178h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864eaaf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 8D A5 00 00 00: jge 0x5864eb5e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5864eacb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x5864eb59
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 17ch]
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 69: je 0x5864eb54
        __asm _emit 0x74
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 17ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0a0h], ecx
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 26: je 0x5864eb33
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 23ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 C4 FD FF FF: call dword ptr [ebp - 0x23c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864eb3d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 240h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 17ch]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes E9 69 FF FF FF: jmp 0x5864eac2
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 48 FF FF FF: jmp 0x5864eaa6
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864eb70
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 6F: jge 0x5864ebe5
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 1a4h], 0
        ; Exact mapped bytes 74 5D: je 0x5864ebe3
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        mov dword ptr [ebp - 0a4h], edx
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 26: je 0x5864ebc8
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 244h], edx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 95 BC FD FF FF: call dword ptr [ebp - 0x244]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ebd2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 248h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 1a4h], 0
        ; Exact mapped bytes EB 82: jmp 0x5864eb67
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864ebf7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x5864ec6c
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 1b8h], 0
        ; Exact mapped bytes 74 5D: je 0x5864ec6a
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1b8h]
        mov dword ptr [ebp - 0a8h], ecx
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 26: je 0x5864ec4f
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 95 B4 FD FF FF: call dword ptr [ebp - 0x24c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ec59
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 250h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 1b8h], 0
        ; Exact mapped bytes EB 82: jmp 0x5864ebee
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864ec7e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 6F: jge 0x5864ecf3
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 1c0h], 0
        ; Exact mapped bytes 74 5D: je 0x5864ecf1
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1c0h]
        mov dword ptr [ebp - 0ach], eax
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 26: je 0x5864ecd6
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ach]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 254h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 95 AC FD FF FF: call dword ptr [ebp - 0x254]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ece0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 258h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 1c0h], 0
        ; Exact mapped bytes EB 82: jmp 0x5864ec75
        __asm _emit 0xeb
        __asm _emit 0x82
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1c8h], 0
        ; Exact mapped bytes 74 55: je 0x5864ed54
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1c8h]
        mov dword ptr [ebp - 0b0h], edx
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 26: je 0x5864ed3d
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0b0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 25ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes FF 95 A4 FD FF FF: call dword ptr [ebp - 0x25c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ed47
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 260h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1c8h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1cch], 0
        ; Exact mapped bytes 74 55: je 0x5864edb5
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1cch]
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 26: je 0x5864ed9e
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0b4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 264h], eax
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 95 9C FD FF FF: call dword ptr [ebp - 0x264]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864eda8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 268h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1cch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1d0h], 0
        ; Exact mapped bytes 74 55: je 0x5864ee16
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1d0h]
        mov dword ptr [ebp - 0b8h], ecx
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 26: je 0x5864edff
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 26ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 95 94 FD FF FF: call dword ptr [ebp - 0x26c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ee09
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 270h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1d0h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1d4h], 0
        ; Exact mapped bytes 74 55: je 0x5864ee77
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1d4h]
        mov dword ptr [ebp - 0bch], edx
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 26: je 0x5864ee60
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 274h], edx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 95 8C FD FF FF: call dword ptr [ebp - 0x274]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ee6a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 278h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1d4h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1d8h], 0
        ; Exact mapped bytes 74 55: je 0x5864eed8
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1d8h]
        mov dword ptr [ebp - 0c0h], eax
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 26: je 0x5864eec1
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 27ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes FF 95 84 FD FF FF: call dword ptr [ebp - 0x27c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864eecb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 280h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1d8h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864eeea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 6F: jge 0x5864ef5f
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 1dch], 0
        ; Exact mapped bytes 74 5D: je 0x5864ef5d
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1dch]
        mov dword ptr [ebp - 0c4h], ecx
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 26: je 0x5864ef42
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0c4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 284h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes FF 95 7C FD FF FF: call dword ptr [ebp - 0x284]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864ef4c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 288h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 1dch], 0
        ; Exact mapped bytes EB 82: jmp 0x5864eee1
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864ef71
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 8D A5 00 00 00: jge 0x5864f020
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5864ef8d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x5864f01b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 1e8h]
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 69: je 0x5864f016
        __asm _emit 0x74
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 1e8h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0c8h], edx
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 26: je 0x5864eff5
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 28ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes FF 95 74 FD FF FF: call dword ptr [ebp - 0x28c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864efff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 290h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 1e8h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes E9 69 FF FF FF: jmp 0x5864ef84
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 48 FF FF FF: jmp 0x5864ef68
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 210h], 0
        ; Exact mapped bytes 74 55: je 0x5864f081
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 0cch], eax
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 26: je 0x5864f06a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 294h], eax
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 95 6C FD FF FF: call dword ptr [ebp - 0x294]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f074
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 298h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 210h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 214h], 0
        ; Exact mapped bytes 74 55: je 0x5864f0e2
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 214h]
        mov dword ptr [ebp - 0d0h], ecx
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 26: je 0x5864f0cb
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 29ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes FF 95 64 FD FF FF: call dword ptr [ebp - 0x29c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f0d5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 214h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 218h], 0
        ; Exact mapped bytes 74 55: je 0x5864f143
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 218h]
        mov dword ptr [ebp - 0d4h], edx
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 26: je 0x5864f12c
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2a4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes FF 95 5C FD FF FF: call dword ptr [ebp - 0x2a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f136
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 218h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 234h], 0
        ; Exact mapped bytes 74 55: je 0x5864f1a4
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 234h]
        mov dword ptr [ebp - 0d8h], eax
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 26: je 0x5864f18d
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0d8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ach], eax
        push 1
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes FF 95 54 FD FF FF: call dword ptr [ebp - 0x2ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f197
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 234h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 238h], 0
        ; Exact mapped bytes 74 55: je 0x5864f205
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 238h]
        mov dword ptr [ebp - 0dch], ecx
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 26: je 0x5864f1ee
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2b4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes FF 95 4C FD FF FF: call dword ptr [ebp - 0x2b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f1f8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2b8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 238h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 23ch], 0
        ; Exact mapped bytes 74 55: je 0x5864f266
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 23ch]
        mov dword ptr [ebp - 0e0h], edx
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 26: je 0x5864f24f
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0e0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2bch], edx
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes FF 95 44 FD FF FF: call dword ptr [ebp - 0x2bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f259
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 23ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 240h], 0
        ; Exact mapped bytes 74 55: je 0x5864f2c7
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 0e4h], eax
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 26: je 0x5864f2b0
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2c4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes FF 95 3C FD FF FF: call dword ptr [ebp - 0x2c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f2ba
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2c8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 240h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 24ch], 0
        ; Exact mapped bytes 74 55: je 0x5864f328
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 0e8h], ecx
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 26: je 0x5864f311
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2cch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes FF 95 34 FD FF FF: call dword ptr [ebp - 0x2cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f31b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 250h], 0
        ; Exact mapped bytes 74 55: je 0x5864f389
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 250h]
        mov dword ptr [ebp - 0ech], edx
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 74 26: je 0x5864f372
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0ech]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2d4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes FF 95 2C FD FF FF: call dword ptr [ebp - 0x2d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f37c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2d8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 250h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 254h], 0
        ; Exact mapped bytes 74 55: je 0x5864f3ea
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 254h]
        mov dword ptr [ebp - 0f0h], eax
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 26: je 0x5864f3d3
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0f0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2dch], eax
        push 1
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes FF 95 24 FD FF FF: call dword ptr [ebp - 0x2dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f3dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 254h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 260h], 0
        ; Exact mapped bytes 74 55: je 0x5864f44b
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 260h]
        mov dword ptr [ebp - 0f4h], ecx
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 26: je 0x5864f434
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0f4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2e4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes FF 95 1C FD FF FF: call dword ptr [ebp - 0x2e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f43e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2e8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 260h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 264h], 0
        ; Exact mapped bytes 74 55: je 0x5864f4ac
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 264h]
        mov dword ptr [ebp - 0f8h], edx
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 26: je 0x5864f495
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ech], edx
        push 1
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes FF 95 14 FD FF FF: call dword ptr [ebp - 0x2ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f49f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 264h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 268h], 0
        ; Exact mapped bytes 74 55: je 0x5864f50d
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 268h]
        mov dword ptr [ebp - 0fch], eax
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 26: je 0x5864f4f6
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0fch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes FF 95 0C FD FF FF: call dword ptr [ebp - 0x2f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f500
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2f8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 268h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 26ch], 0
        ; Exact mapped bytes 74 55: je 0x5864f56e
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 26ch]
        mov dword ptr [ebp - 100h], ecx
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 26: je 0x5864f557
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 100h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes FF 95 04 FD FF FF: call dword ptr [ebp - 0x2fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 300h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f561
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 300h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 26ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 270h], 0
        ; Exact mapped bytes 74 55: je 0x5864f5cf
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 270h]
        mov dword ptr [ebp - 104h], edx
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 26: je 0x5864f5b8
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 104h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 304h], edx
        push 1
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes FF 95 FC FC FF FF: call dword ptr [ebp - 0x304]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f5c2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 308h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 270h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 274h], 0
        ; Exact mapped bytes 74 55: je 0x5864f630
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 274h]
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 26: je 0x5864f619
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 30ch], eax
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes FF 95 F4 FC FF FF: call dword ptr [ebp - 0x30c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 310h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f623
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 310h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 274h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 278h], 0
        ; Exact mapped bytes 74 55: je 0x5864f691
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 278h]
        mov dword ptr [ebp - 10ch], ecx
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 74 26: je 0x5864f67a
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 314h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 95 EC FC FF FF: call dword ptr [ebp - 0x314]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 318h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f684
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 318h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 278h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 27ch], 0
        ; Exact mapped bytes 74 55: je 0x5864f6f2
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 27ch]
        mov dword ptr [ebp - 110h], edx
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 26: je 0x5864f6db
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 31ch], edx
        push 1
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes FF 95 E4 FC FF FF: call dword ptr [ebp - 0x31c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f6e5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 320h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 27ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 280h], 0
        ; Exact mapped bytes 74 55: je 0x5864f753
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 280h]
        mov dword ptr [ebp - 114h], eax
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 26: je 0x5864f73c
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 324h], eax
        push 1
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes FF 95 DC FC FF FF: call dword ptr [ebp - 0x324]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 328h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f746
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 328h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 280h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 284h], 0
        ; Exact mapped bytes 74 55: je 0x5864f7b4
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 284h]
        mov dword ptr [ebp - 118h], ecx
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 26: je 0x5864f79d
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 118h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 32ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes FF 95 D4 FC FF FF: call dword ptr [ebp - 0x32c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 330h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5864f7a7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 330h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 284h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 21ch
        ; Exact mapped bytes E8 1E 80 E3 FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x80
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 D4 F1 FF: call 0x5856cbd0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd4
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
