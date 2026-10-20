// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BCB87 .. +0x2EF bytes.
extern "C" __declspec(naked) void FUN_004bcb87_004BCB87() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        push 34h
        push 6744e8h
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 BD D6 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 11: jge 0x4bcbba
        __asm _emit 0x7d
        __asm _emit 0x11
        push 35h
        push 6744e8h
        ; Exact mapped bytes E8 8B C1 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bcbba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4bcba3
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 74 09: je 0x4bcbcf
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 38: jne 0x4bcc0d
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 C2 F8 00 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 8], 0
        ; Exact mapped bytes E9 60 02 00 00: jmp 0x4bce6d
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 6F: jne 0x4bcc85
        __asm _emit 0x75
        __asm _emit 0x6f
        cmp dword ptr [ebp + 8], 7fffffffh
        ; Exact mapped bytes 76 11: jbe 0x4bcc30
        __asm _emit 0x76
        __asm _emit 0x11
        push 45h
        push 6744e8h
        ; Exact mapped bytes E8 15 C1 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bcc30
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4bcc16
        __asm _emit 0x75
        __asm _emit 0xe0
        push 47h
        push 6744e8h
        mov eax, dword ptr [ebp + 8]
        shl eax, 1
        push eax
        ; Exact mapped bytes E8 8B F4 00 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 8]
        shl eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 55 8C FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes E9 E8 01 00 00: jmp 0x4bce6d
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7F 3F: jg 0x4bcccf
        __asm _emit 0x7f
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 26: jle 0x4bccc1
        __asm _emit 0x7e
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 8]
        shl eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        lea edx, [ecx + edx*2]
        push edx
        ; Exact mapped bytes E8 02 8C FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes E9 9E 01 00 00: jmp 0x4bce6d
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 7C: jne 0x4bcd5a
        __asm _emit 0x75
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        cmp eax, 4
        ; Exact mapped bytes 7D 09: jge 0x4bccfb
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 4
        ; Exact mapped bytes EB 12: jmp 0x4bcd0d
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 400h
        ; Exact mapped bytes 7E 09: jle 0x4bcd1f
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 400h
        ; Exact mapped bytes EB 35: jmp 0x4bcd54
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        cmp eax, 4
        ; Exact mapped bytes 7D 09: jge 0x4bcd3c
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 4
        ; Exact mapped bytes EB 12: jmp 0x4bcd4e
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ch]
        add edx, dword ptr [ebp - 8]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 7D 0E: jge 0x4bcd76
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x4bcd7c
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 7D 11: jge 0x4bcd98
        __asm _emit 0x7d
        __asm _emit 0x11
        push 6ah
        push 6744e8h
        ; Exact mapped bytes E8 AD BF 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bcd98
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4bcd7c
        __asm _emit 0x75
        __asm _emit 0xde
        cmp dword ptr [ebp - 0ch], 7fffffffh
        ; Exact mapped bytes 76 11: jbe 0x4bcdb8
        __asm _emit 0x76
        __asm _emit 0x11
        push 6ch
        push 6744e8h
        ; Exact mapped bytes E8 8D BF 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bcdb8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4bcd9e
        __asm _emit 0x75
        __asm _emit 0xe0
        push 6eh
        push 6744e8h
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 1
        push ecx
        ; Exact mapped bytes E8 03 F3 00 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 8]
        shl ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 0B 85 FA FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7F 11: jg 0x4bce14
        __asm _emit 0x7f
        __asm _emit 0x11
        push 74h
        push 6744e8h
        ; Exact mapped bytes E8 31 BF 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bce14
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4bcdf8
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 8]
        shl eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*2]
        push ecx
        ; Exact mapped bytes E8 86 8A FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x8a
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 5A F6 00 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0ch], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
