// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050762C .. +0x2AB bytes.
extern "C" __declspec(naked) void FUN_0050762c_0050762C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e536h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 220h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 22ch], ecx
        push 0
        push 0
        push 6
        push 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 34 C2 F9 FF: call 0x4a38a0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 218h]
        ; Exact mapped bytes E8 89 D6 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 218h]
        ; Exact mapped bytes E8 EF 25 FD FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x25
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5076a9
        __asm _emit 0x75
        __asm _emit 0x14
        push 241h
        push 678024h
        ; Exact mapped bytes E8 9C 16 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5076a9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x507682
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 178h]
        or eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 178h], eax
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 3E D6 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 20ch]
        ; Exact mapped bytes E8 2F D6 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 33: je 0x507715
        __asm _emit 0x74
        __asm _emit 0x33
        push 249h
        push 678024h
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        ; Exact mapped bytes E8 6B 2B FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        lea edx, [ebp - 20ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 1ach]
        push ecx
        lea edx, [ebp - 214h]
        push edx
        ; Exact mapped bytes E8 5D F8 FF FF: call 0x506f70
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 7D: jmp 0x507792
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 22ch]
        add ecx, 4
        ; Exact mapped bytes E8 34 F3 01 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 220h], eax
        mov dword ptr [ebp - 21ch], 1
        cmp dword ptr [ebp - 220h], 0
        ; Exact mapped bytes 74 56: je 0x507792
        __asm _emit 0x74
        __asm _emit 0x56
        lea eax, [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 22ch]
        add ecx, 4
        ; Exact mapped bytes E8 28 F3 01 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 224h], ecx
        mov edx, dword ptr [ebp - 21ch]
        neg edx
        sbb edx, edx
        lea eax, [ebp - 20ch]
        and edx, eax
        push edx
        mov ecx, dword ptr [ebp - 224h]
        push ecx
        lea edx, [ebp - 1ach]
        push edx
        lea eax, [ebp - 214h]
        push eax
        ; Exact mapped bytes E8 EA F7 FF FF: call 0x506f70
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], 0
        ; Exact mapped bytes EB A1: jmp 0x507733
        __asm _emit 0xeb
        __asm _emit 0xa1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6D D5 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        push 0f002h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D5 24 FD FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5077c3
        __asm _emit 0x75
        __asm _emit 0x14
        push 25ch
        push 678024h
        ; Exact mapped bytes E8 82 15 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5077c3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x50779e
        __asm _emit 0x75
        __asm _emit 0xd5
        lea edx, [ebp - 10h]
        push edx
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 96 58 FC FF: call 0x4cd06e
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 6B 58 FC FF: call 0x4cd050
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        push 6780e8h
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 00 58 FC FF: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 4E 58 FC FF: call 0x4cd050
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 198h]
        add eax, 1
        mov dword ptr [ebp - 198h], eax
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 8E D5 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1a0h], eax
        lea ecx, [ebp - 218h]
        ; Exact mapped bytes E8 7D D5 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 17ch], eax
        push 104h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 58 FC FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 5A C2 F9 FF: call 0x4a3aab
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 59 FC FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x59
        __asm _emit 0xfc
        __asm _emit 0xff
        xor ecx, ecx
        cmp dword ptr [ebp - 210h], 1
        sete cl
        mov dword ptr [ebp - 228h], ecx
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6D 50 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 20ch]
        ; Exact mapped bytes E8 5E 50 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 214h]
        ; Exact mapped bytes E8 4F 50 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 218h]
        ; Exact mapped bytes E8 40 50 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 208h]
        ; Exact mapped bytes E8 12 D5 F9 FF: call 0x4a4dd0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 228h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
