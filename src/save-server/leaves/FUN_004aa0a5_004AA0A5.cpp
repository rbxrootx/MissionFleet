// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AA0A5 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_004aa0a5_004AA0A5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes 75 14: jne 0x4aa0d6
        __asm _emit 0x75
        __asm _emit 0x14
        push 1d4h
        push 672a58h
        ; Exact mapped bytes E8 6F EC 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xec
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4aa0d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4aa0b1
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AA C1 02 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4aa101
        __asm _emit 0x74
        __asm _emit 0x14
        push 1d5h
        push 672a58h
        ; Exact mapped bytes E8 44 EC 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4aa101
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4aa0dc
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 24h]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 28h]
        push eax
        push 0
        push 1006h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
