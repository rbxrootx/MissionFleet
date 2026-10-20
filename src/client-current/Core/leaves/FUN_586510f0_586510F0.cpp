// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586510F0 .. +0x3CF bytes.
extern "C" __declspec(naked) void FUN_586510f0_586510F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 A3 01 00 00: jne 0x586512a9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes E8 5C FB 16 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfb
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58651129
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 71 01 00 00: jge 0x586512a4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 12 FA 16 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfa
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x58651264
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 EA F9 16 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0x16
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x58651264
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E9 40 F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 3B 05 34 05 96 58: cmp eax, dword ptr [0x58960534]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x58651227
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CC 40 F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x40
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 48 08: movsx ecx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x08
        cmp ecx, 3
        ; Exact mapped bytes 75 3D: jne 0x586511ea
        __asm _emit 0x75
        __asm _emit 0x3d
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586511bf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 23: jge 0x586511e8
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 1e8h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 34h], ecx
        push 4
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 5B E6 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe6
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x586511b6
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 3B: jmp 0x58651225
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586511fc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 23: jge 0x58651225
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 1e8h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 38h], ecx
        push 5
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 1E E6 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe6
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x586511f3
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 3B: jmp 0x58651262
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58651239
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 23: jge 0x58651262
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 1e8h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E1 E5 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe5
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58651230
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 3B: jmp 0x5865129f
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58651276
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 23: jge 0x5865129f
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax*8 + 1e8h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A4 E5 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe5
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5865126d
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes E9 7C FE FF FF: jmp 0x58651120
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 12 02 00 00: jmp 0x586514bb
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 B9 F9 16 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf9
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586512cc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 0F 8D E5 01 00 00: jge 0x586514bb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 6F F8 16 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x5865147b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 47 F8 16 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0x16
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 84 59 01 00 00: je 0x5865147b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 46 3F F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x3f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x586513c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2E 3F F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3f
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 50 08: movsx edx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x50
        __asm _emit 0x08
        cmp edx, 6
        ; Exact mapped bytes 75 3D: jne 0x58651388
        __asm _emit 0x75
        __asm _emit 0x3d
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5865135d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x58651386
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 1e8h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 50h], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 BD E4 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe4
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58651354
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 3B: jmp 0x586513c3
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5865139a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x586513c3
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*8 + 1e8h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 80 E4 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe4
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58651391
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x58651479
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A0 3E F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3e
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 40 08: movsx eax, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x40
        __asm _emit 0x08
        cmp eax, 3
        ; Exact mapped bytes 75 51: jne 0x5865142a
        __asm _emit 0x75
        __asm _emit 0x51
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586513eb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 37: jge 0x58651428
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 1e8h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 61 3E F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x3e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 1ch]
        lea edx, [ecx + ecx + 4]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1B E4 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe4
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x586513e2
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB 4F: jmp 0x58651479
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5865143c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 37: jge 0x58651479
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 1e8h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 10 3E F8 FF: call 0x585d5270
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x3e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 1ch]
        lea edx, [ecx + ecx + 5]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 CA E3 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe3
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x58651433
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB 3B: jmp 0x586514b6
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5865148d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 23: jge 0x586514b6
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 1e8h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 68h], eax
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 8D E3 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58651484
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes E9 08 FE FF FF: jmp 0x586512c3
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
