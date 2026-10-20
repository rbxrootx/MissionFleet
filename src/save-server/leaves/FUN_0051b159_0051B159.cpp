// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B159 .. +0x26D bytes.
extern "C" __declspec(naked) void FUN_0051b159_0051B159() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58da27h
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
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0C B1 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb1
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 50h
        cmp eax, 50h
        ; Exact mapped bytes 74 14: je 0x51b19e
        __asm _emit 0x74
        __asm _emit 0x14
        push 0cbh
        push 6769f8h
        ; Exact mapped bytes E8 A7 DB 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b19e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x51b17a
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 18h]
        push edx
        ; Exact mapped bytes E8 24 AC FC FF: call 0x4e5dd4
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 8C D7 01 00 00: jl 0x51b397
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 0F 84 C6 01 00 00: je 0x51b397
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 EB 38 01 00: call 0x52eacb
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 46 B6 FB FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x51b20b
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B6 FE FF FF: call 0x51b0b4
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x51b20b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 07: jmp 0x51b212
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 1
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 09: je 0x51b227
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 808080h
        ; Exact mapped bytes EB 0B: jmp 0x51b232
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 8
        ; Exact mapped bytes FF 15 84 BE 68 00: call dword ptr [0x68be84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        mov dword ptr [ebp - 1ch], eax
        push 5
        ; Exact mapped bytes FF 15 84 BE 68 00: call dword ptr [0x68be84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 07: jne 0x51b276
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0c0c0c0h
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 35: jne 0x51b2b1
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x51b2b1
        __asm _emit 0x74
        __asm _emit 0x28
        push 0eh
        ; Exact mapped bytes FF 15 84 BE 68 00: call dword ptr [0x68be84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        push 0dh
        ; Exact mapped bytes FF 15 84 BE 68 00: call dword ptr [0x68be84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 30h]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 75 27: jne 0x51b2e1
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 62 08 00 00: call 0x51bb24
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 7D 14: jge 0x51b2db
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0e6h
        push 6769f8h
        ; Exact mapped bytes E8 6A DA 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b2db
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x51b2ba
        __asm _emit 0x75
        __asm _emit 0xd9
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 1E 9A 00 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 BF 5D FF FF: call 0x5110c2
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [edx + 3ch]
        cdq
        sub eax, edx
        sar eax, 1
        test eax, eax
        ; Exact mapped bytes 7D 09: jge 0x51b31e
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 13: jmp 0x51b331
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, dword ptr [eax + 3ch]
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 3ch], eax
        push 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 25 9A 00 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 66 9A 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 1ch
        push edx
        push 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 20h]
        add ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 55 15 FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x15
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x51b3b3
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        add edx, 1ch
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B8 9F 01 00: call 0x53536b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
