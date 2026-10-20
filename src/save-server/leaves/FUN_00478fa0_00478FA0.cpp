// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478FA0 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_00478fa0_00478FA0() {
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
        ; Exact mapped bytes E8 49 06 00 00: call 0x479600
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 28: jne 0x478fe6
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
        ; Exact mapped bytes E8 4D 01 00 00: call 0x479130
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B1 0A 00 00: call 0x479aa0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 83 3D 20 10 68 00 00: cmp dword ptr [0x681020], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 30: jne 0x47902e
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2A: je 0x47902e
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
        ; Exact mapped bytes E8 57 09 00 00: call 0x479980
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        ; Exact mapped bytes EB 20: jmp 0x47904e
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E9 09 00 00: call 0x479a20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 0ffffh
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        ; Exact mapped bytes E8 C8 0D 00 00: call 0x479e10
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
