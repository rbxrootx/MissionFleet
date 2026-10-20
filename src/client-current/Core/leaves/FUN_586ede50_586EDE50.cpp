// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EDE50 .. +0x258 bytes.
extern "C" __declspec(naked) void FUN_586ede50_586EDE50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 0b75h]
        mov byte ptr [ebp - 0ch], cl
        cmp byte ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x586ede7a
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp byte ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 84 78 01 00 00: je 0x586edfed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2A 02 00 00: jmp 0x586ee0a4
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ede8c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586edf31
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 974h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx*4 + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 03 6C D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x6c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 84 8D D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        push 82h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1A 77 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x77
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B5 7F D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7f
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ede83
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586edf43
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586edfe8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 0a74h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx*4 + 9]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4C 6B D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x6b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CD 8C D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 0a74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 30h], ecx
        push 21h
        push 0f4h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 63 76 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x76
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 0a74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 FE 7E D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7e
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586edf3a
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x586ee0a4
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586edfff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ee0a4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 0a74h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx*4 + 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 90 6A D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x6a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 11 8C D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 0a74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 44h], ecx
        push 0
        push 258h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 A7 75 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x75
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 0a74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 48h], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 42 7E D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7e
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586edff6
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
