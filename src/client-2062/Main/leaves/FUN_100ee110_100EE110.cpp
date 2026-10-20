// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EE110 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_100ee110_100EE110() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 40000000h
        mov dword ptr [ecx + 5c6ch], eax
        ; Exact mapped bytes 75 26: jne 0x100ee147
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ecx + 5c70h], 40000h
        ; Exact mapped bytes 75 41: jne 0x100ee16e
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [ecx + 0f10h]
        mov eax, 32ff32h
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ecx + 0f14h]
        mov dword ptr [ecx + 60h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x100ee16e
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [ecx + 5c70h], 40000h
        ; Exact mapped bytes 75 17: jne 0x100ee16e
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ecx + 0f10h]
        mov eax, 0ffffffh
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ecx + 0f14h]
        mov dword ptr [ecx + 60h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
