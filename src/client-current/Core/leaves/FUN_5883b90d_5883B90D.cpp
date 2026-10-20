// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B90D .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_5883b90d_5883B90D() {
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
        ; Exact mapped bytes E8 AF 08 00 00: call 0x5883c1d5
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + 4]
        ; Exact mapped bytes E8 8E FF FF FF: call 0x5883b8bc
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        xchg dword ptr [esi], eax
        mov eax, edi
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
