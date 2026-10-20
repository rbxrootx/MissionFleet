// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58533CE0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_58533ce0_58533CE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax + 104h]
        cmp edx, dword ptr [ecx + 104h]
        ; Exact mapped bytes 74 29: je 0x58533d23
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax + 104h]
        cmp edx, dword ptr [ecx + 104h]
        ; Exact mapped bytes 73 09: jae 0x58533d17
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x58533d1e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov al, byte ptr [ebp - 4]
        ; Exact mapped bytes EB 27: jmp 0x58533d4a
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax + 100h]
        cmp edx, dword ptr [ecx + 100h]
        ; Exact mapped bytes 73 09: jae 0x58533d40
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x58533d47
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov al, byte ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
