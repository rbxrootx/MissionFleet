// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B6C4C .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_004b6c4c_004B6C4C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        push edi
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, 7
        lea edi, [ebp - 24h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea eax, [ebp - 10h]
        push eax
        push 0
        push 410h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C5 49 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x49
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ecx + 14h]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 F3 B1 07 00: call 0x531e7d
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb1
        __asm _emit 0x07
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 200h
        ; Exact mapped bytes 72 17: jb 0x4b6caa
        __asm _emit 0x72
        __asm _emit 0x17
        cmp dword ptr [ebp - 20h], 209h
        ; Exact mapped bytes 77 0E: ja 0x4b6caa
        __asm _emit 0x77
        __asm _emit 0x0e
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 9C BE 68 00: call dword ptr [0x68be9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        shl ecx, 10h
        or eax, ecx
        mov dword ptr [ebp - 18h], eax
        lea edx, [ebp - 24h]
        push edx
        push 0
        push 407h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 49 07 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x49
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
