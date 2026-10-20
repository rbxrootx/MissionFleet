// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58876F9F .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_58876f9f_58876F9F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0b0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp - 0b0h]
        push 55h
        push eax
        or dword ptr [esi + 8], 104h
        ; Exact mapped bytes E8 2A 88 FF FF: call 0x5886f7f7
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7E 3C: jle 0x5887700e
        __asm _emit 0x7e
        __asm _emit 0x3c
        lea ecx, [ebp - 0b0h]
        push edi
        lea edx, [ecx + 2]
        xor edi, edi
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B C7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 F5: jne 0x58876fde
        __asm _emit 0x75
        __asm _emit 0xf5
        sub ecx, edx
        sar ecx, 1
        lea eax, [ecx + 1]
        push eax
        lea eax, [ebp - 0b0h]
        push eax
        lea eax, [esi + 250h]
        push 55h
        push eax
        ; Exact mapped bytes E8 6A EF FE FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x5887701b
        __asm _emit 0x75
        __asm _emit 0x0e
        pop edi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 37 A0 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
        push edi
        push edi
        push edi
        push edi
        push edi
        ; Exact mapped bytes E8 B4 9F FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
