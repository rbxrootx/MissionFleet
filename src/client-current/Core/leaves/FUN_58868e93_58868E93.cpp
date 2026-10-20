// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868E93 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_58868e93_58868E93() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        push edi
        push 0b8h
        push 1
        mov edi, ecx
        ; Exact mapped bytes E8 65 63 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        mov esi, eax
        push 0
        mov dword ptr [edx], esi
        ; Exact mapped bytes E8 58 3D 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 74 3A: je 0x58868ef9
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [edi]
        lea ecx, [ebp - 1]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [edi + 4]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [edi + 8]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [edi + 0ch]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [edi + 10h]
        push 4
        mov dword ptr [ebp - 10h], eax
        pop eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 20h]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 20 FE FF FF: call 0x58868d19
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        leave
        ret
    }
}
