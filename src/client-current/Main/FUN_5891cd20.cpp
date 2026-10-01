// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5891CD20 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5891cd20() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0ch]
        mov dword ptr [esi], 589a2d88h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5891cd40
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 60 02 06 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0ch], 0
        mov ecx, esi
        ; Exact mapped bytes E8 79 6D FE FF: call 0x58903ac0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5891cd57
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 EE FE 05 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
