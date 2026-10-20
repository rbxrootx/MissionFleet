// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AA030 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_004aa030_004AA030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0
        push 6ch
        push 58bb10h
        push 2
        push 74h
        push 1
        ; Exact mapped bytes E8 F1 05 00 00: call 0x4aa640
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x4aa05d
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 60: jmp 0x4aa0bd
        __asm _emit 0xeb
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 1A 8E 00 00: call 0x4b2e80
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 48h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 4ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], 0ffffffffh
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        push 4aa0f0h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 F4 23 5E 00: call dword ptr [0x5e23f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0B: jne 0x4aa0b8
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 05: jmp 0x4aa0bd
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 22: jmp 0x4aa0df
        __asm _emit 0xeb
        __asm _emit 0x22
        push 2
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 F8 0B 00 00: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x4aa0dd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F6 70 00 00: call 0x4b11d0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
