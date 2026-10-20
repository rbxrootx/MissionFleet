// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051A057 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_0051a057_0051A057() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 1
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F6 93 F8 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x93
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51a088
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c1h
        push 67598ch
        ; Exact mapped bytes E8 BD EC 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51a088
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x51a063
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 18h]
        add edx, 8
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 9D 32 00 00: call 0x51d350
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        and eax, 14h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x51a0de
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax - 1]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4]
        and ecx, 3
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x51a0f4
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EA 83 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
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
