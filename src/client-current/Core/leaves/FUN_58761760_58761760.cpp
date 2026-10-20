// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58761760 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_58761760_58761760() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 AA 35 D3 FF: call 0x58494d20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x35
        __asm _emit 0xd3
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 9A 35 D3 FF: call 0x58494d20
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x35
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        imul ecx, dword ptr [eax]
        mov eax, ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
