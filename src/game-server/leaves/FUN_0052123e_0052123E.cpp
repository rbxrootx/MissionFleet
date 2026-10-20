// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052123E .. +0x1D5 bytes.
extern "C" __declspec(naked) void FUN_0052123e_0052123E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f24eh
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
        sub esp, 1ch
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0b0h], 1
        mov dword ptr [ebp - 1ch], 80c83b00h
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x521283
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        and dh, 0f7h
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 5de860h
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        push 5dcbech
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C9 D3 00 00: call 0x52e675
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5212c4
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0b0h], 0
        xor eax, eax
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x521403
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 5000h
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffff000h
        add ecx, 2000h
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 40h
        mov eax, dword ptr [ebp - 1ch]
        or eax, edx
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 15 AB 01 00: call 0x53be0d
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0f000h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EA 9D 01 00: call 0x53b0f4
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0f020h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB 9D 01 00: call 0x53b0f4
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0f030h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC 9D 01 00: call 0x53b0f4
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0f120h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BD 9D 01 00: call 0x53b0f4
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C8 FB 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0f011h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2D 98 FD FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x52137e
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        push 0f060h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8E 9D 01 00: call 0x53b0f4
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3C FC 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 0f060h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 9D 01 00: call 0x53b147
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        push 0e81fh
        mov ecx, dword ptr [ebp - 1ch]
        or ecx, 50000000h
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0cch
        ; Exact mapped bytes E8 47 E2 FF FF: call 0x51f5e6
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x5213cb
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0b0h], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 86 C4 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes EB 38: jmp 0x521403
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0cch
        ; Exact mapped bytes E8 AB BC 01 00: call 0x53d088
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0b0h], 0
        mov dword ptr [ebp - 24h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4C C4 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
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
