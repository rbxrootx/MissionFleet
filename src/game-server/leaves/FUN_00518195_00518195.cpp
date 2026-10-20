// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518195 .. +0x256 bytes.
extern "C" __declspec(naked) void FUN_00518195_00518195() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x5181ad
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x5181c1
        __asm _emit 0x7f
        __asm _emit 0x14
        push 32dh
        push 5c8c2ch
        ; Exact mapped bytes E8 44 C8 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5181c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x5181a1
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x5182af
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 30 FD FF FF: call 0x517f1b
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 12 FD FF FF: call 0x517f1b
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 63: je 0x518277
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7D 5B: jge 0x518277
        __asm _emit 0x7d
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp - 14h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 DD FC FF FF: call 0x517f1b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 08: jne 0x518251
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 24: jmp 0x518275
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 16: jne 0x51826f
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 AE FC FF FF: call 0x517f1b
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x518277
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 9D: jmp 0x518214
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 AD F9 FF FF: call 0x517c38
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 71 FC FF FF: call 0x517f1b
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x5183e2
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 7B D3 01 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 73 D3 01 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 6B D3 01 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 42 FC FF FF: call 0x517f1b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 4B F9 FF FF: call 0x517c38
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 20h], edx
        push 7fffh
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 0E FC FF FF: call 0x517f1b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 17 F9 FF FF: call 0x517c38
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 8D AA 00 00 00: jge 0x5183e2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 34h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 C1 FB FF FF: call 0x517f1b
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 CA F8 FF FF: call 0x517c38
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7D 44: jge 0x5183c5
        __asm _emit 0x7d
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 2E D3 01 00: call 0x5356cb
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5183b7
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 66 FB FF FF: call 0x517f1b
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2B: jmp 0x5183e2
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 18: jmp 0x5183dd
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7E 0E: jle 0x5183db
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 02: jmp 0x5183dd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x5183e2
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x51832c
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
