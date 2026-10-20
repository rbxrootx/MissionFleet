// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874B090 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5874b090() {
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
        movzx eax, byte ptr [esi + 164h]
        mov ecx, dword ptr [esi + 0b0h]
        push 0
        and eax, 7fh
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C DF 06 00: call 0x587b9060
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xdf
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 88 45 A2 58: mov edx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 134h], 1
        pop esi
        ret
    }
}
