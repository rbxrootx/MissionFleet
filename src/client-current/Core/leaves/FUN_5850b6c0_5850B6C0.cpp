// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B6C0 .. +0x20E bytes.
extern "C" __declspec(naked) void FUN_5850b6c0_5850B6C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 2
        ; Exact mapped bytes 74 0A: je 0x5850b6de
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes E8 17 F1 F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 EA 01 00 00: jmp 0x5850b8c8
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 09 F1 F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 C3 F8 FF FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5850b708
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 60 FF FF FF: call 0x5850b660
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 C0 01 00 00: jmp 0x5850b8c8
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 30 03 00 00: call 0x5850ba40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 F8 FF FF: call 0x5850af60
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 38: je 0x5850b75c
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 73 30: jae 0x5850b75c
        __asm _emit 0x73
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 4B 9D FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 1], al
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8D E5 FF FF: call 0x58509cd0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [ebp - 1]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 38h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 6C 01 00 00: jmp 0x5850b8c8
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 F7 FF FF: call 0x5850af20
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 09: je 0x5850b77d
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 73 09: jae 0x5850b78c
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 20h
        ; Exact mapped bytes EB 2F: jmp 0x5850b7bb
        __asm _emit 0xeb
        __asm _emit 0x2f
        cmp dword ptr [ebp - 10h], 3fffffffh
        ; Exact mapped bytes 73 0A: jae 0x5850b79f
        __asm _emit 0x73
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 10h]
        shl edx, 1
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 1C: jmp 0x5850b7bb
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 10h], 7fffffffh
        ; Exact mapped bytes 73 09: jae 0x5850b7b1
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 7fffffffh
        ; Exact mapped bytes EB 0A: jmp 0x5850b7bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes E8 3A F0 F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf0
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x5850b8c8
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 40h
        push ecx
        ; Exact mapped bytes E8 45 D9 F9 FF: call 0x584a9110
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd9
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 DC BA F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xba
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 05 EF F9 FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xef
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 38h], eax
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 96 0A 00 00: call 0x5850c2b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3ch]
        and eax, 4
        ; Exact mapped bytes 74 17: je 0x5850b83d
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 36 0A 00 00: call 0x5850c270
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2F: jmp 0x5850b86c
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [ebp - 28h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 52 FB FF FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 05 0A 00 00: call 0x5850c270
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 1
        ; Exact mapped bytes 74 23: je 0x5850b89a
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        add edx, 40h
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 63 85 F9 FF: call 0x584a3df0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 97 EE F9 FF: call 0x584aa730
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3ch]
        or eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 3ch], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 CE 9B FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 2], al
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 10 E4 FF FF: call 0x58509cd0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [ebp - 2]
        mov byte ptr [eax], cl
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
