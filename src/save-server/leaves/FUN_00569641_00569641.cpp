// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00569641 .. +0x19E bytes.
extern "C" __declspec(naked) void FUN_00569641_00569641() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A4 44 FD FF: call 0x53dafa
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 20h]
        push edx
        push 67b080h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 F1 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8A F3 FB FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        push 67b090h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 F1 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6F F3 FB FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 67b09ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB F1 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7D F4 FB FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5696b9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 24h]
        ; Exact mapped bytes 0F 83 04 01 00 00: jae 0x5697cc
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 67b0bch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 67b0b0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D F1 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 16 F3 FB FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F F1 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 24h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, edx
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        push eax
        push 67b0c4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A F1 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AA F2 FB FF: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 67b0e0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F F1 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F1 F3 FB FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 67b0f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 F1 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 F3 FB FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 67b114h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 F0 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C6 F2 FB FF: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 67b130h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE F0 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DF F2 FB FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        push 67b148h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 F0 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 F2 FB FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        push eax
        push 67b160h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 F0 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 41 F2 FB FF: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        push 67b174h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 84 F0 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 E4 FE FF FF: jmp 0x5696b0
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 67b178h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 F0 FB FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
