// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BC410 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_004bc410_004BC410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov eax, dword ptr [ebp + 28h]
        push eax
        lea ecx, [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 89 05 00 00: call 0x4bc9b0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x4bc46e
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 24h]
        or al, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        and ecx, 0ffffffe1h
        or ecx, 2
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp + 20h]
        push ecx
        lea edx, [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp + 28h]
        push edx
        lea eax, [ebp - 5ch]
        push eax
        ; Exact mapped bytes E8 75 00 00 00: call 0x4bc4e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D9 09 00 00: call 0x4bce50
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x09
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
        ; Exact mapped bytes 75 34: jne 0x4bc4ba
        __asm _emit 0x75
        __asm _emit 0x34
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2E: je 0x4bc4ba
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 28h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 7B 08 00 00: call 0x4bcd30
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        ; Exact mapped bytes EB 20: jmp 0x4bc4da
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 0D 09 00 00: call 0x4bcdd0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 0ffffh
        mov eax, dword ptr [ebp + 28h]
        push eax
        ; Exact mapped bytes E8 EC 0C 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 20: fld qword ptr [ebp + 0x20]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x20
        mov esp, ebp
        pop ebp
        ret
    }
}
