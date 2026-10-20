// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00501EA4 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_00501ea4_00501EA4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 40dh
        push 675764h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 9D 83 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x501ee8
        __asm _emit 0x75
        __asm _emit 0x14
        push 40eh
        push 675764h
        ; Exact mapped bytes E8 5D 6E 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x501ee8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x501ec3
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F1 E9 FF FF: call 0x5008ef
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 0bh]
        and edx, 0ffh
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffh
        shl eax, 10h
        or edx, eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
