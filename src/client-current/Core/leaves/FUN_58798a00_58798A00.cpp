// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798A00 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_58798a00_58798A00() {
    __asm {
        sub esp, 1ch
        push esi
        push dword ptr [esp + 24h]
        mov esi, ecx
        lea ecx, [esp + 0ch]
        mov dword ptr [esp + 8], esi
        ; Exact mapped bytes E8 09 10 D1 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x10
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov eax, esi
        ; Exact mapped bytes 66 0F D6 46 04: movq qword ptr [esi + 4], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 0F 10 44 24 08: movups xmm0, xmmword ptr [esp + 8]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 0F 11 46 0C: movups xmmword ptr [esi + 0xc], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes F3 0F 7E 44 24 18: movq xmm0, qword ptr [esp + 0x18]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 66 0F D6 46 1C: movq qword ptr [esi + 0x1c], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x46
        __asm _emit 0x1c
        mov dword ptr [esi], 588b6ca0h
        pop esi
        add esp, 1ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
