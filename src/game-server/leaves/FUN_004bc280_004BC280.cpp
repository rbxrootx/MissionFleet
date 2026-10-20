// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BC280 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_004bc280_004BC280() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 68 2A 5D 00 00: cmp dword ptr [0x5d2a68], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 28: jne 0x4bc2b4
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 1
        ; Exact mapped bytes E8 81 0A 00 00: call 0x4bcd30
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        ; Exact mapped bytes EB 1F: jmp 0x4bc2d3
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes E8 B7 4F FF FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 21h
        push 0ffffh
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 F3 0E 00 00: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 0C: fld qword ptr [ebp + 0xc]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x0c
        pop ebp
        ret
    }
}
