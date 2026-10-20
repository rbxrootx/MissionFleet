// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B6A30 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_585b6a30_585B6A30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 92 EF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x92
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x585b6b07
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 F9 F3 FF: call 0x584f63f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 81 22 0E 00 00: mov word ptr [ecx + 0xe22], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585b6a78
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x585b6b07
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B2 65 ED FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x65
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx*4 + 0e28h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585b6aad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 4F: jge 0x585b6b02
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4D 92 EF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x92
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        lea ecx, [edx + ecx*8 + 0f28h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + edx*4], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2A 65 ED FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x65
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        lea eax, [ecx + eax*4 + 0ea8h]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 14 48: mov word ptr [eax + ecx*2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x48
        ; Exact mapped bytes EB A2: jmp 0x585b6aa4
        __asm _emit 0xeb
        __asm _emit 0xa2
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x585b6a6f
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0e24h], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
