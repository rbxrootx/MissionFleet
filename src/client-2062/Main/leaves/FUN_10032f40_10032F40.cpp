// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10032F40 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_10032f40_10032F40() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x10032f78
        __asm _emit 0x74
        __asm _emit 0x30
        mov dl, byte ptr [esp + 0ch]
        mov dword ptr [ecx + 0c0h], eax
        mov eax, dword ptr [esp + 8]
        and edx, 1
        mov dword ptr [ecx + 8ch], eax
        ; Exact mapped bytes 66 8B 41 70: mov ax, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x70
        shl edx, 3
        and eax, 0fff7h
        or edx, eax
        ; Exact mapped bytes 66 89 51 70: mov word ptr [ecx + 0x70], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x70
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [ecx + 5ch], edx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
