// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863B14 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58863b14_58863B14() {
    __asm {
        mov edi, edi
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi]
        movzx eax, byte ptr [eax]
        push eax
        ; Exact mapped bytes E8 19 23 FF FF: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4]
        mov byte ptr [eax], 0
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi]
        pop esi
        mov eax, dword ptr [eax]
        mov dword ptr [ecx], eax
        mov al, 1
        ret
    }
}
