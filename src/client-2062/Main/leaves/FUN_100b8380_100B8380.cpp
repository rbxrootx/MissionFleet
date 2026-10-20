// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B8380 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_100b8380_100B8380() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 7ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 68h]
        mov edx, dword ptr [esi + 54h]
        push edx
        mov eax, dword ptr [ecx + 4]
        push eax
        ; Exact mapped bytes E8 C5 FB F8 FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop esi
        ret
    }
}
