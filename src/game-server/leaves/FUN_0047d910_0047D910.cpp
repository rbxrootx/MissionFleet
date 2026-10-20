// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D910 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_0047d910_0047D910() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 B5 03 00 00: call 0x47dcf0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x47da41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 BD FD FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 B3 FD FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 5D FD FF FF: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 42 FD FF FF: call 0x47d6b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], esi
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 95 FD FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 8B FD FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 35 FD FF FF: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 1A FD FF FF: call 0x47d6b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], esi
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 6D FD FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 63 FD FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 0D FD FF FF: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 F2 FC FF FF: call 0x47d6b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], esi
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 45 FD FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 EF FC FF FF: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 2F FD FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 D9 FC FF FF: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 1C FD FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 C6 FC FF FF: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 07 FD FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 B1 FC FF FF: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 F4 FC FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 9E FC FF FF: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [esi]
        mov dword ptr [eax], edx
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 DF FC FF FF: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 89 FC FF FF: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 38: jmp 0x47da79
        __asm _emit 0xeb
        __asm _emit 0x38
        push ecx
        mov ecx, esp
        lea edx, [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 63 01 00 00: call 0x47dbb0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 57 01 00 00: call 0x47dbb0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DB 00 00 00: call 0x47db40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 47 F8 FF FF: call 0x47d2c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 5C AD 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
