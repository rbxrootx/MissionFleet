// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585357B0 .. +0x37C bytes.
extern "C" __declspec(naked) void FUN_585357b0_585357B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 57 03 00 00: je 0x58535b2a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 40000000h
        ; Exact mapped bytes 0F 85 66 02 00 00: jne 0x58535a4c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 0ach]
        ; Exact mapped bytes 75 15: jne 0x5853580c
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 0b0h]
        ; Exact mapped bytes 0F 84 02 02 00 00: je 0x58535a0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0ach]
        sub eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0b0h]
        sub eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 78h], 2
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x58535928
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x5853589b
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x5853589b
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x58535888
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x58535888
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x58535864
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58535880
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x58535873
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x5853587a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x58535893
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x585358aa
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x5853590e
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x5853590e
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x585358fb
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x585358fb
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x585358d7
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x585358f3
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x585358e6
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 07: jmp 0x585358ed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 0B: jmp 0x58535906
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 0F: jmp 0x5853591d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x585359e1
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 78h], 1
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x585359e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 24: jle 0x5853595f
        __asm _emit 0x7e
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 74h]
        ; Exact mapped bytes 7C 0B: jl 0x58535951
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 06: jmp 0x58535957
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 26: jmp 0x58535985
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        neg eax
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7F 0D: jg 0x58535979
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        neg edx
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 06: jmp 0x5853597f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 24: jle 0x585359b5
        __asm _emit 0x7e
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes 7C 0B: jl 0x585359a7
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 06: jmp 0x585359ad
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes EB 26: jmp 0x585359db
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        neg ecx
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7F 0D: jg 0x585359cf
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        neg eax
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 06: jmp 0x585359d5
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF F7 27 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf7
        __asm _emit 0x27
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 C3 F7 27 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf7
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 0ach]
        ; Exact mapped bytes 75 2D: jne 0x58535a4c
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 0b0h]
        ; Exact mapped bytes 75 1C: jne 0x58535a4c
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 98h], 40000000h
        ; Exact mapped bytes 75 0D: jne 0x58535a4c
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 75 48: jne 0x58535aa0
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 F7 FF FF: call 0x585351d0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 94h], 0
        ; Exact mapped bytes 75 2C: jne 0x58535aa0
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 EF F4 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xef
        __asm _emit 0xf4
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 FE F4 FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x58535a97
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C FB FF FF: call 0x58535610
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x58535aa0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 FC FF FF: call 0x58535700
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58535ac1
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58535ac1
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5A: je 0x58535b2a
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58535ae4
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB E6: jmp 0x58535aca
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 24 FB F5 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58535b08
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x58535b2a
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x58535b28
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 00 FB F5 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB A0: jmp 0x58535aca
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
