// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00483B51 .. +0x1A6 bytes.
extern "C" __declspec(naked) void FUN_00483b51_00483B51() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c3e3h
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
        sub esp, 20h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 93ch], 0
        ; Exact mapped bytes 75 1E: jne 0x483bba
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 3A 2C FC FF: call 0x4467ec
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x483cdd
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 93ch]
        add eax, 5
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ecx + 218h]
        ; Exact mapped bytes E8 DA B4 FB FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 7D: je 0x483c58
        __asm _emit 0x74
        __asm _emit 0x7d
        mov dword ptr [ebp - 18h], 31h
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp + 93ch]
        mov eax, dword ptr [edx + 20h]
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 BA FB F7 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 4B: jne 0x483c58
        __asm _emit 0x75
        __asm _emit 0x4b
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 0b0000h
        push 80021004h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 00 36 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 3A FC FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 9C 2B FC FF: call 0x4467ec
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x483cdd
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 93ch]
        cmp dword ptr [ecx + 34h], -1
        ; Exact mapped bytes 74 60: je 0x483cc4
        __asm _emit 0x74
        __asm _emit 0x60
        push 500h
        mov edx, dword ptr [ebp + 93ch]
        add edx, 0b8h
        push edx
        mov eax, dword ptr [ebp + 93ch]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 EE 22 F8 FF: call 0x405f7c
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x22
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x483cc4
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ebp + 93ch]
        cmp dword ptr [eax + 424h], 1
        ; Exact mapped bytes 75 23: jne 0x483cc4
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1D: je 0x483cc4
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 93ch]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [edx + ecx*4 + 16b14h], 0ffffffffh
        mov dword ptr [ebp - 28h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 12 2B FC FF: call 0x4467ec
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 EF 4A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 38 09: ret 0x938
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0x09
    }
}
