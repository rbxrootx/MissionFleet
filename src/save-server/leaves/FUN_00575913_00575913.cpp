// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575913 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_00575913_00575913() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 6a7h
        push 67cd14h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 2E 49 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x49
        __asm _emit 0xf6
        __asm _emit 0xff
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 27 DB F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x575957
        __asm _emit 0x75
        __asm _emit 0x14
        push 6a8h
        push 67cd14h
        ; Exact mapped bytes E8 EE 33 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x33
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575957
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x575932
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x57597d
        __asm _emit 0x75
        __asm _emit 0x14
        push 6abh
        push 67cd14h
        ; Exact mapped bytes E8 C8 33 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x33
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57597d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x57595d
        __asm _emit 0x75
        __asm _emit 0xda
        push 640c20h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ach]
        push eax
        ; Exact mapped bytes E8 5F 4F FD FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1C: je 0x5759bc
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 38: call dword ptr [eax + 0x38]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
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
