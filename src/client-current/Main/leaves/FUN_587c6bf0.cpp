// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6BF0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_587c6bf0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
        push eax
        mov edi, ecx
        ; Exact mapped bytes E8 82 FE FF FF: call 0x587c6a80
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        add esp, 4
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test al, al
        ; Exact mapped bytes 74 0C: je 0x587c6c1c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [edi + 3ch], 0
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, edi
        mov dword ptr [edi + 3ch], esi
        ; Exact mapped bytes E8 FA DD FF FF: call 0x587c4a20
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
