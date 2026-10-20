// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B3C4 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_0041b3c4_0041B3C4() {
    __asm {
        mov eax, 43af07h
        ; Exact mapped bytes E8 3A 42 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], edi
        mov dword ptr [ebp - 4], edi
        mov dword ptr [esi + 4], edi
        push dword ptr [ebp + 8]
        mov byte ptr [ebp - 4], 1
        push esi
        ; Exact mapped bytes E8 83 24 00 00: call 0x41d872
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        mov dword ptr [ebp - 20h], edi
        mov dword ptr [ebp - 1ch], edi
        mov dword ptr [ebp - 18h], edi
        mov dword ptr [ebp - 14h], edi
        ; Exact mapped bytes E8 C2 F9 FF FF: call 0x41adc5
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
