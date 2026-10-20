// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E8759 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_004e8759_004E8759() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cb37h
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
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CF D4 FF FF: call 0x4e5c4f
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 636c5ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x4e87bb
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
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
        ; Exact mapped bytes 75 14: jne 0x4e87bb
        __asm _emit 0x75
        __asm _emit 0x14
        push 3f3h
        push 6733e0h
        ; Exact mapped bytes E8 8A 05 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e87bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x4e8790
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E3 2D 04 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10h]
        push eax
        ; Exact mapped bytes FF 15 08 BE 68 00: call dword ptr [0x68be08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 62 D6 FF FF: call 0x4e5e47
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4e87ee
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 89 0D 00 00: call 0x4e9577
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
