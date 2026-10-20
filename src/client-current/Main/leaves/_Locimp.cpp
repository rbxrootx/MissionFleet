// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971907 .. +0x49 bytes.
extern "C" __declspec(naked) void _Locimp() {
    __asm {
        push 4
        mov eax, 5898acf1h
        ; Exact mapped bytes E8 2D BC 00 00: call 0x5897d540
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi + 4], 1
        xor eax, eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 10h], eax
        mov al, byte ptr [ebp + 8]
        push 5898c978h
        lea ecx, [esi + 18h]
        mov dword ptr [esi], 589a2f20h
        mov byte ptr [esi + 14h], al
        ; Exact mapped bytes E8 EA 3A DC FF: call 0x58735430
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x3a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes E8 26 BC 00 00: call 0x5897d573
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
