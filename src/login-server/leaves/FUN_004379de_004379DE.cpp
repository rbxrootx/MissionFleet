// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004379DE .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_004379de_004379DE() {
    __asm {
        push esi
        push edi
        push dword ptr [esp + 0ch]
        mov edi, ecx
        ; Exact mapped bytes E8 E5 FE FF FF: call 0x4378d0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 10h]
        test eax, eax
        mov dword ptr [esi], eax
        ; Exact mapped bytes 74 0B: je 0x437a00
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, edi
        ; Exact mapped bytes E8 7E FE FF FF: call 0x43787a
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 1B: jmp 0x437a1b
        __asm _emit 0xeb
        __asm _emit 0x1b
        push dword ptr [esp + 0ch]
        mov ecx, edi
        ; Exact mapped bytes E8 73 FF FF FF: call 0x43797e
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi], eax
        neg eax
        sbb eax, eax
        and eax, 7fffbffeh
        add eax, 80004002h
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
