// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043769A .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_0043769a_0043769A() {
    __asm {
        push ecx
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
        push esi
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes FF 15 54 C3 43 00: call dword ptr [0x43c354]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        push esi
        push dword ptr [esp + 20h]
        mov dword ptr [esp + 1ch], eax
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
        mov eax, dword ptr [esp + 8]
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
