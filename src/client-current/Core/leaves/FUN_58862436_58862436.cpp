// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58862436 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58862436_58862436() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push eax
        mov byte ptr [esi + 24h], 1
        mov dword ptr [esi + 20h], eax
        ; Exact mapped bytes E8 65 FF FF FF: call 0x588623b4
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov byte ptr [esi + 1ch], 1
        mov dword ptr [esi + 18h], eax
        pop esi
        pop ebp
        ret
    }
}
