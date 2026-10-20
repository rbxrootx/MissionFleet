// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976D70 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_58976d70() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov dl, byte ptr [esp + 0ch]
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax]
        mov byte ptr [ecx], dl
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [eax + 4]
        inc edx
        dec ecx
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes 75 1C: jne 0x58976daa
        __asm _emit 0x75
        __asm _emit 0x1c
        push esi
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        add esp, 4
        test al, al
        ; Exact mapped bytes 75 11: jne 0x58976daa
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [esi]
        push esi
        mov dword ptr [eax + 14h], 18h
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        add esp, 4
        pop esi
        ret
    }
}
