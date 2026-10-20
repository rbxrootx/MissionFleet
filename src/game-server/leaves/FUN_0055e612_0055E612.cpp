// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E612 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_0055e612_0055E612() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes E8 E3 14 00 00: call 0x55fb09
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x55e642
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        push 0
        push 30fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 D5 FD FF: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x55e644
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
