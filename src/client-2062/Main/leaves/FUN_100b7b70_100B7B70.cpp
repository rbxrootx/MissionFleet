// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B7B70 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_100b7b70_100B7B70() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 68h]
        mov eax, dword ptr [esi + 54h]
        mov edx, dword ptr [ecx + 20h]
        sub eax, edx
        mov edx, dword ptr [ecx + 18h]
        add eax, edx
        mov edx, dword ptr [ecx + 4]
        push eax
        push edx
        ; Exact mapped bytes E8 D3 03 F9 FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x03
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop esi
        ret
    }
}
