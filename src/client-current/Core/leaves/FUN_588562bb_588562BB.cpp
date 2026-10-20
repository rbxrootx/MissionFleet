// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588562BB .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_588562bb_588562BB() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea ecx, [ebp - 28h]
        push esi
        push dword ptr [ebp + 20h]
        ; Exact mapped bytes E8 D0 A9 FF FF: call 0x58850c9f
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 24h]
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F B2 FF FF: call 0x5885150c
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        lea ecx, [ebp - 28h]
        mov esi, eax
        ; Exact mapped bytes E8 ED A9 FF FF: call 0x58850ce7
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        leave
        ret
    }
}
