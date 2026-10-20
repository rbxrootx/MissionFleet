// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053E309 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_0053e309_0053E309() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        ; Exact mapped bytes E8 71 6A FE FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x53e330
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        ; Exact mapped bytes E8 6F E8 F8 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 79: jmp 0x53e3a9
        __asm _emit 0xeb
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 3
        ; Exact mapped bytes 75 20: jne 0x53e359
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        ; Exact mapped bytes E8 48 6A FE FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x53e359
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        ; Exact mapped bytes E8 46 E8 F8 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 50: jmp 0x53e3a9
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 3
        ; Exact mapped bytes 75 20: jne 0x53e382
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 1F 6A FE FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x53e382
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 1D E8 F8 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x53e3a9
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10h], 3
        ; Exact mapped bytes 75 1E: jne 0x53e3a9
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 F6 69 FE FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x53e3a9
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 F4 E7 F8 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
