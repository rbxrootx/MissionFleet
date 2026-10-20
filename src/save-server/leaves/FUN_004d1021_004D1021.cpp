// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1021 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_004d1021_004D1021() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 75 14: jne 0x4d1052
        __asm _emit 0x75
        __asm _emit 0x14
        push 432h
        push 671a64h
        ; Exact mapped bytes E8 F3 7C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d1052
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d102d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 3D: jne 0x4d109e
        __asm _emit 0x75
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 F4 BE 68 00: call dword ptr [0x68bef4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 C1 FF FF: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 F8 BE 68 00: call dword ptr [0x68bef8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 37 C1 FF FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 18: jmp 0x4d10b6
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 38h]
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 38h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 90 00 00 00: call dword ptr [eax + 0x90]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
