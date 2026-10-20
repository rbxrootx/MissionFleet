// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004251C0 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_004251c0_004251C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 68h]
        mov ecx, 1ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 24h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 D6 06 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 40c78h]
        ; Exact mapped bytes E8 74 C7 FD FF: call 0x40197e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 66 8B 55 14: mov dx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 55 E0: mov word ptr [ebp - 0x20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 40c78h]
        ; Exact mapped bytes E8 AA C4 FD FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 68h
        cmp ebp, esp
        ; Exact mapped bytes E8 A3 FB 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
