// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005013C5 .. +0x24B bytes.
extern "C" __declspec(naked) void FUN_005013c5_005013C5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x5013dd
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x5013f1
        __asm _emit 0x7f
        __asm _emit 0x14
        push 32dh
        push 675764h
        ; Exact mapped bytes E8 54 79 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5013f1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x5013d1
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x5014d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
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
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 30 FD FF FF: call 0x50114b
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
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 12 FD FF FF: call 0x50114b
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 63: je 0x5014a7
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7D 5B: jge 0x5014a7
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
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 DD FC FF FF: call 0x50114b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 08: jne 0x501481
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 24: jmp 0x5014a5
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 16: jne 0x50149f
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 AE FC FF FF: call 0x50114b
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x5014a7
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 9D: jmp 0x501444
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 AD F9 FF FF: call 0x500e68
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 7C FC FF FF: call 0x50114b
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x501607
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 C6 06 03 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 BE 06 03 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 B6 06 03 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 4D FC FF FF: call 0x50114b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 56 F9 FF FF: call 0x500e68
        __asm _emit 0xe8
        __asm _emit 0x56
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
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 19 FC FF FF: call 0x50114b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 22 F9 FF FF: call 0x500e68
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 0F 8D AA 00 00 00: jge 0x501607
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
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 CC FB FF FF: call 0x50114b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D5 F8 FF FF: call 0x500e68
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 10h]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7D 44: jge 0x5015ea
        __asm _emit 0x7d
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 79 06 03 00: call 0x531c3b
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5015dc
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 71 FB FF FF: call 0x50114b
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2B: jmp 0x501607
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 18: jmp 0x501602
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 7E 0E: jle 0x501600
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes EB 02: jmp 0x501602
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x501607
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x501551
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
