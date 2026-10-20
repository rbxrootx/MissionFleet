// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DF569 .. +0x193 bytes.
extern "C" __declspec(naked) void FUN_004df569_004DF569() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        push 5eh
        push 6790dch
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 DE AC FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        push 118h
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2E 63 F8 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x63
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        push 104h
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 0ch
        ; Exact mapped bytes E8 05 58 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 12h
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 0F 84 31 01 00 00: je 0x4df6f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 F8 B8 68 00: call dword ptr [0x68b8f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4df5e4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x4df6f6
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 C0 B7 68 00: call dword ptr [0x68b7c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0ch], -1
        ; Exact mapped bytes 75 07: jne 0x4df609
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x4df6f6
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 0ch
        ; Exact mapped bytes E8 78 57 04 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4df621
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + 10h], 0
        ; Exact mapped bytes EB 49: jmp 0x4df66a
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 0ch
        ; Exact mapped bytes E8 7E 57 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 04 B9 68 00: call dword ptr [0x68b904]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], -1
        ; Exact mapped bytes 75 09: jne 0x4df645
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + 10h], 0
        ; Exact mapped bytes EB 25: jmp 0x4df66a
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [ebp - 1ch]
        mov byte ptr [eax + 10h], cl
        mov edx, dword ptr [ebp - 1ch]
        and dl, 0
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x4df66a
        __asm _emit 0x74
        __asm _emit 0x12
        push 679154h
        push 6791a0h
        ; Exact mapped bytes E8 AE 0F FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x0f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        push -1
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 D7 2E FC FF: call 0x4a254f
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 5E 04 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 10h]
        push ecx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 C0 2E FC FF: call 0x4a254f
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 FD 5D 04 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        push -1
        lea edx, [ebp - 18h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A6 2E FC FF: call 0x4a254f
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        ; Exact mapped bytes E8 E3 5D 04 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 5E 04 00: call 0x5254ca
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x4df6d0
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 5D 04 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 EF 5D 04 00: call 0x5254ca
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4df6f1
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 A7 5D 04 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x5d
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
