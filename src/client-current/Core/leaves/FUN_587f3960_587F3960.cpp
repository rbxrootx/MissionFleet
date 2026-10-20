// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F3960 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_587f3960_587F3960() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be6fch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 19: je 0x587f3992
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 7B 5C 06 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 2F FC FF: call 0x587b68e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
