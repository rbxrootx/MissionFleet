// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046E660 .. +0x2A0 bytes.
extern "C" __declspec(naked) void FUN_0046e660_0046E660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov byte ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 7C 14: jl 0x46e68d
        __asm _emit 0x7c
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 7D 09: jge 0x46e68d
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 08: jmp 0x46e695
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 EE 0E 00 00: call 0x46f580
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0e06d7363h
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x46e755
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 10h], 3
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x46e755
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 14h], 19930520h
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x46e755
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x46e755
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2D 0C 00 00: call 0x46f300
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 75 05: jne 0x46e6de
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x46e8fc
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 1D 0C 00 00: call 0x46f300
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 6ch]
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes E8 12 0C 00 00: call 0x46f300
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 70h]
        mov dword ptr [ebp + 10h], eax
        mov byte ptr [ebp - 8], 1
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 ED CD 00 00: call 0x47b4f0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x46e713
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 08: jmp 0x46e71b
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 68 0E 00 00: call 0x46f580
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0e06d7363h
        ; Exact mapped bytes 75 28: jne 0x46e74e
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 3
        ; Exact mapped bytes 75 1F: jne 0x46e74e
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 14h], 19930520h
        ; Exact mapped bytes 75 13: jne 0x46e74e
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 75 0A: jne 0x46e74e
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes E8 37 0E 00 00: call 0x46f580
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x46e755
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0e06d7363h
        ; Exact mapped bytes 0F 85 58 01 00 00: jne 0x46e8bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 3
        ; Exact mapped bytes 0F 85 4B 01 00 00: jne 0x46e8bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 14h], 19930520h
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x46e8bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        ; Exact mapped bytes E8 E6 69 FF FF: call 0x465180
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 12: jmp 0x46e7b4
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 14h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 83 DF 00 00 00: jae 0x46e89f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 7F 0B: jg 0x46e7d5
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7E 02: jle 0x46e7d7
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB CB: jmp 0x46e7a2
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 12: jmp 0x46e7fd
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, 10h
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 8E 93 00 00 00: jle 0x46e89a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 4
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 12: jmp 0x46e838
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 4
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7E 57: jle 0x46e895
        __asm _emit 0x7e
        __asm _emit 0x57
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 CC 01 00 00: call 0x46ea20
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x46e85d
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB C9: jmp 0x46e826
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov dl, byte ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 80 03 00 00: call 0x46ec10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes EB 65: jmp 0x46e8fa
        __asm _emit 0xeb
        __asm _emit 0x65
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x46e7eb
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 03 FF FF FF: jmp 0x46e7a2
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 1ch]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x46e8ba
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 39 08 00 00: call 0x46f0f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 3C: jmp 0x46e8f8
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp + 1ch]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 75 2A: jne 0x46e8f3
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 12 00 00 00: call 0x46e900
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        ; Exact mapped bytes EB 05: jmp 0x46e8f8
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 D8 0B 00 00: call 0x46f4d0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x46e8fc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9E: jmp 0x46e89a
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov esp, ebp
        pop ebp
        ret
    }
}
