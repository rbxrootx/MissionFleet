// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BC2E0 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_004bc2e0_004BC2E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes DD 45 0C: fld qword ptr [ebp + 0xc]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes DC 45 14: fadd qword ptr [ebp + 0x14]
        __asm _emit 0xdc
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes 83 3D 68 2A 5D 00 00: cmp dword ptr [0x5d2a68], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2C: jne 0x4bc324
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 1
        ; Exact mapped bytes E8 11 0A 00 00: call 0x4bcd30
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        ; Exact mapped bytes EB 1F: jmp 0x4bc343
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes E8 47 4F FF FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 21h
        push 0ffffh
        mov edx, dword ptr [ebp + 1ch]
        push edx
        ; Exact mapped bytes E8 83 0E 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        mov esp, ebp
        pop ebp
        ret
    }
}
