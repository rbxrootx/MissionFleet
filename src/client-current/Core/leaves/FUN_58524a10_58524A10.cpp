// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58524A10 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58524a10_58524A10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 7F 28 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x28
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 94 FE FF FF: call 0x585248e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD 34 F6 FF: call 0x58487f40
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x34
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        add edx, 11ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 18h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
