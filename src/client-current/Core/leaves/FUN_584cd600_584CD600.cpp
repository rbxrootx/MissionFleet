// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CD600 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_584cd600_584CD600() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        imul ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, dword ptr [edx + 68h]
        imul edx, eax, 24h
        add ecx, edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        lea edx, [edx + ecx - 1]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 21 FD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
