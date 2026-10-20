// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE4F6 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_004fe4f6_004FE4F6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 15: jne 0x4fe51a
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 37 B4 FF FF: call 0x4f994c
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 06: jmp 0x4fe520
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        push 636f20h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D BC FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x4fe565
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 33 45 FD FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 8f2h
        push 674fe8h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 0B BD FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A6 55 01 00: call 0x513b09
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x4fe57f
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 675548h
        push 675580h
        ; Exact mapped bytes E8 A1 20 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 83 FD FF: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
