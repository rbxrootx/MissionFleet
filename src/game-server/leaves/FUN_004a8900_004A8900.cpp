// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A8900 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_004a8900_004A8900() {
    __asm {
        push ebp
        mov ebp, esp
        push 0b6h
        push 58baa8h
        push 2
        push 80h
        ; Exact mapped bytes E8 17 19 00 00: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes A3 70 02 5E 00: mov dword ptr [0x5e0270], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 70 02 5E 00 00: cmp dword ptr [0x5e0270], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x4a8934
        __asm _emit 0x75
        __asm _emit 0x0a
        push 18h
        ; Exact mapped bytes E8 0F 44 00 00: call 0x4acd40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A1 70 02 5E 00: mov eax, dword ptr [0x5e0270]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [eax], 0
        ; Exact mapped bytes 8B 0D 70 02 5E 00: mov ecx, dword ptr [0x5e0270]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 6C 02 5E 00: mov dword ptr [0x5e026c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        ret
    }
}
