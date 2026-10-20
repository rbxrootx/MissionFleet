// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58871C80 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_58871c80() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        cmp eax, 1
        ; Exact mapped bytes 75 29: jne 0x58871cb5
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [esi + 0c0h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esp + 0ch]
        mov ecx, dword ptr [eax + 64h]
        mov edx, dword ptr [eax + 60h]
        push ecx
        mov ecx, dword ptr [esi + 0c0h]
        push edx
        push eax
        ; Exact mapped bytes E8 AF 84 FF FF: call 0x5886a160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 18: jne 0x58871cd2
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 0B 88 FF FF: call 0x5886a4d0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0c0h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
