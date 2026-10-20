// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00465C10 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_00465c10_00465C10() {
    __asm {
        push ebp
        mov ebp, esp
        push 0b6h
        push 63e118h
        push 2
        push 80h
        ; Exact mapped bytes E8 97 0B 00 00: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes A3 C0 8D 68 00: mov dword ptr [0x688dc0], eax
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D C0 8D 68 00 00: cmp dword ptr [0x688dc0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x465c44
        __asm _emit 0x75
        __asm _emit 0x0a
        push 18h
        ; Exact mapped bytes E8 4F 07 00 00: call 0x466390
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A1 C0 8D 68 00: mov eax, dword ptr [0x688dc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [eax], 0
        ; Exact mapped bytes 8B 0D C0 8D 68 00: mov ecx, dword ptr [0x688dc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D BC 8D 68 00: mov dword ptr [0x688dbc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        ret
    }
}
