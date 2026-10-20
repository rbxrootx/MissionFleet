// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2EA0 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_004b2ea0_004B2EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes A1 60 16 5D 00: mov eax, dword ptr [0x5d1660]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 24 23 5E 00: call dword ptr [0x5e2324]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 63: jne 0x4b2f27
        __asm _emit 0x75
        __asm _emit 0x63
        push 0e7h
        push 58c714h
        push 2
        push 74h
        push 1
        ; Exact mapped bytes E8 67 77 FF FF: call 0x4aa640
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 38: je 0x4b2f1d
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes 8B 15 60 16 5D 00: mov edx, dword ptr [0x5d1660]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 2C 23 5E 00: call dword ptr [0x5e232c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x4b2f1d
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 7D FF FF FF: call 0x4b2e80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0ffffffffh
        ; Exact mapped bytes EB 0A: jmp 0x4b2f27
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 10h
        ; Exact mapped bytes E8 1C 9E FF FF: call 0x4acd40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 7C 23 5E 00: call dword ptr [0x5e237c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
