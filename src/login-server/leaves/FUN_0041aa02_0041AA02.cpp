// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041AA02 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0041aa02_0041AA02() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, dword ptr [ebp + 8]
        push esi
        xor esi, esi
        cmp dword ptr [eax - 28h], esi
        lea ecx, [eax - 0c8h]
        ; Exact mapped bytes 75 37: jne 0x41aa50
        __asm _emit 0x75
        __asm _emit 0x37
        cmp dword ptr [ecx + 88h], esi
        ; Exact mapped bytes 75 2F: jne 0x41aa50
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], 1
        mov dword ptr [ebp - 20h], eax
        lea eax, [ebp - 24h]
        push eax
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 18h], esi
        mov dword ptr [ebp - 14h], esi
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 28 F1 FF FF: call 0x419b71
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, esi
        ; Exact mapped bytes 75 02: jne 0x41aa52
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        pop esi
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
