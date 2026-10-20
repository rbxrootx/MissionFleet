// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425435 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00425435_00425435() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov eax, edi
        dec edi
        test eax, eax
        ; Exact mapped bytes 7E 21: jle 0x425463
        __asm _emit 0x7e
        __asm _emit 0x21
        mov esi, dword ptr [esp + 18h]
        push esi
        push dword ptr [esp + 18h]
        push dword ptr [esp + 14h]
        ; Exact mapped bytes E8 AC FF FF FF: call 0x425400
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [esi], -1
        ; Exact mapped bytes 74 07: je 0x425463
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, edi
        dec edi
        test eax, eax
        ; Exact mapped bytes 7F E3: jg 0x425446
        __asm _emit 0x7f
        __asm _emit 0xe3
        pop edi
        pop esi
        ret
    }
}
