// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411490 .. +0x152 bytes.
extern "C" __declspec(naked) void FUN_00411490_00411490() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579ab6h
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
        mov eax, 0cccccccch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x4115c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 5C: jne 0x411546
        __asm _emit 0x75
        __asm _emit 0x5c
        push 24h
        ; Exact mapped bytes E8 CF BE 0D 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xbe
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 11: je 0x411515
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 30 02 00 00: call 0x411740
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x41151c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x4115c8
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes E8 73 BE 0D 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xbe
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 11: je 0x411571
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D4 01 00 00: call 0x411740
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x411578
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 8C 01 00 00: call 0x411720
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 5A FE FF FF: call 0x411400
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 53 01 00 00: call 0x411700
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 48 FE FF FF: call 0x411400
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes EB 02: jmp 0x4115c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 04 72 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x72
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
