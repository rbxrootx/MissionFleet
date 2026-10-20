// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CA200 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_004ca200_004CA200() {
    __asm {
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 39 15 3C 05 5E 00: cmp dword ptr [0x5e053c], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7E 15: jle 0x4ca225
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ecx, 5e0544h
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 74 0F: je 0x4ca228
        __asm _emit 0x74
        __asm _emit 0x0f
        add ecx, 14h
        inc edx
        ; Exact mapped bytes 3B 15 3C 05 5E 00: cmp edx, dword ptr [0x5e053c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 7C F0: jl 0x4ca215
        __asm _emit 0x7c
        __asm _emit 0xf0
        xor eax, eax
        ret
        mov eax, 1
        ret
    }
}
