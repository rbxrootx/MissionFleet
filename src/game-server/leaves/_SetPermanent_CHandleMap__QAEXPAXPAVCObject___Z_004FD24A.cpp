// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FD24A .. +0x36 bytes.
extern "C" __declspec(naked) void _SetPermanent_CHandleMap__QAEXPAXPAVCObject___Z_004FD24A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0
        ; Exact mapped bytes E8 45 FF FE FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        ; Exact mapped bytes E8 93 E3 FE FF: call 0x4eb5ff
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 25 FF FE FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
