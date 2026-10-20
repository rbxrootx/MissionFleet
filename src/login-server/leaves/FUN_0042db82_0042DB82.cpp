// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DB82 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0042db82_0042DB82() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi]
        cmp dword ptr [eax - 0ch], 1
        ; Exact mapped bytes 7F 05: jg 0x42db97
        __asm _emit 0x7f
        __asm _emit 0x05
        cmp edi, dword ptr [eax - 4]
        ; Exact mapped bytes 7E 0F: jle 0x42dba6
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, esi
        ; Exact mapped bytes E8 44 FF FF FF: call 0x42dae2
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 72 FE FF FF: call 0x42da18
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfe
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
