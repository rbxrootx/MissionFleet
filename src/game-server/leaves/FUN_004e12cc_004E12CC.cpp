// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E12CC .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_004e12cc_004E12CC() {
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
        ; Exact mapped bytes E8 E5 A8 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ecx + 14h]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 80 46 05 00: call 0x53598a
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 200h
        ; Exact mapped bytes 72 17: jb 0x4e132a
        __asm _emit 0x72
        __asm _emit 0x17
        cmp dword ptr [ebp - 20h], 209h
        ; Exact mapped bytes 77 0E: ja 0x4e132a
        __asm _emit 0x77
        __asm _emit 0x0e
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 78 27 5E 00: call dword ptr [0x5e2778]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x5e
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
        ; Exact mapped bytes E8 83 A8 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa8
        __asm _emit 0x05
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
