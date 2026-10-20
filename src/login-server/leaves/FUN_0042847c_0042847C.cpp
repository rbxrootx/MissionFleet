// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042847C .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0042847c_0042847C() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        or edi, 0ffffffffh
        test byte ptr [esi + 0ch], 83h
        ; Exact mapped bytes 74 34: je 0x4284bf
        __asm _emit 0x74
        __asm _emit 0x34
        push esi
        ; Exact mapped bytes E8 FF F4 FF FF: call 0x427990
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov edi, eax
        ; Exact mapped bytes E8 2C 09 00 00: call 0x428dc5
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 10h]
        ; Exact mapped bytes E8 44 08 00 00: call 0x428ce5
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x4284ad
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 12: jmp 0x4284bf
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x4284bf
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        ; Exact mapped bytes E8 64 70 FF FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [esi + 1ch], 0
        pop ecx
        and dword ptr [esi + 0ch], 0
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
