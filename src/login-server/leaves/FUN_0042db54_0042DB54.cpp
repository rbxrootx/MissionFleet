// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DB54 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0042db54_0042DB54() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi]
        cmp dword ptr [esi - 0ch], 1
        ; Exact mapped bytes 7E 1F: jle 0x42db7f
        __asm _emit 0x7e
        __asm _emit 0x1f
        ; Exact mapped bytes E8 7D FF FF FF: call 0x42dae2
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi - 8]
        mov ecx, edi
        ; Exact mapped bytes E8 A9 FE FF FF: call 0x42da18
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi - 8]
        inc eax
        push eax
        push esi
        push dword ptr [edi]
        ; Exact mapped bytes E8 44 10 FF FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        ret
    }
}
