// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588696F9 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_588696f9_588696F9() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        and dword ptr [ebp - 0ch], 0
        and dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 76 14: jbe 0x58869723
        __asm _emit 0x76
        __asm _emit 0x14
        ; Exact mapped bytes E8 5B 8D FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 8C 78 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        leave
        ret
        ; Exact mapped bytes E8 78 F4 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 A6 62 00 00: call 0x5886f9d6
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F1 CA 00 00: call 0x58876226
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        lea ecx, [ebp - 1]
        or dword ptr [eax + 350h], 10h
        lea eax, [ebp - 8]
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 28h], eax
        lea eax, [ebp - 8]
        mov dword ptr [ebp - 24h], eax
        lea eax, [ebp - 0ch]
        mov dword ptr [ebp - 20h], eax
        lea eax, [ebp + 8]
        mov dword ptr [ebp - 1ch], eax
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 28h]
        push eax
        lea eax, [ebp - 1]
        push eax
        ; Exact mapped bytes E8 EF F5 FF FF: call 0x58868d66
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        leave
        ret
    }
}
