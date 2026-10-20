// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449340 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00449340_00449340() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 12: jmp 0x44935b
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 0C: je 0x44936f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        ; Exact mapped bytes EB DA: jmp 0x449349
        __asm _emit 0xeb
        __asm _emit 0xda
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
