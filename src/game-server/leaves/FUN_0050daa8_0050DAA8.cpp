// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050DAA8 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_0050daa8_0050DAA8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 A4 74 03 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x50dad3
        __asm _emit 0x74
        __asm _emit 0x13
        push 0d7h
        push 5c4e5ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 8D D6 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
