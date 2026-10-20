// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585CAD30 .. +0x642 bytes.
extern "C" __declspec(naked) void FUN_585cad30_585CAD30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 840h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 808h], ecx
        mov dword ptr [ebp - 81ch], 1
        mov dword ptr [ebp - 80ch], 0
        mov dword ptr [ebp - 818h], 0
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 D8 68 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 1
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 6eh
        ; Exact mapped bytes 75 0C: jne 0x585cad94
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 80ch], 7
        ; Exact mapped bytes EB 66: jmp 0x585cadfa
        __asm _emit 0xeb
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 AB 68 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, -5ch
        ; Exact mapped bytes 75 0C: jne 0x585cadc2
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 80ch], 4
        ; Exact mapped bytes EB 38: jmp 0x585cadfa
        __asm _emit 0xeb
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 7D 68 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, 1
        shl ecx, 0
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, -40h
        ; Exact mapped bytes 75 0C: jne 0x585cadf0
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 80ch], 6
        ; Exact mapped bytes EB 0A: jmp 0x585cadfa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 80ch], 3
        mov eax, dword ptr [ebp - 80ch]
        mov dword ptr [ebp - 810h], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x585caf15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 808h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 2C 68 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 80ch]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 20h
        ; Exact mapped bytes 74 1F: je 0x585cae52
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 0C 68 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 80ch]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x585cae61
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dword ptr [ebp - 81ch], 0
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x585caf15
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 DE 67 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 810h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 20h
        ; Exact mapped bytes 74 1F: je 0x585caea0
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 BE 67 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 810h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x585caea4
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 73: jmp 0x585caf15
        __asm _emit 0xeb
        __asm _emit 0x73
        ; Exact mapped bytes EB 6C: jmp 0x585caf10
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 9B 67 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 810h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 30h
        ; Exact mapped bytes 7C 40: jl 0x585caf04
        __asm _emit 0x7c
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 7B 67 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 810h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 39h
        ; Exact mapped bytes 7F 20: jg 0x585caf04
        __asm _emit 0x7f
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 810h]
        add eax, 1
        mov dword ptr [ebp - 810h], eax
        mov ecx, dword ptr [ebp - 818h]
        add ecx, 1
        mov dword ptr [ebp - 818h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x585caf10
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [ebp - 81ch], 0
        ; Exact mapped bytes EB 05: jmp 0x585caf15
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 F1 FE FF FF: jmp 0x585cae06
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 81ch], 0
        ; Exact mapped bytes 0F 84 46 04 00 00: je 0x585cb368
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 400h
        push 0
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes E8 DB 1E 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x1e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [ebp - 808h]
        mov edx, dword ptr [ecx + 21ef4h]
        mov dword ptr [eax + 21ef8h], edx
        mov eax, dword ptr [ebp - 808h]
        mov dword ptr [eax + 21ef4h], 0
        push 18h
        push 0
        mov ecx, dword ptr [ebp - 808h]
        add ecx, 21edch
        push ecx
        ; Exact mapped bytes E8 9A 1E 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x1e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 808h]
        add edx, 21ec4h
        push edx
        push 18h
        mov eax, dword ptr [ebp - 808h]
        add eax, 21edch
        push eax
        ; Exact mapped bytes E8 E7 91 1E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x91
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 814h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585cafb7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 814h]
        add ecx, 1
        mov dword ptr [ebp - 814h], ecx
        mov edx, dword ptr [ebp - 814h]
        cmp edx, dword ptr [ebp - 818h]
        ; Exact mapped bytes 0F 8D C1 00 00 00: jge 0x585cb08a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 76 66 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x66
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 814h]
        add ecx, dword ptr [ebp - 80ch]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        sub edx, 30h
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        mov eax, dword ptr [ebp - 818h]
        sub eax, dword ptr [ebp - 814h]
        sub eax, 1
        push eax
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 0D D0 50 89 58: movsd xmm1, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 11 85 D0 F7 FF FF: movsd qword ptr [ebp - 0x830], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 12 69 EC FF: call 0x58491930
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x69
        __asm _emit 0xec
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 9D C8 F7 FF FF: fstp qword ptr [ebp - 0x838]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 85 D0 F7 FF FF: movsd xmm0, qword ptr [ebp - 0x830]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 85 C8 F7 FF FF: mulsd xmm0, qword ptr [ebp - 0x838]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 11 85 C0 F7 FF FF: movsd qword ptr [ebp - 0x840], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 808h]
        mov edx, dword ptr [ecx + 21ef4h]
        mov dword ptr [ebp - 824h], edx
        ; Exact mapped bytes F2 0F 2A 85 DC F7 FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x824]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 58 85 C0 F7 FF FF: addsd xmm0, qword ptr [ebp - 0x840]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 808h]
        mov dword ptr [ecx + 21ef4h], eax
        mov edx, dword ptr [ebp - 808h]
        cmp dword ptr [edx + 21ef4h], 0ffffh
        ; Exact mapped bytes 7E 02: jle 0x585cb085
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x585cb08a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 1E FF FF FF: jmp 0x585cafa8
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 808h]
        cmp dword ptr [eax + 21ef4h], 0ffffh
        ; Exact mapped bytes 7F 5B: jg 0x585cb0f7
        __asm _emit 0x7f
        __asm _emit 0x5b
        push 18h
        push 0
        mov ecx, dword ptr [ebp - 808h]
        add ecx, 21ec4h
        push ecx
        ; Exact mapped bytes E8 5E 1D 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 21ef4h]
        push eax
        push 588ad9cch
        push 18h
        mov ecx, dword ptr [ebp - 808h]
        add ecx, 21ec4h
        push ecx
        ; Exact mapped bytes E8 15 5D EE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 808h]
        add edx, 21ec4h
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A A5 01 00: call 0x585e5640
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 48 65 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 80ch]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 20h
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x585cb1a7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 820h], 0
        mov eax, dword ptr [ebp - 80ch]
        add eax, 1
        mov dword ptr [ebp - 80ch], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 6A: je 0x585cb1a7
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 808h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 02 65 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 80ch]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x585cb160
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 49: jmp 0x585cb1a7
        __asm _emit 0xeb
        __asm _emit 0x49
        ; Exact mapped bytes EB 45: jmp 0x585cb1a5
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 DF 64 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 820h]
        mov edx, dword ptr [ebp - 80ch]
        mov al, byte ptr [eax + edx]
        mov byte ptr [ebp + ecx - 404h], al
        mov ecx, dword ptr [ebp - 820h]
        add ecx, 1
        mov dword ptr [ebp - 820h], ecx
        mov edx, dword ptr [ebp - 80ch]
        add edx, 1
        mov dword ptr [ebp - 80ch], edx
        ; Exact mapped bytes EB 8D: jmp 0x585cb134
        __asm _emit 0xeb
        __asm _emit 0x8d
        mov eax, dword ptr [ebp - 808h]
        cmp dword ptr [eax + 21ef4h], 0ffffh
        ; Exact mapped bytes 0F 8F A8 00 00 00: jg 0x585cb265
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        mov ecx, dword ptr [ebp - 808h]
        add ecx, 21ec4h
        push ecx
        ; Exact mapped bytes E8 3D 1C 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 21ef4h]
        push eax
        push 588ad9d0h
        push 18h
        mov ecx, dword ptr [ebp - 808h]
        add ecx, 21ec4h
        push ecx
        ; Exact mapped bytes E8 F4 5B EE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x5b
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 10h
        lea edx, [ebp - 404h]
        push edx
        ; Exact mapped bytes E8 75 5F 28 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x5f
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x585cb22e
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        mov eax, dword ptr [ebp - 808h]
        add eax, 21ec4h
        push eax
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 51 FA FF: call 0x58570380
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x51
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x585cb24e
        __asm _emit 0xeb
        __asm _emit 0x20
        lea ecx, [ebp - 404h]
        push ecx
        mov edx, dword ptr [ebp - 808h]
        add edx, 21ec4h
        push edx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 51 FA FF: call 0x58570380
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 A1 52 F0 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x52
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x585cb368
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 808h]
        add ecx, 21ec4h
        push ecx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 3D FA FF: call 0x5856eff0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x3d
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x585cb2f0
        __asm _emit 0x74
        __asm _emit 0x6f
        push 18h
        push 0
        mov edx, dword ptr [ebp - 808h]
        add edx, 21ec4h
        push edx
        ; Exact mapped bytes E8 79 1B 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x1b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 808h]
        add eax, 21edch
        push eax
        push 18h
        mov ecx, dword ptr [ebp - 808h]
        add ecx, 21ec4h
        push ecx
        ; Exact mapped bytes E8 C6 8E 1E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8e
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 21ef8h]
        mov dword ptr [edx + 21ef4h], ecx
        mov edx, dword ptr [ebp - 808h]
        add edx, 21ec4h
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 A3 01 00: call 0x585e5640
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 78: jmp 0x585cb368
        __asm _emit 0xeb
        __asm _emit 0x78
        push 400h
        push 0
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes E8 0D 1B 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x1b
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 0ffffh
        push 588ad9d4h
        ; Exact mapped bytes E8 DB 6C F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x6c
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        push 400h
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes E8 C6 5A EE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x5a
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 828h], eax
        push 6464ffh
        lea ecx, [ebp - 804h]
        push ecx
        mov ecx, dword ptr [ebp - 828h]
        ; Exact mapped bytes E8 7A A1 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa1
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 808h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 99 51 F0 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x51
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 DE 5C 26 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5c
        __asm _emit 0x26
        __asm _emit 0x00
    }
}
