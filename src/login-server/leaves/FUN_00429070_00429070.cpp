// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429070 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_00429070_00429070() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        push ebx
        push esi
        push edi
        mov esi, dword ptr [esp + 10h]
        push eax
        push esi
        ; Exact mapped bytes E8 BE FD FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 20h]
        mov ebx, dword ptr [esp + 1ch]
        add esp, 8
        push ecx
        push edx
        push ebx
        push esi
        push eax
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 8B 1D 64 C4 43 00: mov ebx, dword ptr [0x43c464]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x64
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 A1 0E 14 45 00: mov ax, word ptr [0x45140e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        xor eax, eax
        ; Exact mapped bytes 66 A1 14 14 45 00: mov ax, word ptr [0x451414]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret
    }
}
