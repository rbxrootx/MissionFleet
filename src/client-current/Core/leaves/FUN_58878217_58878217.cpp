// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58878217 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_58878217_58878217() {
    __asm {
        push ebp
        mov ebp, esp
        add esp, -20h
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], ecx
        lea eax, [ebp + 8]
        lea ecx, [ebp - 20h]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 90 06 00 00: call 0x588788d0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 66 81 7D 08 7F 02: cmp word ptr [ebp + 8], 0x27f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 74 03: je 0x58878251
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes D9 6D 08: fldcw word ptr [ebp + 8]
        __asm _emit 0xd9
        __asm _emit 0x6d
        __asm _emit 0x08
        leave
        ret
    }
}
