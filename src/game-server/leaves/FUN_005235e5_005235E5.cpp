// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005235E5 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_005235e5_005235E5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d96dh
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
        sub esp, 28h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FF D8 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 75 5A 02 00: call 0x549095
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x523642
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 12 A2 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x523713
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 BD D8 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 B3 90 FD FF: call 0x4fc712
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x523691
        __asm _emit 0x74
        __asm _emit 0x2b
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 C5 DB 00 00: call 0x531238
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x523691
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 1ch]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 74 5D: je 0x5236ee
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 3C 8C FD FF: call 0x4fc2d9
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes 66 8B 55 EC: mov dx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FC D8 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 71 91 FD FF: call 0x4fc828
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 06 8E FD FF: call 0x4fc4c5
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 49 8D FD FF: call 0x4fc417
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 72 A1 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 63 A1 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes EB 25: jmp 0x523713
        __asm _emit 0xeb
        __asm _emit 0x25
        mov dword ptr [ebp - 34h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 4B A1 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3C A1 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
