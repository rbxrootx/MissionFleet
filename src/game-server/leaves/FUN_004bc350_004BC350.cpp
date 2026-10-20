// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BC350 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_004bc350_004BC350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov eax, dword ptr [ebp + 20h]
        push eax
        lea ecx, [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 49 06 00 00: call 0x4bc9b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x4bc396
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 24h]
        and al, 0feh
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp + 18h]
        push ecx
        lea edx, [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp + 20h]
        push edx
        lea eax, [ebp - 5ch]
        push eax
        ; Exact mapped bytes E8 4D 01 00 00: call 0x4bc4e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B1 0A 00 00: call 0x4bce50
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 83 3D 68 2A 5D 00 00: cmp dword ptr [0x5d2a68], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 30: jne 0x4bc3de
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2A: je 0x4bc3de
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 57 09 00 00: call 0x4bcd30
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        ; Exact mapped bytes EB 20: jmp 0x4bc3fe
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E9 09 00 00: call 0x4bcdd0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 0ffffh
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        ; Exact mapped bytes E8 C8 0D 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 18: fld qword ptr [ebp + 0x18]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x18
        mov esp, ebp
        pop ebp
        ret
    }
}
