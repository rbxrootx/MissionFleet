// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00569EBC .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_00569ebc_00569EBC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 130h
        push 5d053ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 87 12 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 70 5F F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5f
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x569efe
        __asm _emit 0x75
        __asm _emit 0x14
        push 131h
        push 5d053ch
        ; Exact mapped bytes E8 07 AB FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xab
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569efe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x569ed9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2A 64 00 00: call 0x570336
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x569f24
        __asm _emit 0x75
        __asm _emit 0x14
        push 132h
        push 5d053ch
        ; Exact mapped bytes E8 E1 AA FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569f24
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x569f04
        __asm _emit 0x75
        __asm _emit 0xda
        push 133h
        push 5d053ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        push edx
        ; Exact mapped bytes E8 1D 12 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        add ecx, 104h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
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
