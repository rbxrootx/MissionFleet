// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA3ED .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_004fa3ed_004FA3ED() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 291h
        push 5c60d0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 57 0D 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 17: jne 0x4fa428
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A5 FE FF FF: call 0x4fa2c2
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4fa428
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 5C: jmp 0x4fa484
        __asm _emit 0xeb
        __asm _emit 0x5c
        ; Exact mapped bytes E8 D3 B1 03 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 17 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 36 B6 FF FF: call 0x4f5a78
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4fa44d
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 37: jmp 0x4fa484
        __asm _emit 0xeb
        __asm _emit 0x37
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2F: je 0x4fa482
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 21 75 FF FF: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A5 A7 FF FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x4fa482
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x4fa484
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
