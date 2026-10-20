// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878BE30 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_5878be30_5878BE30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AF 07 00 00: call 0x5878c5f0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 67 02 00 00: call 0x5878c0b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 4E 54 D1 FF: call 0x584a12a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x54
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5A B6 CF FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb6
        __asm _emit 0xcf
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 64 61 D1 FF: call 0x584a1fd0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x61
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 8
        push eax
        lea ecx, [ebp - 1]
        push ecx
        ; Exact mapped bytes E8 A7 FA FF FF: call 0x5878b920
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
