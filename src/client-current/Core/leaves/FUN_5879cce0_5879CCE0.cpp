// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879CCE0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_5879cce0_5879CCE0() {
    __asm {
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 24h], eax
        push esi
        mov esi, dword ptr [esp + 30h]
        lea eax, [esp + 25h]
        mov dword ptr [esp + 4], esi
        push edi
        mov dword ptr [esp + 8], eax
        lea eax, [esp + 8]
        push eax
        push dword ptr [esp + 40h]
        push dword ptr [esp + 40h]
        ; Exact mapped bytes E8 2E F4 FF FF: call 0x5879c140
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov ecx, edx
        add esp, 0ch
        ; Exact mapped bytes 0F 11 06: movups xmmword ptr [esi], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        mov dword ptr [esi + 10h], 0
        mov dword ptr [esi + 14h], 0
        lea edi, [ecx + 1]
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x5879cd32
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edi
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 8C C4 D0 FF: call 0x584a91d0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc4
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 2ch]
        mov eax, esi
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 FD 42 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 28h
        ret
    }
}
