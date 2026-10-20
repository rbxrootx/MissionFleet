// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429670 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00429670_00429670() {
    __asm {
        ; Exact mapped bytes FF 15 E4 C1 43 00: call dword ptr [0x43c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 39 15 5C 14 45 00: cmp dword ptr [0x45145c], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7E 15: jle 0x429695
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ecx, 451464h
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 74 0F: je 0x429698
        __asm _emit 0x74
        __asm _emit 0x0f
        add ecx, 14h
        inc edx
        ; Exact mapped bytes 3B 15 5C 14 45 00: cmp edx, dword ptr [0x45145c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7C F0: jl 0x429685
        __asm _emit 0x7c
        __asm _emit 0xf0
        xor eax, eax
        ret
        mov eax, 1
        ret
    }
}
