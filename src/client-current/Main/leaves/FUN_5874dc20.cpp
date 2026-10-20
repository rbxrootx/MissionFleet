// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874DC20 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5874dc20() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 30h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        push 0
        push 0eeach
        push esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        movzx eax, word ptr [esi + 16ah]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 E8 BF 06 00: call 0x587b9c30
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 134h], 1
        mov dl, byte ptr [esi + 164h]
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        and dl, 7fh
        ; Exact mapped bytes 66 0F B6 C2: movzx ax, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 81 04 0A 00 00: mov word ptr [ecx + 0xa04], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
