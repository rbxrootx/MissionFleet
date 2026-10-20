// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886EA0E .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_5886ea0e_5886EA0E() {
    __asm {
        push 14h
        push 588ed550h
        ; Exact mapped bytes E8 46 3D FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 8]
        cmp esi, -2
        ; Exact mapped bytes 75 1B: jne 0x5886ea3d
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 33 3A FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [eax], 0
        ; Exact mapped bytes E8 40 3A FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x5886eb09
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 78 0D: js 0x5886ea4e
        __asm _emit 0x78
        __asm _emit 0x0d
        ; Exact mapped bytes 3B 35 B0 9B 96 58: cmp esi, dword ptr [0x58969bb0]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 73 05: jae 0x5886ea4e
        __asm _emit 0x73
        __asm _emit 0x05
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x5886ea50
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x5886ea6e
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 01 3A FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [eax], 0
        ; Exact mapped bytes E8 0E 3A FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 3F 25 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB C7: jmp 0x5886ea35
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov ecx, esi
        sar ecx, 6
        mov dword ptr [ebp - 20h], ecx
        mov eax, esi
        and eax, 3fh
        imul edx, eax, 38h
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ecx*4 + 589699b0h]
        test byte ptr [eax + edx + 28h], 1
        ; Exact mapped bytes 74 C5: je 0x5886ea54
        __asm _emit 0x74
        __asm _emit 0xc5
        cmp dword ptr [ebp + 10h], 7fffffffh
        ; Exact mapped bytes 76 15: jbe 0x5886eaad
        __asm _emit 0x76
        __asm _emit 0x15
        ; Exact mapped bytes E8 BD 39 FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [eax], 0
        ; Exact mapped bytes E8 CA 39 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes EB BA: jmp 0x5886ea67
        __asm _emit 0xeb
        __asm _emit 0xba
        push esi
        ; Exact mapped bytes E8 C2 AC 00 00: call 0x58879775
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        or ebx, 0ffffffffh
        mov dword ptr [ebp - 1ch], ebx
        and dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov ecx, dword ptr [ebp - 24h]
        test byte ptr [eax + ecx + 28h], 1
        ; Exact mapped bytes 75 15: jne 0x5886eae7
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 98 39 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 78 39 FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [eax], 0
        ; Exact mapped bytes EB 14: jmp 0x5886eafb
        __asm _emit 0xeb
        __asm _emit 0x14
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 34 00 00 00: call 0x5886eb27
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ebx, eax
        mov dword ptr [ebp - 1ch], ebx
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 18 00 00 00: call 0x5886eb1f
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
