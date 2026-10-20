// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481A70 .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_00481a70_00481A70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x481bb5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 8dch]
        ; Exact mapped bytes 0F 85 1A 01 00 00: jne 0x481bb5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8e4h], 0
        ; Exact mapped bytes 74 52: je 0x481af9
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8e4h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8e0h]
        mov dword ptr [ecx + 8e0h], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8e0h], 0
        ; Exact mapped bytes 74 1A: je 0x481ae5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8e0h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8e4h]
        mov dword ptr [eax + 8e4h], edx
        ; Exact mapped bytes EB 12: jmp 0x481af7
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8e4h]
        mov dword ptr [eax + 0ca4h], edx
        ; Exact mapped bytes EB 40: jmp 0x481b39
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8e0h]
        mov dword ptr [eax + 0ca0h], edx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8e0h], 0
        ; Exact mapped bytes 74 15: je 0x481b2c
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8e0h]
        mov dword ptr [edx + 8e4h], 0
        ; Exact mapped bytes EB 0D: jmp 0x481b39
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ca4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 110h], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8dch], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8e4h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8e0h], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C 6C 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D3 1F FF FF: call 0x473b60
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 46bh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c90h
        ; Exact mapped bytes E8 6E 1D F8 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 00 00 00: call 0x481bfa
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x481bb7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 1E 6C 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
