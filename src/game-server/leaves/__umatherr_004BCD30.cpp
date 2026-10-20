// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BCD30 .. +0x9B bytes.
extern "C" __declspec(naked) void __umatherr_004BCD30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 D1 00 00 00: call 0x4bce10
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 5C: je 0x4bcda7
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 24h]
        mov dword ptr [ebp - 4], ecx
        push 0ffffh
        mov edx, dword ptr [ebp + 28h]
        push edx
        ; Exact mapped bytes E8 3D 04 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 41 76 00 00: call 0x4c43d0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x4bcda2
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 31 00 00 00: call 0x4bcdd0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 20: jmp 0x4bcdc7
        __asm _emit 0xeb
        __asm _emit 0x20
        push 0ffffh
        mov edx, dword ptr [ebp + 28h]
        push edx
        ; Exact mapped bytes E8 0B 04 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 0F 00 00 00: call 0x4bcdd0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes DD 45 20: fld qword ptr [ebp + 0x20]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x20
        mov esp, ebp
        pop ebp
        ret
    }
}
