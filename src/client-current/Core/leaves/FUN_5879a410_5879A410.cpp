// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A410 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5879a410_5879A410() {
    __asm {
        push ecx
        mov ecx, dword ptr [ecx + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 1A: jne 0x5879a432
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esp + 8]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 11 00: movups xmmword ptr [eax], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [eax + 10h], ecx
        mov dword ptr [eax + 14h], 0fh
        mov byte ptr [eax], cl
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        lea eax, [eax + eax*2]
        lea eax, [ecx + eax*8]
        mov ecx, dword ptr [esp + 8]
        push eax
        ; Exact mapped bytes E8 DA F5 D0 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [esp + 8]
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
