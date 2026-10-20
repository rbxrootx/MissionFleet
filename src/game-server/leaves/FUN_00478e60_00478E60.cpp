// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478E60 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_00478e60_00478E60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov eax, dword ptr [ebp + 8]
        push eax
        push 8
        ; Exact mapped bytes E8 B1 3E FA FF: call 0x41cd30
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x3e
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x478ea3
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 07: jmp 0x478eaa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 2C F9 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
