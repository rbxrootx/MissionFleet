// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046CD60 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0046cd60_0046CD60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x46cd70
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 7C 05: jl 0x46cd75
        __asm _emit 0x7c
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 3E: jmp 0x46cdb3
        __asm _emit 0xeb
        __asm _emit 0x3e
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 0C: jne 0x46cd87
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax*4 + 67dc50h]
        ; Exact mapped bytes EB 2C: jmp 0x46cdb3
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0fffffff8h
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x46cd96
        __asm _emit 0x74
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x46cdb3
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 67dc50h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx*4 + 67dc50h], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
