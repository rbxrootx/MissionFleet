// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867BDE0 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_5867bde0_5867BDE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 3E E3 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x3e
        __asm _emit 0xe3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x5867be1b
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 3E E3 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x3e
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 00 3D E3 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x3d
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2e4h], eax
        ; Exact mapped bytes EB 04: jmp 0x5867be1f
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x5867be28
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2e4h]
        mov esp, ebp
        pop ebp
        ret
    }
}
