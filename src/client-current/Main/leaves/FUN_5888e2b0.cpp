// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888E2B0 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_5888e2b0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 4c8h]
        ; Exact mapped bytes E8 32 A5 07 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa5
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4cch]
        ; Exact mapped bytes E8 27 A5 07 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa5
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c4h]
        ; Exact mapped bytes E8 1C A5 07 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa5
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c0h]
        ; Exact mapped bytes E8 11 A5 07 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xa5
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4c0h]
        sub eax, 32h
        push eax
        ; Exact mapped bytes E8 6F 50 07 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4c8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4cch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 4c4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 4c0h]
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 174h]
        mov ecx, dword ptr [ecx + 204h]
        pop esi
        ; Exact mapped bytes E9 B9 A4 07 00: jmp 0x589087f0
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
