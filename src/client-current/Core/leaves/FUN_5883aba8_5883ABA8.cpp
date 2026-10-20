// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883ABA8 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5883aba8_5883ABA8() {
    __asm {
        push 8
        mov eax, 588929abh
        ; Exact mapped bytes E8 84 79 FF FF: call 0x58832538
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, ecx
        mov dword ptr [ebp - 10h], edi
        lea esi, [edi + 4]
        mov dword ptr [edi], 588c1d6ch
        xor ebx, ebx
        mov dword ptr [ebp - 14h], esi
        mov ecx, esi
        mov dword ptr [ebp - 4], ebx
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 4], ebx
        ; Exact mapped bytes E8 61 04 00 00: call 0x5883b037
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], eax
        mov eax, edi
        mov dword ptr [edi + 0ch], ebx
        ; Exact mapped bytes E8 33 79 FF FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        ret
    }
}
