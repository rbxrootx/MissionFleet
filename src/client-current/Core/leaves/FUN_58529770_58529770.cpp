// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58529770 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58529770_58529770() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 78 75 94 58 00: cmp dword ptr [0x58947578], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 02: jne 0x58529782
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 35: jmp 0x585297b7
        __asm _emit 0xeb
        __asm _emit 0x35
        push 2ceh
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C D6 F8 FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd6
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 78 75 94 58: mov eax, dword ptr [0x58947578]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 220000h
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 77 1B 00: call 0x586e0ef0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x77
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
