// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044B825 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0044b825_0044B825() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5A BE FF FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x44b85e
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 41 02: mov ax, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 1F 00: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x44b861
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 66 33 C0: xor ax, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc0
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 75 CF 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
