// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509EE0 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_58509ee0_58509EE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 7E 11: jle 0x58509f03
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 02 F7 34 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf7
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 1E: jmp 0x58509f21
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 7D 15: jge 0x58509f21
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 2D 71 32 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x71
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        push edx
        ; Exact mapped bytes E8 D3 F6 34 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf6
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
