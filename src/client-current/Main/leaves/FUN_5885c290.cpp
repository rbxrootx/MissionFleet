// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885C290 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_5885c290() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, 270fh
        cmp eax, edx
        ; Exact mapped bytes 7F 10: jg 0x5885c2ad
        __asm _emit 0x7f
        __asm _emit 0x10
        push esi
        mov esi, dword ptr [ecx + 0ach]
        mov dword ptr [esi + 0bch], eax
        pop esi
        ; Exact mapped bytes EB 0C: jmp 0x5885c2b9
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ecx + 0ach]
        mov dword ptr [eax + 0bch], edx
        mov eax, dword ptr [esp + 8]
        cmp eax, edx
        ; Exact mapped bytes 7F 0F: jg 0x5885c2d0
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 0b0h]
        mov dword ptr [ecx + 0bch], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0b0h]
        mov dword ptr [eax + 0bch], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
