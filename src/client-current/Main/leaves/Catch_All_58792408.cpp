// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58792408 .. +0x56 bytes.
extern "C" __declspec(naked) void Catch_All_58792408() {
    __asm {
        mov ebx, dword ptr [ebp - 64h]
        cmp ebx, 1
        mov esi, dword ptr [ebp - 54h]
        mov edi, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 7E 16: jle 0x5879242c
        __asm _emit 0x7e
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 60h]
        lea edx, [esi*8]
        sub edx, esi
        lea eax, [edi + edx*4]
        push eax
        push edi
        ; Exact mapped bytes E8 34 FE 16 00: call 0x58902260
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0x16
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 7E 28: jle 0x58792458
        __asm _emit 0x7e
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 10h]
        lea eax, [esi + ecx]
        lea edx, [eax*8]
        sub edx, eax
        lea eax, [edi + edx*4]
        lea ecx, [esi*8]
        sub ecx, esi
        lea edx, [edi + ecx*4]
        mov ecx, dword ptr [ebp - 60h]
        push eax
        push edx
        ; Exact mapped bytes E8 08 FE 16 00: call 0x58902260
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0x16
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 E4 A7 1E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa7
        __asm _emit 0x1e
        __asm _emit 0x00
    }
}
