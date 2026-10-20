// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005355AC .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_005355ac_005355AC() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 8C FE 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 11: jne 0x5355ce
        __asm _emit 0x75
        __asm _emit 0x11
        push 1bh
        push 581fc0h
        ; Exact mapped bytes E8 37 F4 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5355ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x5355b2
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes E8 6A FE 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 10h]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
