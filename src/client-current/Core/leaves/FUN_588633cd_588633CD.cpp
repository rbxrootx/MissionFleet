// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588633CD .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_588633cd_588633CD() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 14: jne 0x588633f1
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes E8 8D F0 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 BE DB FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes D9 EE: fldz
        __asm _emit 0xd9
        __asm _emit 0xee
        ; Exact mapped bytes EB 4A: jmp 0x5886343b
        __asm _emit 0xeb
        __asm _emit 0x4a
        push dword ptr [ebp + 0ch]
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 DB 48 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push eax
        push ecx
        push ecx
        mov eax, esp
        ; Exact mapped bytes F2 0F 11 45 F0: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        and dword ptr [eax + 4], 0
        mov dword ptr [eax], esi
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 23 00 00 00: call 0x5886343e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 45 F0: movsd xmm0, qword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf0
        add esp, 10h
        cmp byte ptr [ebp - 14h], 0
        ; Exact mapped bytes F2 0F 11 45 F8: movsd qword ptr [ebp - 8], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 74 0A: je 0x58863438
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 20h]
        and dword ptr [eax + 350h], 0fffffffdh
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        pop esi
        leave
        ret
    }
}
