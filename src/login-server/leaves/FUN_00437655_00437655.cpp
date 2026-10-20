// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437655 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_00437655_00437655() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        push esi
        push edi
        push ebx
        ; Exact mapped bytes FF 15 60 C3 43 00: call dword ptr [0x43c360]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        xor esi, esi
        ; Exact mapped bytes 8B 3D 88 C2 43 00: mov edi, dword ptr [0x43c288]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        push esi
        mov ebp, eax
        push esi
        push esi
        push ebp
        push ebx
        push esi
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push eax
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 66 69 FF FF: call 0x42dfec
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        push esi
        push dword ptr [esp + 20h]
        push eax
        push ebp
        push ebx
        push esi
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
