// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D267 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_0041d267_0041D267() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x41d275
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 90 B0 00 00 00: call dword ptr [eax + 0xb0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        push 1
        push esi
        mov ecx, dword ptr [eax + 88h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [eax + 88h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        pop esi
        ret
    }
}
