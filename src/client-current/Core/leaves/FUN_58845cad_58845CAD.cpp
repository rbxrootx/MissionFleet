// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58845CAD .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_58845cad_58845CAD() {
    __asm {
        lea eax, [ebp - 310h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 63 0B 00 00: call 0x5884681f
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2d4h], eax
        mov eax, dword ptr [ebp - 2d4h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 2d8h]
        lea eax, [eax + ecx*4]
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
