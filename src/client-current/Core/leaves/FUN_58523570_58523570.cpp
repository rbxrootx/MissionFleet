// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523570 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_58523570_58523570() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [eax + 5ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [eax + 60h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 74 12: je 0x585235aa
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 64: mov dx, word ptr [ecx + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 64: mov word ptr [eax + 0x64], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        mov esp, ebp
        pop ebp
        ret
    }
}
