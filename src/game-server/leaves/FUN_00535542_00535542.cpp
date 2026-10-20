// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00535542 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00535542_00535542() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 F6 FE 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x535564
        __asm _emit 0x75
        __asm _emit 0x11
        push 16h
        push 581fc0h
        ; Exact mapped bytes E8 A1 F4 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x535564
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x535548
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes E8 D4 FE 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ch]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
