// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005671AD .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_005671ad_005671AD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0a8h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E 51 FE FF: call 0x54c33a
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
