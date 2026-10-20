// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9C00 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_004c9c00_004C9C00() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        push ebx
        push esi
        push edi
        mov esi, dword ptr [esp + 10h]
        push eax
        push esi
        ; Exact mapped bytes E8 BE FD FF FF: call 0x4c99d0
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
        ; Exact mapped bytes FF 15 E4 25 5E 00: call dword ptr [0x5e25e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 8B 1D E8 25 5E 00: mov ebx, dword ptr [0x5e25e8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 A1 EE 04 5E 00: mov ax, word ptr [0x5e04ee]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        xor eax, eax
        ; Exact mapped bytes 66 A1 F4 04 5E 00: mov ax, word ptr [0x5e04f4]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x5e
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
