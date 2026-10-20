// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004154AB .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_004154ab_004154AB() {
    __asm {
        xor edx, edx
        push esi
        cmp dword ptr [ecx + 8], edx
        ; Exact mapped bytes 75 08: jne 0x4154bb
        __asm _emit 0x75
        __asm _emit 0x08
        inc dword ptr [ecx + 20h]
        mov eax, dword ptr [ecx + 20h]
        ; Exact mapped bytes EB 06: jmp 0x4154c1
        __asm _emit 0xeb
        __asm _emit 0x06
        inc dword ptr [ecx + 24h]
        mov eax, dword ptr [ecx + 24h]
        mov esi, dword ptr [esp + 8]
        mov dword ptr [esi], eax
        mov eax, dword ptr [ecx]
        cmp eax, edx
        pop esi
        ; Exact mapped bytes 74 0F: je 0x4154dd
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp eax, 1
        ; Exact mapped bytes 74 0A: je 0x4154dd
        __asm _emit 0x74
        __asm _emit 0x0a
        xor eax, eax
        cmp dword ptr [ecx + 8], edx
        sete al
        ; Exact mapped bytes EB 08: jmp 0x4154e5
        __asm _emit 0xeb
        __asm _emit 0x08
        xor eax, eax
        cmp dword ptr [ecx + 8], edx
        setne al
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
