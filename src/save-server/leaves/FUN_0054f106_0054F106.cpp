// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F106 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_0054f106_0054F106() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 198h
        push 67bee8h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 3B B1 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54f142
        __asm _emit 0x75
        __asm _emit 0x14
        push 199h
        push 67bee8h
        ; Exact mapped bytes E8 03 9C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f142
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54f125
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        push 2
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 10h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 09: je 0x54f198
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 FB F2 FF FF: call 0x54e493
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
