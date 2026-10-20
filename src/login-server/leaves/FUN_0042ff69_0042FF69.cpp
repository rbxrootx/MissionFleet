// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042FF69 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_0042ff69_0042FF69() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 0ch]
        push 435d3bh
        mov ecx, 44dcc0h
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 26 6E 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 38h]
        lea ecx, [ebp - 0ch]
        sub eax, 132h
        push ecx
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [esi]
        push 0
        push 19h
        mov ecx, esi
        ; Exact mapped bytes FF 90 98 00 00 00: call dword ptr [eax + 0x98]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
