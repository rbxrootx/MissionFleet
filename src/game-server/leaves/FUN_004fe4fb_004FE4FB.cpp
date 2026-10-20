// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE4FB .. +0x178 bytes.
extern "C" __declspec(naked) void FUN_004fe4fb_004FE4FB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e0fah
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
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4fe539
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ch
        push 5ca304h
        ; Exact mapped bytes E8 CC 64 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe539
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4fe51c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0ch
        ; Exact mapped bytes E8 42 2A 03 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4fe562
        __asm _emit 0x74
        __asm _emit 0x14
        push 13dh
        push 5ca304h
        ; Exact mapped bytes E8 A3 64 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe562
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x4fe53f
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 10h
        ; Exact mapped bytes E8 19 2A 03 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4fe58b
        __asm _emit 0x74
        __asm _emit 0x14
        push 13eh
        push 5ca304h
        ; Exact mapped bytes E8 7A 64 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe58b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4fe568
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 10h
        ; Exact mapped bytes E8 C4 29 03 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 5
        push eax
        ; Exact mapped bytes E8 1B EE FE FF: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E8 4A 6F 03 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x4fe5cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7D 7A: jge 0x4fe650
        __asm _emit 0x7d
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 10h
        ; Exact mapped bytes E8 C2 29 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        push 5dcbech
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 0ch
        ; Exact mapped bytes E8 A0 29 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 61 04 00: call 0x544798
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 18h]
        lea ecx, [eax + ecx*4]
        ; Exact mapped bytes E8 0A F4 FE FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 01 F2 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x4fe5c2
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 AA ED FE FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
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
        ret
    }
}
