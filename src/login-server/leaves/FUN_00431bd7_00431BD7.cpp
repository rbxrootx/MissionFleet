// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431BD7 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_00431bd7_00431BD7() {
    __asm {
        push esi
        mov esi, ecx
        push 0dh
        ; Exact mapped bytes E8 C2 53 00 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x431bf3
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, eax
        ; Exact mapped bytes E8 FD 40 00 00: call 0x435cf0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        push 0dh
        ; Exact mapped bytes E8 19 54 00 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x431c07
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop esi
        ret
    }
}
