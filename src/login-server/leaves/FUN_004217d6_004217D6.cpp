// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004217D6 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_004217d6_004217D6() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [esp + 4]
        push esi
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        lea esi, [eax + 2]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        inc ecx
        inc ecx
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 0A: je 0x4217f9
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 16: mov word ptr [esi], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x16
        inc esi
        inc esi
        ; Exact mapped bytes EB EF: jmp 0x4217e8
        __asm _emit 0xeb
        __asm _emit 0xef
        pop esi
        ret
    }
}
