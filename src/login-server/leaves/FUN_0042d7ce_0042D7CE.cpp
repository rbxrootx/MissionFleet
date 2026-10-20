// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D7CE .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_0042d7ce_0042D7CE() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        lea eax, [ebp + 8]
        push eax
        mov esi, ecx
        push edi
        ; Exact mapped bytes E8 65 FF FF FF: call 0x42d747
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x42d815
        __asm _emit 0x75
        __asm _emit 0x2f
        cmp dword ptr [esi + 4], eax
        ; Exact mapped bytes 75 0C: jne 0x42d7f7
        __asm _emit 0x75
        __asm _emit 0x0c
        push 1
        mov ecx, esi
        push dword ptr [esi + 8]
        ; Exact mapped bytes E8 51 FE FF FF: call 0x42d648
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 E3 FE FF FF: call 0x42d6e1
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax + 4], edi
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + edx*4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esi + 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + edx*4], eax
        pop edi
        add eax, 8
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
