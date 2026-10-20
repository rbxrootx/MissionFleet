// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004348BC .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_004348bc_004348BC() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov eax, 0ffffh
        cmp edi, eax
        mov esi, ecx
        ; Exact mapped bytes 73 08: jae 0x4348d5
        __asm _emit 0x73
        __asm _emit 0x08
        push edi
        ; Exact mapped bytes E8 66 2F FE FF: call 0x417839
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x4348e5
        __asm _emit 0xeb
        __asm _emit 0x10
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 5C 2F FE FF: call 0x417839
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 1E 0B FE FF: call 0x415403
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
