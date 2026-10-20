// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052B309 .. +0x1E9 bytes.
extern "C" __declspec(naked) void FUN_0052b309_0052B309() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57dec5h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x52b339
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 8000h
        ; Exact mapped bytes 72 14: jb 0x52b34d
        __asm _emit 0x72
        __asm _emit 0x14
        push 2a8h
        push 5c8fcch
        ; Exact mapped bytes E8 B8 96 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b34d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x52b32a
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 8ch], 0
        ; Exact mapped bytes 74 22: je 0x52b381
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 8ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x52b381
        __asm _emit 0x74
        __asm _emit 0x14
        push 2a9h
        push 5c8fcch
        ; Exact mapped bytes E8 84 96 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b381
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x52b353
        __asm _emit 0x75
        __asm _emit 0xcc
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8ch], eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 6C 5B 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D2 F7 FC FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x52b3ce
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0ah
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EC 5B 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 24h]
        add edx, 0ach
        push edx
        ; Exact mapped bytes E8 01 F9 FC FF: call 0x4faccf
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        push 8
        ; Exact mapped bytes E8 26 C0 FC FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52b3ed
        __asm _emit 0x75
        __asm _emit 0x14
        push 2b1h
        push 5c8fcch
        ; Exact mapped bytes E8 18 96 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b3ed
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x52b3ce
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3F FE FF FF: call 0x52b242
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0ach
        ; Exact mapped bytes E8 96 5B 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 5de860h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BA FA FF FF: call 0x52aefe
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x52b463
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EE 23 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 7C: jmp 0x52b4df
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x52b480
        __asm _emit 0x75
        __asm _emit 0x14
        push 2bdh
        push 5c8fcch
        ; Exact mapped bytes E8 85 95 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b480
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x52b463
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B4 27 5E 00: call dword ptr [0x5e27b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 44h], eax
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8E ED FF FF: call 0x52a239
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 15: jne 0x52b4c6
        __asm _emit 0x75
        __asm _emit 0x15
        push 1
        push 1
        push 0
        push 0
        push 364h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BD 12 01 00: call 0x53c783
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 70 23 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
