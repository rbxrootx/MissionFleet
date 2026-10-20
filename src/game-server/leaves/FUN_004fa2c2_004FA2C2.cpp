// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA2C2 .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_004fa2c2_004FA2C2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 30: call dword ptr [edx + 0x30]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x30
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 08: jmp 0x4fa2e6
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x4fa3b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 14: jne 0x4fa30e
        __asm _emit 0x75
        __asm _emit 0x14
        push 26ah
        push 5c60d0h
        ; Exact mapped bytes E8 F7 A6 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa30e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x4fa2f0
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 0c000h
        ; Exact mapped bytes 73 27: jae 0x4fa347
        __asm _emit 0x73
        __asm _emit 0x27
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 C1 97 FF FF: call 0x4f3af8
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 05: je 0x4fa345
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x4fa3e2
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6C: jmp 0x4fa3b3
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        push 0
        push 0
        push 0c000h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 96 97 FF FF: call 0x4f3af8
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 48: je 0x4fa3b3
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax], 0c000h
        ; Exact mapped bytes 73 14: jae 0x4fa393
        __asm _emit 0x73
        __asm _emit 0x14
        push 27bh
        push 5c60d0h
        ; Exact mapped bytes E8 72 A6 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa393
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x4fa374
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 02: jne 0x4fa3a8
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 38: jmp 0x4fa3e0
        __asm _emit 0xeb
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 0ch]
        add edx, 18h
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 9D: jmp 0x4fa350
        __asm _emit 0xeb
        __asm _emit 0x9d
        ; Exact mapped bytes E9 26 FF FF FF: jmp 0x4fa2de
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 28: jmp 0x4fa3e4
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x4fa3e4
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB DA: jmp 0x4fa3bc
        __asm _emit 0xeb
        __asm _emit 0xda
        ; Exact mapped bytes EB D8: jmp 0x4fa3bc
        __asm _emit 0xeb
        __asm _emit 0xd8
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
