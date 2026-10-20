// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2DC0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_004b2dc0_004B2DC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 47 23 00 00: call 0x4b5110
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 3C 23 5E 00: call dword ptr [0x5e233c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 60 16 5D 00: mov dword ptr [0x5d1660], eax
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 60 16 5D 00 FF: cmp dword ptr [0x5d1660], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 04: jne 0x4b2de1
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5D: jmp 0x4b2e3e
        __asm _emit 0xeb
        __asm _emit 0x5d
        push 61h
        push 58c714h
        push 2
        push 74h
        push 1
        ; Exact mapped bytes E8 4D 78 FF FF: call 0x4aa640
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x4b2e14
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes 8B 0D 60 16 5D 00: mov ecx, dword ptr [0x5d1660]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 2C 23 5E 00: call dword ptr [0x5e232c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4b2e18
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 26: jmp 0x4b2e3e
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 5F 00 00 00: call 0x4b2e80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
