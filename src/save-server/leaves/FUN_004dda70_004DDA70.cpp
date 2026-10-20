// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DDA70 .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_004dda70_004DDA70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e3deh
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
        push 5eh
        push 677f28h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 BF C7 FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 11: jne 0x4ddabb
        __asm _emit 0x75
        __asm _emit 0x11
        push 5fh
        push 677f28h
        ; Exact mapped bytes E8 8A B2 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ddabb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4ddaa1
        __asm _emit 0x75
        __asm _emit 0xe0
        push 61h
        push 677f28h
        push 10h
        ; Exact mapped bytes E8 30 E6 FE FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0F: je 0x4ddaee
        __asm _emit 0x74
        __asm _emit 0x0f
        push -1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D2 FD FF FF: call 0x4dd8bb
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4ddaf5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], ecx
        push 2
        push 0
        push 0
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 F0 B7 68 00: call dword ptr [0x68b7f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 F0 B7 68 00: call dword ptr [0x68b7f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 38 B9 68 00: call dword ptr [0x68b938]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x4ddb6a
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 12: je 0x4ddb55
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x4ddb5c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        push 0
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 26 CB FF FF: call 0x4da690
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 4], -1
        ; Exact mapped bytes 75 11: jne 0x4ddb8d
        __asm _emit 0x75
        __asm _emit 0x11
        push 6ah
        push 677f28h
        ; Exact mapped bytes E8 B8 B1 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ddb8d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ddb73
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 8], eax
        mov eax, dword ptr [ebp - 14h]
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
