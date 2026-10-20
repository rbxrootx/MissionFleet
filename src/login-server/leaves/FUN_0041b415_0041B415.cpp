// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B415 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_0041b415_0041B415() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 22 FA FF FF: call 0x41ae3f
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        push 0
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 7C 0B: jl 0x41b436
        __asm _emit 0x7c
        __asm _emit 0x0b
        push 1
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 02 00 00 00: call 0x41b438
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
