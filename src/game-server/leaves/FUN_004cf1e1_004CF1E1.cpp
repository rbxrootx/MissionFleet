// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF1E1 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_004cf1e1_004CF1E1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        and eax, 0ffff001fh
        shl eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        and ch, 7
        sar ecx, 5
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        sar edx, 0bh
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        and eax, 0ffff001fh
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        and ch, 1
        sar ecx, 5
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        sar edx, 9
        add edx, 50h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 BA ED FD FF: call 0x4ae020
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 75 11: jne 0x4cf287
        __asm _emit 0x75
        __asm _emit 0x11
        push 37h
        push 5c4ed8h
        ; Exact mapped bytes E8 7E 57 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cf287
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x4cf26e
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 28h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
