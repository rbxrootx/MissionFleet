// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EDBE0 .. +0x267 bytes.
extern "C" __declspec(naked) void FUN_586edbe0_586EDBE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 0b75h]
        mov byte ptr [ebp - 0ch], cl
        cmp byte ptr [ebp - 0ch], 1
        ; Exact mapped bytes 74 19: je 0x586edc14
        __asm _emit 0x74
        __asm _emit 0x19
        cmp byte ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x586edcd0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x586edd8c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2F 02 00 00: jmp 0x586ede43
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586edc26
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586edccb
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
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx*4 + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 69 6E D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 EA 8F D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 0a74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1ch], ecx
        push 2eh
        push 0d2h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 80 79 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 0a74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1B 82 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x82
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586edc1d
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 73 01 00 00: jmp 0x586ede43
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586edce2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586edd87
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
        lea eax, [edx*4 + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AD 6D D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x6d
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2E 8F D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 0a74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 30h], ecx
        push 39h
        push 0d2h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C4 78 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x78
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
        ; Exact mapped bytes E8 5F 81 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x81
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586edcd9
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x586ede43
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586edd9e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ede43
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
        ; Exact mapped bytes E8 F1 6C D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 72 8E D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x8e
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 0a74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 44h], ecx
        push 44h
        push 0d2h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 08 78 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x78
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
        ; Exact mapped bytes E8 A3 80 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586edd95
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
