// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C200 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5883c200_5883C200() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        lea ecx, [ebp - 4]
        lea esi, [edi + 0ch]
        and dword ptr [esi], 0
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 BC FF FF FF: call 0x5883c1d5
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 8]
        lea ecx, [edi + 4]
        ; Exact mapped bytes E8 F1 F9 FF FF: call 0x5883bc15
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        xchg dword ptr [esi], eax
        mov eax, edi
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
