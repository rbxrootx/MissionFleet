// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047EEB0 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_0047eeb0_0047EEB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1F: je 0x47eedb
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x47eedb
        __asm _emit 0x74
        __asm _emit 0x15
        push 63fb44h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 DC 32 FF FF: call 0x4721b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x47ef03
        __asm _emit 0x75
        __asm _emit 0x28
        push 8
        lea eax, [ebp - 8]
        push eax
        push 1004h
        ; Exact mapped bytes 8B 0D D0 75 68 00: mov ecx, dword ptr [0x6875d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 D4 75 68 00: call dword ptr [0x6875d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x47eefb
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4C: jmp 0x47ef47
        __asm _emit 0xeb
        __asm _emit 0x4c
        lea edx, [ebp - 8]
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB 38: jmp 0x47ef3b
        __asm _emit 0xeb
        __asm _emit 0x38
        push 63fb40h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9F 32 FF FF: call 0x4721b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x47ef3b
        __asm _emit 0x75
        __asm _emit 0x23
        push 8
        lea ecx, [ebp - 8]
        push ecx
        push 0bh
        ; Exact mapped bytes 8B 15 D0 75 68 00: mov edx, dword ptr [0x6875d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 D4 75 68 00: call dword ptr [0x6875d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x47ef35
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 12: jmp 0x47ef47
        __asm _emit 0xeb
        __asm _emit 0x12
        lea eax, [ebp - 8]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 8C 70 FE FF: call 0x465fd0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
