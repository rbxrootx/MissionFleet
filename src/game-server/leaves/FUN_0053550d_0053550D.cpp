// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053550D .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_0053550d_0053550D() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 2B FF 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 11: jne 0x53552f
        __asm _emit 0x75
        __asm _emit 0x11
        push 13h
        push 581fc0h
        ; Exact mapped bytes E8 D6 F4 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53552f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x535513
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes E8 09 FF 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
