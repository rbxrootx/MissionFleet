// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052FF83 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_0052ff83_0052FF83() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x52ffa6
        __asm _emit 0x75
        __asm _emit 0x11
        push 57h
        push 5ccae4h
        ; Exact mapped bytes E8 5F 4A 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52ffa6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x52ff8f
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 11: jne 0x52ffc6
        __asm _emit 0x75
        __asm _emit 0x11
        push 59h
        push 5ccae4h
        ; Exact mapped bytes E8 3F 4A 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52ffc6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52ffac
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 6F: jne 0x530041
        __asm _emit 0x75
        __asm _emit 0x6f
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x52ffe4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 7D 57: jge 0x530041
        __asm _emit 0x7d
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx*8 + 588824h]
        and edx, 0f000h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 0f000h
        cmp edx, ecx
        ; Exact mapped bytes 75 35: jne 0x53003f
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx*8 + 588820h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 01 D0 FF FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x530037
        __asm _emit 0x75
        __asm _emit 0x11
        push 63h
        push 5ccae4h
        ; Exact mapped bytes E8 CE 49 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530037
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x530020
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes EB 02: jmp 0x530041
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9A: jmp 0x52ffdb
        __asm _emit 0xeb
        __asm _emit 0x9a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x530058
        __asm _emit 0x75
        __asm _emit 0x11
        push 6ah
        push 5ccae4h
        ; Exact mapped bytes E8 AD 49 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530058
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x530041
        __asm _emit 0x75
        __asm _emit 0xe3
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 BC 79 FB FF: call 0x4e7a2b
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x530084
        __asm _emit 0x75
        __asm _emit 0x11
        push 6bh
        push 5ccae4h
        ; Exact mapped bytes E8 81 49 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530084
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x53005e
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 6ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 11: je 0x5300a6
        __asm _emit 0x74
        __asm _emit 0x11
        push 6ch
        push 5ccae4h
        ; Exact mapped bytes E8 5F 49 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5300a6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x53008a
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C3 F6 FE FF: call 0x51f77f
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
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
