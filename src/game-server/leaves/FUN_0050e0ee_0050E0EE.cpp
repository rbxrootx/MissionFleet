// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050E0EE .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_0050e0ee_0050E0EE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x50e111
        __asm _emit 0x75
        __asm _emit 0x11
        push 24h
        push 5c68bch
        ; Exact mapped bytes E8 F4 68 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50e111
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x50e0fa
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 11: jne 0x50e12e
        __asm _emit 0x75
        __asm _emit 0x11
        push 25h
        push 5c68bch
        ; Exact mapped bytes E8 D7 68 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50e12e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x50e117
        __asm _emit 0x75
        __asm _emit 0xe3
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 0C 08 FE FF: call 0x4ee953
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 36: jne 0x50e183
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5c68c8h
        ; Exact mapped bytes E8 BA 1A FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x1a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x50e178
        __asm _emit 0x74
        __asm _emit 0x11
        push 2bh
        push 5c68bch
        ; Exact mapped bytes E8 8D 68 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50e178
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x50e15e
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 46 1C FC FF: call 0x4cfdc9
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 11: jne 0x50e1ad
        __asm _emit 0x75
        __asm _emit 0x11
        push 30h
        push 5c68bch
        ; Exact mapped bytes E8 58 68 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50e1ad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x50e196
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 4]
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
