// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F14E5 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004f14e5_004F14E5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 10h]
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4f14fc
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x4f157e
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FA D8 FF FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 50000000h
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4f150f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 6F: jmp 0x4f157e
        __asm _emit 0xeb
        __asm _emit 0x6f
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3A 48 04 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4B 4A 04 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4a
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 AB 04 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0B: jne 0x4f153d
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 02: je 0x4f153f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 3F: jmp 0x4f157e
        __asm _emit 0xeb
        __asm _emit 0x3f
        push 4
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 B9 04 00: call 0x53cf41
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4f1560
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 DE FF FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4f1560
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 1E: jmp 0x4f157e
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 B4 00 00 00: call dword ptr [eax + 0xb4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4f1574
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 0A: jmp 0x4f157e
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 51 00 00: call 0x4f66e8
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
