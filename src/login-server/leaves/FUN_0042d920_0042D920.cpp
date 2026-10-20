// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D920 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0042d920_0042D920() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx]
        cmp dword ptr [eax - 0ch], 0
        ; Exact mapped bytes 7C 0E: jl 0x42d93d
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov dword ptr [esi], eax
        add eax, -0ch
        push eax
        ; Exact mapped bytes FF 15 14 C2 43 00: call dword ptr [0x43c214]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x42d94d
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi], eax
        push dword ptr [ecx]
        mov ecx, esi
        ; Exact mapped bytes E8 E7 03 00 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
