// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58755E10 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_58755e10_58755E10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov esi, dword ptr [ebp + 8]
        add esi, 1f4h
        mov edi, dword ptr [ebp - 4]
        add edi, 1f4h
        mov ecx, 2eh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [eax + 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [eax + 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 28h]
        mov dword ptr [eax + 28h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 2ch]
        mov dword ptr [eax + 2ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 A2 FF FF: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
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
