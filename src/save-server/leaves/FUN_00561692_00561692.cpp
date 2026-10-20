// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561692 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_00561692_00561692() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes E8 E3 14 00 00: call 0x562b89
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x5616c2
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        push 0
        push 30fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 9F FC FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x5616c4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
