// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861F5A0 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_5861f5a0_5861F5A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 64h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c80h]
        ; Exact mapped bytes E8 30 A1 F0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0xff
        mov esi, eax
        sub esi, 0ah
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c80h]
        ; Exact mapped bytes E8 9D 16 1A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0x1a
        __asm _emit 0x00
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 46: jle 0x5861f624
        __asm _emit 0x7e
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c94h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        sub esi, 0eh
        mov edi, dword ptr [ebp - 0ch]
        imul edi, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c80h]
        ; Exact mapped bytes E8 E8 A0 F0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        sub ecx, 0ah
        mov eax, edi
        cdq
        idiv ecx
        sub esi, eax
        mov dword ptr [ebp - 10h], esi
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0D 61 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x61
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
