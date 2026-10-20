// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414F35 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_00414f35_00414F35() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov esi, ecx
        push 0
        push esi
        push 0ah
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 24 05 00 00: call 0x41546f
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [ebp - 38h]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 18h]
        pop esi
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
