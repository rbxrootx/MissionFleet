// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585045F0 .. +0x2AE bytes.
extern "C" __declspec(naked) void FUN_585045f0_585045F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588802e0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        sub esp, 74h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 84 61 FA FF: call 0x584aa7b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        xor ecx, ecx
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 49 82 00 00: call 0x5850c890
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 7C 4E: jl 0x585046a1
        __asm _emit 0x7c
        __asm _emit 0x4e
        ; Exact mapped bytes 7F 06: jg 0x5850465b
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 76 46: jbe 0x585046a1
        __asm _emit 0x76
        __asm _emit 0x46
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 25 82 00 00: call 0x5850c890
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 70h]
        cmp eax, dword ptr [ebp - 58h]
        ; Exact mapped bytes 7C 28: jl 0x585046a1
        __asm _emit 0x7c
        __asm _emit 0x28
        ; Exact mapped bytes 7F 08: jg 0x58504683
        __asm _emit 0x7f
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 74h]
        cmp ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 76 1E: jbe 0x585046a1
        __asm _emit 0x76
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 FD 81 00 00: call 0x5850c890
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 5ch]
        sbb edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 64h], eax
        mov dword ptr [ebp - 60h], edx
        ; Exact mapped bytes EB 08: jmp 0x585046a9
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 9C: movlpd qword ptr [ebp - 0x64], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x9c
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 54h], ecx
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 8C 25 00 00: call 0x58506c50
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 AA 30 00 00: call 0x58507780
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 0E: jne 0x585046eb
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 18h]
        or edx, 4
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes E9 E4 01 00 00: jmp 0x585048cf
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 0F 35 F8 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
        and eax, 1c0h
        cmp eax, 40h
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x5850479c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x58504723
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 54h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 50h]
        sbb ecx, 0
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 7C 73: jl 0x5850479c
        __asm _emit 0x7c
        __asm _emit 0x73
        ; Exact mapped bytes 7F 06: jg 0x58504731
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 76 6B: jbe 0x5850479c
        __asm _emit 0x76
        __asm _emit 0x6b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 9F 75 00 00: call 0x5850bce0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 EC 69 00 00: call 0x5850b140
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 11h], al
        movzx eax, byte ptr [ebp - 11h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0C 7C 00 00: call 0x5850c370
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes E8 7E 60 FA FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 2E 68 00 00: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x58504797
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        or edx, 4
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 05: jmp 0x5850479c
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 75 FF FF FF: jmp 0x58504711
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 48: jne 0x585047ea
        __asm _emit 0x75
        __asm _emit 0x48
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 2C 75 00 00: call 0x5850bce0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 25 7C 00 00: call 0x5850c3f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 7ch]
        cmp eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 75 08: jne 0x585047e1
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 78h]
        cmp ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 74 09: je 0x585047ea
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        or edx, 4
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x58504881
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x58504808
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 54h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 50h]
        sbb ecx, 0
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 7C 73: jl 0x58504881
        __asm _emit 0x7c
        __asm _emit 0x73
        ; Exact mapped bytes 7F 06: jg 0x58504816
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 76 6B: jbe 0x58504881
        __asm _emit 0x76
        __asm _emit 0x6b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 BA 74 00 00: call 0x5850bce0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 07 69 00 00: call 0x5850b140
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 12h], al
        movzx eax, byte ptr [ebp - 12h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 27 7B 00 00: call 0x5850c370
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes E8 99 5F FA FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x5f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 49 67 00 00: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x5850487c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        or edx, 4
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 05: jmp 0x58504881
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 75 FF FF FF: jmp 0x585047f6
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 40h], edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 B5 7F 00 00: call 0x5850c850
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x585048bf
        __asm _emit 0xeb
        __asm _emit 0x21
    }
}
