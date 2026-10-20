// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00549724 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_00549724_00549724() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 28: je 0x54975b
        __asm _emit 0x74
        __asm _emit 0x28
        push 1
        push 100h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 13 67 F8 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54975b
        __asm _emit 0x75
        __asm _emit 0x14
        push 8ch
        push 5cb734h
        ; Exact mapped bytes E8 AA B2 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54975b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x54972d
        __asm _emit 0x75
        __asm _emit 0xcc
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C6 66 F8 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x549784
        __asm _emit 0x75
        __asm _emit 0x14
        push 8dh
        push 5cb734h
        ; Exact mapped bytes E8 81 B2 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x549784
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x549761
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 0F: jmp 0x5497a7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 DF 38 F4 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 32: je 0x5497e3
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 5ch
        ; Exact mapped bytes 74 16: je 0x5497d2
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2fh
        ; Exact mapped bytes 74 0B: je 0x5497d2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 3ah
        ; Exact mapped bytes 75 0F: jne 0x5497e1
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A5 38 F4 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB B5: jmp 0x549798
        __asm _emit 0xeb
        __asm _emit 0xb5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 0F: jne 0x5497f8
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes EB 14: jmp 0x54980c
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
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
