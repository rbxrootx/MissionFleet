// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041AABB .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0041aabb_0041AABB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, dword ptr [ebp + 0ch]
        push esi
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 24h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 28h]
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 24h]
        push eax
        mov eax, dword ptr [ebp + 8]
        xor esi, esi
        lea ecx, [eax - 0cch]
        mov dword ptr [ebp - 24h], esi
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 77 F0 FF FF: call 0x419b71
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 20h], esi
        pop esi
        ; Exact mapped bytes 74 09: je 0x41ab09
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp + 20h]
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        leave
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
