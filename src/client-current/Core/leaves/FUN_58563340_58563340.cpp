// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58563340 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_58563340_58563340() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 36 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x36
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], eax
        ; Exact mapped bytes 75 07: jne 0x5856336d
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0f8h], 0
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x585634fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 0F 85 71 01 00 00: jne 0x585634fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1F: je 0x585633af
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 104h]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 104h
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 A7 FE FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 104h]
        xor edx, 55555555h
        ; Exact mapped bytes 0F 85 37 01 00 00: jne 0x585634fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x585633ea
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 9ch
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 A6 FE FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 98h]
        cmp edx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes 7D 1A: jge 0x58563418
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], ecx
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x585634fb
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x585634c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 0D 90 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 138h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 12 9C F2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x9c
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 6
        ; Exact mapped bytes 75 72: jne 0x585634c8
        __asm _emit 0x75
        __asm _emit 0x72
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 89 11 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x89
        __asm _emit 0x11
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x585634c8
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 89 11 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 588a9508h
        ; Exact mapped bytes E8 73 EB FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xeb
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        push 9fh
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6A B4 F9 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb4
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 89 11 00: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x89
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 588a9528h
        ; Exact mapped bytes E8 42 EB FB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xeb
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        push 10101h
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 39 B4 F9 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xb4
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 104h], 15555555h
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x585634fb
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 104h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 104h
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 A8 FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
