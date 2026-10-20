// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883CBC0 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_5883cbc0_5883CBC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push 1008h
        push ebx
        lea eax, [esi + 2244h]
        push eax
        ; Exact mapped bytes E8 28 02 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        movzx eax, word ptr [ebp - 12h]
        movzx ecx, word ptr [ebp - 0eh]
        or dword ptr [esi + 8], 0ffffffffh
        or dword ptr [esi + 0ch], 0ffffffffh
        imul ecx, eax
        movzx eax, word ptr [ebp - 14h]
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 14h], ebx
        imul ecx, eax
        xor eax, eax
        mov byte ptr [esi + 18h], bl
        mov dword ptr [esi + 30h], ebx
        xor ecx, 0dad53ah
        mov dword ptr [esi + 10h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [esi + 34h], bl
        xor ecx, ebp
        mov byte ptr [esi + 0e3ch], bl
        mov dword ptr [esi + 123ch], ebx
        mov byte ptr [esi + 1240h], bl
        mov dword ptr [esi + 2240h], ebx
        ; Exact mapped bytes 66 89 86 34 04 00 00: mov word ptr [esi + 0x434], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes E8 F8 43 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
