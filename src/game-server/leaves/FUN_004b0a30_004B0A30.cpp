// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B0A30 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_004b0a30_004B0A30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x4b0a40
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 7C 05: jl 0x4b0a45
        __asm _emit 0x7c
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 3E: jmp 0x4b0a83
        __asm _emit 0xeb
        __asm _emit 0x3e
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 0C: jne 0x4b0a57
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax*4 + 5d14b4h]
        ; Exact mapped bytes EB 2C: jmp 0x4b0a83
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0fffffff8h
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x4b0a66
        __asm _emit 0x74
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x4b0a83
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 5d14b4h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx*4 + 5d14b4h], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
