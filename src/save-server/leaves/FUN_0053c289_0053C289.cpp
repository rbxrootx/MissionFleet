// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053C289 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_0053c289_0053C289() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x53c2b7
        __asm _emit 0x75
        __asm _emit 0x11
        push 28h
        push 6731b8h
        ; Exact mapped bytes E8 8E CA FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53c2b7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x53c295
        __asm _emit 0x75
        __asm _emit 0xd8
        lea eax, [ebp - 4]
        push eax
        push 0
        push 466h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        shr eax, 18h
        and eax, 0ffh
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx], al
        mov edx, dword ptr [ebp - 4]
        shr edx, 10h
        and edx, 0ffh
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax], dl
        mov ecx, dword ptr [ebp - 4]
        shr ecx, 8
        and ecx, 0ffh
        mov edx, dword ptr [ebp + 10h]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        mov ecx, dword ptr [ebp + 14h]
        mov byte ptr [ecx], al
        mov eax, dword ptr [ebp - 8]
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
