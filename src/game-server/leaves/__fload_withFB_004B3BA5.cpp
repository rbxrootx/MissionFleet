// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B3BA5 .. +0x43 bytes.
extern "C" __declspec(naked) void __fload_withFB_004B3BA5() {
    __asm {
        mov eax, dword ptr [edx + 4]
        and eax, 7ff00000h
        cmp eax, 7ff00000h
        ; Exact mapped bytes 74 03: je 0x4b3bb7
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes DD 02: fld qword ptr [edx]
        __asm _emit 0xdd
        __asm _emit 0x02
        ret
        mov eax, dword ptr [edx + 4]
        sub esp, 0ah
        or eax, 7fff0000h
        mov dword ptr [esp + 6], eax
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [edx]
        shld eax, ecx, 0bh
        shl ecx, 0bh
        mov dword ptr [esp + 4], eax
        mov dword ptr [esp], ecx
        ; Exact mapped bytes DB 2C 24: fld xword ptr [esp]
        __asm _emit 0xdb
        __asm _emit 0x2c
        __asm _emit 0x24
        add esp, 0ah
        test eax, 0
        mov eax, dword ptr [edx + 4]
        ret
    }
}
