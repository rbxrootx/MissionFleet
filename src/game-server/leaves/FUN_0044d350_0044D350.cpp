// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D350 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_0044d350_0044D350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov eax, dword ptr [ebp + 8]
        push eax
        push 8
        ; Exact mapped bytes E8 C1 F9 FC FF: call 0x41cd30
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x44d393
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
        ; Exact mapped bytes EB 07: jmp 0x44d39a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 3C B4 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
