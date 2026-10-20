// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2F40 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_587b2f40_587B2F40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 48 FE D4 FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 8]
        lea ecx, [eax + edx*2]
        push ecx
        ; Exact mapped bytes E8 2E FE D4 FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 10h]
        sub edx, dword ptr [ebp + 14h]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax*2]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax*2]
        mov eax, dword ptr [ebp + 1ch]
        lea ecx, [edx + eax*2]
        push ecx
        ; Exact mapped bytes E8 02 FE D4 FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
