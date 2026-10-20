// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10109200 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_10109200_10109200() {
    __asm {
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 14h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 1ch]
        push 0
        push eax
        mov eax, dword ptr [esp + 1ch]
        inc ecx
        push 0
        push ecx
        mov ecx, dword ptr [esp + 20h]
        inc edx
        inc eax
        push edx
        mov edx, dword ptr [esp + 20h]
        inc ecx
        push eax
        mov eax, dword ptr [esp + 20h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4B A9 FF FF: call 0x10103b80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi], 10176a68h
        ; Exact mapped bytes FF 15 98 51 17 10: call dword ptr [0x10175198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 94h], eax
        mov dword ptr [esi + 90h], 5dch
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
