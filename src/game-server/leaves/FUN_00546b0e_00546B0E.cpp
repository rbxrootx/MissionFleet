// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00546B0E .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_00546b0e_00546B0E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 14dh
        push 5c8c2ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 36 46 FB FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x46
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x546b4b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 2B 0D AC E8 5D 00: sub ecx, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x546b66
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 2B 0D AC E8 5D 00: sub ecx, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 94h]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 94h]
        mov ecx, dword ptr [ebp - 8]
        sub eax, dword ptr [ecx + 4ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 48h], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 7D 2D: jge 0x546bcb
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 5c8c84h
        ; Exact mapped bytes E8 69 90 F8 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx + 48h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4ch], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 48h], 0
        push 37h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B1 86 FA FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 66 59 FF FF: call 0x53c54f
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
