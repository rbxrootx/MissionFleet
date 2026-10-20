// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889A53E .. +0x44 bytes.
extern "C" __declspec(naked) void Catch_All_5889a53e() {
    __asm {
        mov ebx, dword ptr [ebp - 1ch]
        cmp ebx, 1
        mov esi, dword ptr [ebp - 24h]
        mov edi, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7E 10: jle 0x5889a55c
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 20h]
        lea edx, [esi + esi*2]
        lea eax, [edi + edx*8]
        push eax
        push edi
        ; Exact mapped bytes E8 54 FB FF FF: call 0x5889a0b0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 7E 1C: jle 0x5889a57c
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 10h]
        lea eax, [esi + ecx]
        lea edx, [eax + eax*2]
        lea eax, [edi + edx*8]
        lea ecx, [esi + esi*2]
        lea edx, [edi + ecx*8]
        mov ecx, dword ptr [ebp - 20h]
        push eax
        push edx
        ; Exact mapped bytes E8 34 FB FF FF: call 0x5889a0b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        ; Exact mapped bytes E8 C0 26 0E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x26
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}
