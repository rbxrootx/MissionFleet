// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1520 .. +0xB7 bytes.
extern "C" __declspec(naked) void __set_osfhnd_004C1520() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 20 F2 5D 00: cmp eax, dword ptr [0x5df220]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 87 00 00 00: jae 0x4c15ba
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        cmp dword ptr [eax + edx], -1
        ; Exact mapped bytes 75 6B: jne 0x4c15ba
        __asm _emit 0x75
        __asm _emit 0x6b
        ; Exact mapped bytes 83 3D E4 12 5D 00 01: cmp dword ptr [0x5d12e4], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 42: jne 0x4c159a
        __asm _emit 0x75
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4c1572
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 16: je 0x4c1580
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 74 1E: je 0x4c158e
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes EB 28: jmp 0x4c159a
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push -0ah
        ; Exact mapped bytes FF 15 2C 22 5E 00: call dword ptr [0x5e222c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x4c159a
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push -0bh
        ; Exact mapped bytes FF 15 2C 22 5E 00: call dword ptr [0x5e222c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x4c159a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push -0ch
        ; Exact mapped bytes FF 15 2C 22 5E 00: call dword ptr [0x5e222c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        sar edx, 5
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [edx*4 + 5df120h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + eax], edx
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x4c15d3
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 B1 FC FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 B6 FC FE FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
