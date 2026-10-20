// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484640 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_00484640_00484640() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        push ebx
        push esi
        push edi
        mov esi, dword ptr [esp + 10h]
        push eax
        push esi
        ; Exact mapped bytes E8 BE FD FF FF: call 0x484410
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
        ; Exact mapped bytes FF 15 40 BF 68 00: call dword ptr [0x68bf40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 8B 1D 44 BF 68 00: mov ebx, dword ptr [0x68bf44]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 A1 4E 90 68 00: mov ax, word ptr [0x68904e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x4e
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        xor eax, eax
        ; Exact mapped bytes 66 A1 54 90 68 00: mov ax, word ptr [0x689054]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x68
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
