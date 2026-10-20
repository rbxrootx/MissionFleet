// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58621B60 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_58621b60_58621B60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 7bh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c80h]
        ; Exact mapped bytes E8 71 7B F0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x7b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov esi, eax
        sub esi, 9
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c80h]
        ; Exact mapped bytes E8 DE F0 19 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf0
        __asm _emit 0x19
        __asm _emit 0x00
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 0afh
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 40: jle 0x58621beb
        __asm _emit 0x7e
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c94h]
        mov dword ptr [ebp - 18h], edx
        mov esi, dword ptr [ebp - 0ch]
        imul esi, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c80h]
        ; Exact mapped bytes E8 24 7B F0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x7b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        sub ecx, 9
        mov eax, esi
        cdq
        idiv ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, eax
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 46 3B 19 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x3b
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
