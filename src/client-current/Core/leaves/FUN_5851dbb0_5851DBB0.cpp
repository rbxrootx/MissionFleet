// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851DBB0 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_5851dbb0_5851DBB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D6 51 FE FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [eax + edx*2]
        push ecx
        ; Exact mapped bytes E8 BC 51 FE FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        xor edx, edx
        ; Exact mapped bytes 66 89 55 FE: mov word ptr [ebp - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfe
        lea eax, [ebp - 2]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp + 8]
        lea eax, [edx + ecx*2]
        push eax
        ; Exact mapped bytes E8 DD 1F FB FF: call 0x584cfbe0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1f
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
