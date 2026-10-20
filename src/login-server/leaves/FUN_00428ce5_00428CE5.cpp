// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428CE5 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_00428ce5_00428CE5() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        ; Exact mapped bytes 3B 35 80 11 45 00: cmp esi, dword ptr [0x451180]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 73 38: jae 0x428d2a
        __asm _emit 0x73
        __asm _emit 0x38
        mov ecx, esi
        mov eax, esi
        sar ecx, 5
        and eax, 1fh
        mov ecx, dword ptr [ecx*4 + 451080h]
        lea eax, [eax + eax*8]
        test byte ptr [ecx + eax*4 + 4], 1
        ; Exact mapped bytes 74 1D: je 0x428d2a
        __asm _emit 0x74
        __asm _emit 0x1d
        push edi
        push esi
        ; Exact mapped bytes E8 4C EB FF FF: call 0x427860
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 28 00 00 00: call 0x428d42
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov edi, eax
        ; Exact mapped bytes E8 9D EB FF FF: call 0x4278bf
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, edi
        pop edi
        pop esi
        ret
        ; Exact mapped bytes E8 AB 8E FF FF: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 A9 8E FF FF: call 0x421be3
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [eax], 0
        or eax, 0ffffffffh
        pop esi
        ret
    }
}
