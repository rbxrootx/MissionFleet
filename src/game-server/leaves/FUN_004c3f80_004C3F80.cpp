// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C3F80 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_004c3f80_004C3F80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1F: je 0x4c3fab
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x4c3fab
        __asm _emit 0x74
        __asm _emit 0x15
        push 58d4f8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 8C 5F FF FF: call 0x4b9f30
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x4c3fd3
        __asm _emit 0x75
        __asm _emit 0x28
        push 8
        lea eax, [ebp - 8]
        push eax
        push 1004h
        ; Exact mapped bytes 8B 0D BC F0 5D 00: mov ecx, dword ptr [0x5df0bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 C0 F0 5D 00: call dword ptr [0x5df0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4c3fcb
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4C: jmp 0x4c4017
        __asm _emit 0xeb
        __asm _emit 0x4c
        lea edx, [ebp - 8]
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB 38: jmp 0x4c400b
        __asm _emit 0xeb
        __asm _emit 0x38
        push 58d4f4h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 4F 5F FF FF: call 0x4b9f30
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x4c400b
        __asm _emit 0x75
        __asm _emit 0x23
        push 8
        lea ecx, [ebp - 8]
        push ecx
        push 0bh
        ; Exact mapped bytes 8B 15 BC F0 5D 00: mov edx, dword ptr [0x5df0bc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 C0 F0 5D 00: call dword ptr [0x5df0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4c4005
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 12: jmp 0x4c4017
        __asm _emit 0xeb
        __asm _emit 0x12
        lea eax, [ebp - 8]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 1C 55 FE FF: call 0x4a9530
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
