// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A6D20 .. +0x49 bytes.
extern "C" __declspec(naked) void _OnShow_CDocObjectServerItem__MAEXXZ_004A6D20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2F 02 00 00: call 0x4a6f60
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 39ah
        push 5d0270h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 19 44 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA 95 0C 00: call 0x570309
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4a6d5d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 2C 0C 00: call 0x569a40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x2c
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x4a6d65
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B6 9E 0C 00: call 0x570c1b
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
