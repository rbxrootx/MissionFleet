// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976E00 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_58976e00() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        push 0d8h
        mov edi, dword ptr [esi + 14ch]
        push esi
        ; Exact mapped bytes E8 39 FF FF FF: call 0x58976d50
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 1ch], 0
        mov al, byte ptr [esi + 0c4h]
        add esp, 8
        test al, al
        ; Exact mapped bytes 74 09: je 0x58976e34
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 1F 00 00 00: call 0x58976e50
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov al, byte ptr [esi + 0cch]
        test al, al
        ; Exact mapped bytes 74 09: je 0x58976e47
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 BC 00 00 00: call 0x58976f00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        ret
    }
}
