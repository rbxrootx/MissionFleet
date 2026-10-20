// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057A15C .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_0057a15c_0057A15C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 255h
        push 67d108h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 E5 00 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0xf6
        __asm _emit 0xff
        push 256h
        push 67d108h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D2 00 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C6 F0 FF FF: call 0x57925c
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        lea edx, [ebp - 4]
        push edx
        push 1
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x57a1b4
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x57a24c
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x57a1ce
        __asm _emit 0x75
        __asm _emit 0x14
        push 25dh
        push 67d108h
        ; Exact mapped bytes E8 77 EB FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xeb
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57a1ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x57a1b4
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        lea ecx, [ebp - 18h]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 54: jne 0x57a240
        __asm _emit 0x75
        __asm _emit 0x54
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x57a210
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x57a23e
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 16: je 0x57a22c
        __asm _emit 0x74
        __asm _emit 0x16
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 B0 C2 68 00: call dword ptr [0x68c2b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x57a23e
        __asm _emit 0xeb
        __asm _emit 0x12
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 E4 FE FF: call 0x568697
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 94: jmp 0x57a1d4
        __asm _emit 0xeb
        __asm _emit 0x94
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
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
