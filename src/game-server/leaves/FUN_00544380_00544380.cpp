// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544380 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_00544380_00544380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 74 11: je 0x5443a9
        __asm _emit 0x74
        __asm _emit 0x11
        push 1fh
        push 5c7374h
        ; Exact mapped bytes E8 5C 06 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5443a9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x54438c
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x5443c6
        __asm _emit 0x75
        __asm _emit 0x11
        push 20h
        push 5c7374h
        ; Exact mapped bytes E8 3F 06 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5443c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x5443af
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 75 11: jne 0x5443e6
        __asm _emit 0x75
        __asm _emit 0x11
        push 21h
        push 5c7374h
        ; Exact mapped bytes E8 1F 06 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5443e6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5443cc
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        ; Exact mapped bytes E8 AC 8D FA FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 80h]
        push eax
        ; Exact mapped bytes E8 7B 68 F6 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0F C0 F6 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc0
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 80h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        ; Exact mapped bytes E8 54 68 F6 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 7ch]
        push eax
        ; Exact mapped bytes E8 E5 BF F6 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xbf
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 94h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 4F 8D FA FF: call 0x4ed19f
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0xff
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
