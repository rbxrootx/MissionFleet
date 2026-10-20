// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587973F0 .. +0x18A bytes.
extern "C" __declspec(naked) void FUN_587973f0_587973F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5889146dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 38h
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
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 80 FF FF FF: call 0x587973a0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 57 9D 0B 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x9d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7F 05: jg 0x5879743a
        __asm _emit 0x7f
        __asm _emit 0x05
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x58797569
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        push ecx
        ; Exact mapped bytes E8 FC 9B 09 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 AC 59 0B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 05 CD 01 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 30h], 0
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 1C F8 FF FF: call 0x58796cb0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587974ad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 4
        ; Exact mapped bytes 73 4E: jae 0x58797501
        __asm _emit 0x73
        __asm _emit 0x4e
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x587974c5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 32: jge 0x587974ff
        __asm _emit 0x7d
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 91 78 6C 8B 58: movsx edx, byte ptr [ecx + 0x588b6c78]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x91
        __asm _emit 0x78
        __asm _emit 0x6c
        __asm _emit 0x8b
        __asm _emit 0x58
        cmp eax, edx
        ; Exact mapped bytes 75 19: jne 0x587974fd
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 38h], ecx
        lea edx, [ebp - 38h]
        push edx
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 84 FE FF FF: call 0x58797380
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BD: jmp 0x587974bc
        __asm _emit 0xeb
        __asm _emit 0xbd
        ; Exact mapped bytes EB A3: jmp 0x587974a4
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 38h], 5
        lea ecx, [ebp - 38h]
        push ecx
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 66 FE FF FF: call 0x58797380
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 7D D9 D5 FF: call 0x584f4ea0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd9
        __asm _emit 0xd5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5879753a
        __asm _emit 0x74
        __asm _emit 0x13
        lea edx, [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 49 FB FF FF: call 0x58797080
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0D: jmp 0x58797547
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BA FA FF FF: call 0x58797000
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 F5 9A 09 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 E8 F7 FF FF: call 0x58796d50
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
