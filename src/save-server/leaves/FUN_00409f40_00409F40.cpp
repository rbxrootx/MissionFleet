// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409F40 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_00409f40_00409F40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 74h]
        mov ecx, 1dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        push 28h
        push 0
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 4F B9 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x409f86
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 1
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 5
        ; Exact mapped bytes 7D 4A: jge 0x409fd6
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [eax + edx*8 + 14h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + edx*8 + 18h], 0
        ; Exact mapped bytes 74 2B: je 0x409fd4
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + edx*8 + 14h]
        mov dword ptr [ebp + ecx*8 - 30h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + ecx*8 + 18h]
        mov dword ptr [ebp + eax*8 - 2ch], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB A7: jmp 0x409f7d
        __asm _emit 0xeb
        __asm _emit 0xa7
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 10h], ecx
        push 28h
        lea edx, [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 14h
        push eax
        ; Exact mapped bytes E8 0F B3 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        add esp, 74h
        cmp ebp, esp
        ; Exact mapped bytes E8 EF AD 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
