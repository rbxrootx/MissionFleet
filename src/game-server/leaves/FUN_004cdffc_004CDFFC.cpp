// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CDFFC .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_004cdffc_004CDFFC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 18 1E 00 00: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ce032
        __asm _emit 0x75
        __asm _emit 0x14
        push 172h
        push 5c4c5ch
        ; Exact mapped bytes E8 D3 69 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x69
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ce032
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4ce00f
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 79 F0 FB FF: call 0x48d0c0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F3 FE FF FF: call 0x4cdf4a
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        or al, 1
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
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
