// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484C40 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00484c40_00484C40() {
    __asm {
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 39 15 9C 90 68 00: cmp dword ptr [0x68909c], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7E 15: jle 0x484c65
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ecx, 6890a4h
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 74 0F: je 0x484c68
        __asm _emit 0x74
        __asm _emit 0x0f
        add ecx, 14h
        inc edx
        ; Exact mapped bytes 3B 15 9C 90 68 00: cmp edx, dword ptr [0x68909c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 7C F0: jl 0x484c55
        __asm _emit 0x7c
        __asm _emit 0xf0
        xor eax, eax
        ret
        mov eax, 1
        ret
    }
}
