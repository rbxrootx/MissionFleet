// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58836898 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_58836898_58836898() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes 80 3D 95 7D 96 58 00: cmp byte ptr [0x58967d95], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x95
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 04: je 0x588368ad
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 29: jmp 0x588368d6
        __asm _emit 0xeb
        __asm _emit 0x29
        cmp byte ptr [ecx + 5b98h], 0
        ; Exact mapped bytes 74 12: je 0x588368c8
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 64 A1 18 00 00 00: mov eax, dword ptr fs:[0x18]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 30h]
        movzx eax, byte ptr [eax + 2]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x588368d3
        __asm _emit 0xeb
        __asm _emit 0x0b
        xor eax, eax
        ; Exact mapped bytes 64 A0 20 00 00 00: mov al, byte ptr fs:[0x20]
        __asm _emit 0x64
        __asm _emit 0xa0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
