// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5260 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_587c5260() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 4ch], 0
        ; Exact mapped bytes 74 23: je 0x587c528c
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        push -1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp eax, -1
        ; Exact mapped bytes 74 15: je 0x587c528c
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [esi + 4ch]
        push eax
        ; Exact mapped bytes E8 2E 7D 1B 00: call 0x5897cfae
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7d
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x587c528c
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        pop esi
        ret
        xor eax, eax
        pop esi
        ret
    }
}
