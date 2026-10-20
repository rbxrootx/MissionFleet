// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004245F0 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_004245f0_004245F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b78ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 54h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 DA 06 10 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 634394h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        ; Exact mapped bytes 0F BF 05 BC 05 67 00: movsx eax, word ptr [0x6705bc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 3
        push eax
        push 670550h
        push 888h
        ; Exact mapped bytes E8 73 7A 0A 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 10h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 82 D0 FD FF: call 0x4016f9
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 54h
        cmp ebp, esp
        ; Exact mapped bytes E8 58 07 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
