// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426928 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_00426928_00426928() {
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
        ; Exact mapped bytes 73 40: jae 0x426975
        __asm _emit 0x73
        __asm _emit 0x40
        mov ecx, esi
        mov eax, esi
        sar ecx, 5
        and eax, 1fh
        mov ecx, dword ptr [ecx*4 + 451080h]
        lea eax, [eax + eax*8]
        test byte ptr [ecx + eax*4 + 4], 1
        ; Exact mapped bytes 74 25: je 0x426975
        __asm _emit 0x74
        __asm _emit 0x25
        push edi
        push esi
        ; Exact mapped bytes E8 09 0F 00 00: call 0x427860
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esp + 18h]
        push dword ptr [esp + 18h]
        push esi
        ; Exact mapped bytes E8 28 00 00 00: call 0x42698d
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov edi, eax
        ; Exact mapped bytes E8 52 0F 00 00: call 0x4278bf
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov eax, edi
        pop edi
        pop esi
        ret
        ; Exact mapped bytes E8 60 B2 FF FF: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 5E B2 FF FF: call 0x421be3
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [eax], 0
        or eax, 0ffffffffh
        pop esi
        ret
    }
}
